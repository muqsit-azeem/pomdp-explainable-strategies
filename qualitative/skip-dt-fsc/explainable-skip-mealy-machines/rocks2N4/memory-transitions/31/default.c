#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {31.f,0.f,0.f,0.f,0.f,1.f,0.f,0.f,1.f,0.f,0.f,0.f,0.f,1.f,1.f,0.f,0.f,1.f,1.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[17] <= 0.5) {
		if (x[20] <= 0.5) {
			if (x[19] <= 0.5) {
				if (x[21] <= 0.5) {
					if (x[18] <= 0.5) {
						if (x[22] <= 0.5) {
							if (x[24] <= 0.5) {
								return 5.0f;
							}
							else {
								return 6.0f;
							}

						}
						else {
							return 31.0f;
						}

					}
					else {
						if (x[22] <= 0.5) {
							return 11.0f;
						}
						else {
							return 6.0f;
						}

					}

				}
				else {
					return 31.0f;
				}

			}
			else {
				return 31.0f;
			}

		}
		else {
			if (x[18] <= 0.5) {
				if (x[22] <= 0.5) {
					return 10.0f;
				}
				else {
					return 31.0f;
				}

			}
			else {
				if (x[21] <= 0.5) {
					if (x[22] <= 0.5) {
						return 16.0f;
					}
					else {
						return 29.0f;
					}

				}
				else {
					return 29.0f;
				}

			}

		}

	}
	else {
		if (x[18] <= 0.5) {
			if (x[19] <= 0.5) {
				if (x[20] <= 0.5) {
					if (x[21] <= 0.5) {
						if (x[22] <= 0.5) {
							return 9.0f;
						}
						else {
							return 11.0f;
						}

					}
					else {
						return 13.0f;
					}

				}
				else {
					return 29.0f;
				}

			}
			else {
				if (x[21] <= 0.5) {
					if (x[22] <= 0.5) {
						return 31.0f;
					}
					else {
						return 29.0f;
					}

				}
				else {
					return 1.0f;
				}

			}

		}
		else {
			return 29.0f;
		}

	}

}