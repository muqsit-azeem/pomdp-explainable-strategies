#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {11.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 14.5) {
		if (x[0] <= 8.5) {
			if (x[0] <= 1.5) {
				if (x[0] <= 0.5) {
					return 2.0f;
				}
				else {
					return 6.0f;
				}

			}
			else {
				return 2.0f;
			}

		}
		else {
			if (x[0] <= 9.5) {
				return 7.0f;
			}
			else {
				if (x[0] <= 12.5) {
					return 2.0f;
				}
				else {
					if (x[0] <= 13.5) {
						return 7.0f;
					}
					else {
						return 2.0f;
					}

				}

			}

		}

	}
	else {
		if (x[0] <= 15.5) {
			return 7.0f;
		}
		else {
			return 0.0f;
		}

	}

}