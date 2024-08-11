#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {9.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 2.5) {
		if (x[0] <= 1.5) {
			return 0.0f;
		}
		else {
			return 10.0f;
		}

	}
	else {
		if (x[0] <= 6.5) {
			if (x[0] <= 5.5) {
				return 0.0f;
			}
			else {
				return 8.0f;
			}

		}
		else {
			return 0.0f;
		}

	}

}