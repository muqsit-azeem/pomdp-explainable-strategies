#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {10.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 4.5) {
		if (x[0] <= 2.5) {
			return 8.0f;
		}
		else {
			return 10.0f;
		}

	}
	else {
		if (x[0] <= 8.5) {
			return 3.0f;
		}
		else {
			if (x[0] <= 11.5) {
				return 0.0f;
			}
			else {
				return 1.0f;
			}

		}

	}

}