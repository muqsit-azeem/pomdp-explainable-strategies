#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {20.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 12.0) {
		if (x[0] <= 6.0) {
			if (x[0] <= 2.5) {
				return 8.0f;
			}
			else {
				if (x[0] <= 4.5) {
					return 10.0f;
				}
				else {
					return 4.0f;
				}

			}

		}
		else {
			if (x[0] <= 9.0) {
				if (x[0] <= 7.5) {
					return 3.0f;
				}
				else {
					return 7.0f;
				}

			}
			else {
				if (x[0] <= 10.5) {
					return 6.0f;
				}
				else {
					return 0.0f;
				}

			}

		}

	}
	else {
		if (x[0] <= 18.5) {
			if (x[0] <= 13.5) {
				return 1.0f;
			}
			else {
				return 2.0f;
			}

		}
		else {
			if (x[0] <= 19.5) {
				return 3.0f;
			}
			else {
				if (x[0] <= 21.0) {
					return 5.0f;
				}
				else {
					return 9.0f;
				}

			}

		}

	}

}