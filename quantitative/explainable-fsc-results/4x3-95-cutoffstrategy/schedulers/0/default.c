#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {6.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 2.5) {
		if (x[0] <= 0.5) {
			return 1.0f;
		}
		else {
			if (x[0] <= 1.5) {
				return 8.0f;
			}
			else {
				return 9.0f;
			}

		}

	}
	else {
		if (x[0] <= 5.5) {
			return 1.0f;
		}
		else {
			if (x[0] <= 6.5) {
				return 7.0f;
			}
			else {
				return 1.0f;
			}

		}

	}

}