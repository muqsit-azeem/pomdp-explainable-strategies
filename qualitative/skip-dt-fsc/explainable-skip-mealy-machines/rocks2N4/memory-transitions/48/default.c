#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {48.f,0.f,0.f,0.f,0.f,1.f,1.f,0.f,0.f,1.f,0.f,0.f,0.f,1.f,1.f,0.f,0.f,1.f,1.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[17] <= 0.5) {
		if (x[20] <= 0.5) {
			if (x[19] <= 0.5) {
				if (x[18] <= 0.5) {
					if (x[24] <= 0.5) {
						return 3.0f;
					}
					else {
						return 0.0f;
					}

				}
				else {
					if (x[22] <= 0.5) {
						return 18.0f;
					}
					else {
						return 8.0f;
					}

				}

			}
			else {
				return 48.0f;
			}

		}
		else {
			if (x[24] <= 0.5) {
				if (x[18] <= 0.5) {
					if (x[21] <= 0.5) {
						if (x[22] <= 0.5) {
							return 14.0f;
						}
						else {
							return 47.0f;
						}

					}
					else {
						return 47.0f;
					}

				}
				else {
					if (x[21] <= 0.5) {
						if (x[22] <= 0.5) {
							return 13.0f;
						}
						else {
							return 47.0f;
						}

					}
					else {
						return 47.0f;
					}

				}

			}
			else {
				return 0.0f;
			}

		}

	}
	else {
		if (x[18] <= 0.5) {
			if (x[19] <= 0.5) {
				if (x[20] <= 0.5) {
					return 13.0f;
				}
				else {
					return 47.0f;
				}

			}
			else {
				if (x[21] <= 0.5) {
					if (x[22] <= 0.5) {
						return 48.0f;
					}
					else {
						return 47.0f;
					}

				}
				else {
					return 10.0f;
				}

			}

		}
		else {
			return 47.0f;
		}

	}

}