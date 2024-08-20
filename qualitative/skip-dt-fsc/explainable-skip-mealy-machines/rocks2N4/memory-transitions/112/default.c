#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {112.f,0.f,0.f,0.f,0.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f,1.f,0.f,0.f,1.f,1.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[18] <= 0.5) {
		if (x[20] <= 0.5) {
			if (x[22] <= 0.5) {
				if (x[21] <= 0.5) {
					if (x[17] <= 0.5) {
						return 7.0f;
					}
					else {
						if (x[19] <= 0.5) {
							return 36.0f;
						}
						else {
							return 112.0f;
						}

					}

				}
				else {
					if (x[17] <= 0.5) {
						return 112.0f;
					}
					else {
						if (x[19] <= 0.5) {
							return 69.0f;
						}
						else {
							return 30.0f;
						}

					}

				}

			}
			else {
				return 69.0f;
			}

		}
		else {
			if (x[24] <= 0.5) {
				return 69.0f;
			}
			else {
				return 0.0f;
			}

		}

	}
	else {
		if (x[17] <= 0.5) {
			if (x[19] <= 0.5) {
				if (x[20] <= 0.5) {
					if (x[21] <= 0.5) {
						if (x[22] <= 0.5) {
							return 28.0f;
						}
						else {
							return 69.0f;
						}

					}
					else {
						return 69.0f;
					}

				}
				else {
					return 69.0f;
				}

			}
			else {
				if (x[21] <= 0.5) {
					if (x[22] <= 0.5) {
						return 53.0f;
					}
					else {
						return 69.0f;
					}

				}
				else {
					return 69.0f;
				}

			}

		}
		else {
			return 69.0f;
		}

	}

}