#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {0.f,5.f,5.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[1] <= 1.5) {
		if (x[2] <= 1.5) {
			if (x[1] <= 0.5) {
				if (x[2] <= 0.5) {
					return 0.0f;
				}
				else {
					return 5.0f;
				}

			}
			else {
				if (x[2] <= 0.5) {
					return 6.0f;
				}
				else {
					return 0.0f;
				}

			}

		}
		else {
			if (x[2] <= 2.5) {
				if (x[1] <= 0.5) {
					return 1.0f;
				}
				else {
					return 2.0f;
				}

			}
			else {
				return 1.0f;
			}

		}

	}
	else {
		if (x[2] <= 3.5) {
			if (x[1] <= 3.5) {
				if (x[2] <= 1.5) {
					if (x[1] <= 2.5) {
						if (x[2] <= 0.5) {
							return 4.0f;
						}
						else {
							return 3.0f;
						}

					}
					else {
						return 4.0f;
					}

				}
				else {
					if (x[1] <= 2.5) {
						if (x[2] <= 2.5) {
							return 0.0f;
						}
						else {
							return 7.0f;
						}

					}
					else {
						if (x[2] <= 2.5) {
							return 8.0f;
						}
						else {
							return 0.0f;
						}

					}

				}

			}
			else {
				return 4.0f;
			}

		}
		else {
			if (x[1] <= 4.5) {
				if (x[1] <= 3.5) {
					return 1.0f;
				}
				else {
					if (x[2] <= 4.5) {
						return 0.0f;
					}
					else {
						return 1.0f;
					}

				}

			}
			else {
				if (x[2] <= 4.5) {
					return 4.0f;
				}
				else {
					return 0.0f;
				}

			}

		}

	}

}