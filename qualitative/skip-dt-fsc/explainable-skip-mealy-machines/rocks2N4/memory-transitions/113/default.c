#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {113.f,0.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f,0.f,0.f,0.f,0.f,1.f,1.f,0.f,0.f,1.f,1.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[18] <= 0.5) {
		if (x[17] <= 0.5) {
			if (x[24] <= 0.5) {
				if (x[20] <= 0.5) {
					if (x[22] <= 0.5) {
						if (x[19] <= 0.5) {
							if (x[21] <= 0.5) {
								return 20.0f;
							}
							else {
								return 113.0f;
							}

						}
						else {
							return 113.0f;
						}

					}
					else {
						return 112.0f;
					}

				}
				else {
					return 112.0f;
				}

			}
			else {
				return 2.0f;
			}

		}
		else {
			if (x[21] <= 0.5) {
				if (x[22] <= 0.5) {
					if (x[19] <= 0.5) {
						if (x[20] <= 0.5) {
							return 31.0f;
						}
						else {
							return 112.0f;
						}

					}
					else {
						return 112.0f;
					}

				}
				else {
					return 112.0f;
				}

			}
			else {
				if (x[19] <= 0.5) {
					if (x[20] <= 0.5) {
						return 40.0f;
					}
					else {
						return 112.0f;
					}

				}
				else {
					return 28.0f;
				}

			}

		}

	}
	else {
		if (x[17] <= 0.5) {
			if (x[19] <= 0.5) {
				if (x[20] <= 0.5) {
					if (x[21] <= 0.5) {
						if (x[22] <= 0.5) {
							return 45.0f;
						}
						else {
							return 112.0f;
						}

					}
					else {
						return 112.0f;
					}

				}
				else {
					return 112.0f;
				}

			}
			else {
				if (x[21] <= 0.5) {
					if (x[22] <= 0.5) {
						return 62.0f;
					}
					else {
						return 112.0f;
					}

				}
				else {
					return 112.0f;
				}

			}

		}
		else {
			return 112.0f;
		}

	}

}