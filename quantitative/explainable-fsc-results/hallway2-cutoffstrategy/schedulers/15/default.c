#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {15.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 9.5) {
		if (x[0] <= 7.5) {
			return 2.0f;
		}
		else {
			if (x[0] <= 8.5) {
				return 7.0f;
			}
			else {
				return 2.0f;
			}

		}

	}
	else {
		if (x[0] <= 11.5) {
			if (x[0] <= 10.5) {
				return 8.0f;
			}
			else {
				return 6.0f;
			}

		}
		else {
			if (x[0] <= 13.5) {
				return 2.0f;
			}
			else {
				if (x[0] <= 14.5) {
					return 8.0f;
				}
				else {
					return 2.0f;
				}

			}

		}

	}

}