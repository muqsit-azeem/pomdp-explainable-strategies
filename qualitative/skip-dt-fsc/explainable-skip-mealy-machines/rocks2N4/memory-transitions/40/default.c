#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {40.f,0.f,0.f,0.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f,1.f,0.f,0.f,1.f,1.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[17] <= 0.5) {
		if (x[20] <= 0.5) {
			if (x[19] <= 0.5) {
				if (x[18] <= 0.5) {
					return 12.0f;
				}
				else {
					if (x[22] <= 0.5) {
						return 12.0f;
					}
					else {
						return 15.0f;
					}

				}

			}
			else {
				return 40.0f;
			}

		}
		else {
			if (x[18] <= 0.5) {
				if (x[21] <= 0.5) {
					if (x[22] <= 0.5) {
						return 3.0f;
					}
					else {
						return 32.0f;
					}

				}
				else {
					return 40.0f;
				}

			}
			else {
				if (x[21] <= 0.5) {
					if (x[22] <= 0.5) {
						return 20.0f;
					}
					else {
						return 32.0f;
					}

				}
				else {
					return 32.0f;
				}

			}

		}

	}
	else {
		if (x[18] <= 0.5) {
			if (x[20] <= 0.5) {
				if (x[21] <= 0.5) {
					if (x[19] <= 0.5) {
						if (x[22] <= 0.5) {
							return 15.0f;
						}
						else {
							return 13.0f;
						}

					}
					else {
						return 32.0f;
					}

				}
				else {
					return 40.0f;
				}

			}
			else {
				return 32.0f;
			}

		}
		else {
			return 32.0f;
		}

	}

}