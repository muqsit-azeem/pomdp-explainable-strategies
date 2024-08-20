#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {108.f,0.f,0.f,0.f,0.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f,1.f,0.f,0.f,1.f,1.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[18] <= 0.5) {
		if (x[21] <= 0.5) {
			if (x[22] <= 0.5) {
				if (x[17] <= 0.5) {
					if (x[19] <= 0.5) {
						if (x[20] <= 0.5) {
							return 7.0f;
						}
						else {
							return 60.0f;
						}

					}
					else {
						return 60.0f;
					}

				}
				else {
					if (x[19] <= 0.5) {
						if (x[20] <= 0.5) {
							return 49.0f;
						}
						else {
							return 60.0f;
						}

					}
					else {
						return 19.0f;
					}

				}

			}
			else {
				return 60.0f;
			}

		}
		else {
			if (x[20] <= 0.5) {
				if (x[17] <= 0.5) {
					if (x[19] <= 0.5) {
						return 108.0f;
					}
					else {
						return 37.0f;
					}

				}
				else {
					return 108.0f;
				}

			}
			else {
				return 60.0f;
			}

		}

	}
	else {
		if (x[17] <= 0.5) {
			if (x[20] <= 0.5) {
				if (x[19] <= 0.5) {
					if (x[21] <= 0.5) {
						if (x[22] <= 0.5) {
							return 31.0f;
						}
						else {
							return 60.0f;
						}

					}
					else {
						return 60.0f;
					}

				}
				else {
					return 60.0f;
				}

			}
			else {
				return 60.0f;
			}

		}
		else {
			return 60.0f;
		}

	}

}