#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {32.f,0.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f,0.f,0.f,0.f,0.f,1.f,1.f,0.f,0.f,1.f,1.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[17] <= 0.5) {
		if (x[20] <= 0.5) {
			if (x[19] <= 0.5) {
				if (x[22] <= 0.5) {
					if (x[21] <= 0.5) {
						if (x[24] <= 0.5) {
							return 2.0f;
						}
						else {
							return 4.0f;
						}

					}
					else {
						return 32.0f;
					}

				}
				else {
					if (x[18] <= 0.5) {
						return 7.0f;
					}
					else {
						return 11.0f;
					}

				}

			}
			else {
				return 32.0f;
			}

		}
		else {
			if (x[18] <= 0.5) {
				return 32.0f;
			}
			else {
				if (x[21] <= 0.5) {
					if (x[22] <= 0.5) {
						return 13.0f;
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
			if (x[20] <= 0.5) {
				if (x[22] <= 0.5) {
					if (x[21] <= 0.5) {
						return 2.0f;
					}
					else {
						return 32.0f;
					}

				}
				else {
					if (x[19] <= 0.5) {
						return 11.0f;
					}
					else {
						return 29.0f;
					}

				}

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