#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {29.f,0.f,0.f,0.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f,1.f,0.f,0.f,1.f,1.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[17] <= 0.5) {
		if (x[20] <= 0.5) {
			if (x[18] <= 0.5) {
				if (x[19] <= 0.5) {
					if (x[22] <= 0.5) {
						return 29.0f;
					}
					else {
						return 4.0f;
					}

				}
				else {
					return 29.0f;
				}

			}
			else {
				if (x[19] <= 0.5) {
					if (x[22] <= 0.5) {
						return 6.0f;
					}
					else {
						return 11.0f;
					}

				}
				else {
					return 29.0f;
				}

			}

		}
		else {
			if (x[18] <= 0.5) {
				if (x[24] <= 0.5) {
					if (x[22] <= 0.5) {
						return 3.0f;
					}
					else {
						return 8.0f;
					}

				}
				else {
					return 0.0f;
				}

			}
			else {
				return 17.0f;
			}

		}

	}
	else {
		if (x[18] <= 0.5) {
			if (x[20] <= 0.5) {
				if (x[22] <= 0.5) {
					return 29.0f;
				}
				else {
					if (x[19] <= 0.5) {
						return 9.0f;
					}
					else {
						return 17.0f;
					}

				}

			}
			else {
				return 17.0f;
			}

		}
		else {
			if (x[22] <= 0.5) {
				return 17.0f;
			}
			else {
				if (x[14] <= 0.5) {
					if (x[21] <= 0.5) {
						if (x[19] <= 0.5) {
							if (x[20] <= 0.5) {
								return 29.0f;
							}
							else {
								return 17.0f;
							}

						}
						else {
							return 17.0f;
						}

					}
					else {
						return 17.0f;
					}

				}
				else {
					return 17.0f;
				}

			}

		}

	}

}