#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {4.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 2.5) {
		if (x[0] <= 0.5) {
			return 8.0f;
		}
		else {
			if (x[0] <= 1.5) {
				return 0.0f;
			}
			else {
				return 2.0f;
			}

		}

	}
	else {
		if (x[0] <= 3.5) {
			return 7.0f;
		}
		else {
			if (x[0] <= 4.5) {
				return 6.0f;
			}
			else {
				return 8.0f;
			}

		}

	}

}