#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {0.f,3.f,3.f};
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
					return 2.0f;
				}

			}
			else {
				if (x[2] <= 0.5) {
					return 4.0f;
				}
				else {
					return 0.0f;
				}

			}

		}
		else {
			return 1.0f;
		}

	}
	else {
		if (x[2] <= 2.5) {
			if (x[2] <= 1.5) {
				return 3.0f;
			}
			else {
				if (x[1] <= 2.5) {
					return 0.0f;
				}
				else {
					return 3.0f;
				}

			}

		}
		else {
			if (x[1] <= 2.5) {
				return 1.0f;
			}
			else {
				return 0.0f;
			}

		}

	}

}