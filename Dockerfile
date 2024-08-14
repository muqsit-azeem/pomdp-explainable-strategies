# Use a standard Ubuntu base image
FROM ubuntu:22.04

# Maintainer information
MAINTAINER Anonymous Unicorn <anonymousunicorn.artifact@gmail.com>

# Install recommended dependencies for Storm and Graphviz
RUN apt-get update && apt-get install -y --no-install-recommends \
    build-essential \
    git \
    cmake \
    libboost-all-dev \
    libcln-dev \
    libgmp-dev \
    libginac-dev \
    automake \
    libglpk-dev \
    libhwloc-dev \
    libz3-dev \
    libxerces-c-dev \
    libeigen3-dev \
    graphviz \
    python3.10 \
    python3-pip \
    python3-venv \
    && apt-get clean

# Set up Python virtual environment for your specific Python dependencies
RUN python3 -m venv /opt/venv
RUN /opt/venv/bin/pip install --upgrade pip
RUN /opt/venv/bin/pip install dtcontrol

# Ensure the virtual environment is used for Python and pip
ENV PATH="/opt/venv/bin:$PATH"

# Set up working directory and copy the local Storm repository
RUN mkdir -p /opt/pomdp-explainable-strategies
WORKDIR /opt/pomdp-explainable-strategies

# Copy your local repository into the Docker image
COPY pomdp-explainable-strategies-with-scripts/storm /opt/pomdp-explainable-strategies/storm
COPY pomdp-explainable-strategies-with-scripts/pomdp-benchmarks-XStrat /opt/pomdp-explainable-strategies/pomdp-benchmarks-XStrat
COPY pomdp-explainable-strategies-with-scripts/*.py /opt/pomdp-explainable-strategies/
COPY pomdp-explainable-strategies-with-scripts/run_all.sh /opt/pomdp-explainable-strategies/

# Remove any existing build directory to ensure a clean build environment
RUN rm -rf /opt/pomdp-explainable-strategies/storm/build

# Build Storm with default CMake configuration, using 7 cores
WORKDIR /opt/pomdp-explainable-strategies/storm
RUN mkdir -p build && cd build && cmake ..
RUN cd build && make -j 6

# Set the environment path to include the Storm binaries
ENV PATH="/opt/pomdp-explainable-strategies/storm/build/bin:$PATH"

# Set working directory for running your scripts
WORKDIR /opt/pomdp-explainable-strategies

# Default command to run your shell script
CMD ["bash", "./run_all.sh"]

