#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {11.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 15.0) {
		if (x[0] <= 6.0) {
			if (x[0] <= 4.5) {
				return 36.0f;
			}
			else {
				return 29.0f;
			}

		}
		else {
			return 36.0f;
		}

	}
	else {
		if (x[0] <= 17.5) {
			if (x[0] <= 16.5) {
				return 10.0f;
			}
			else {
				return 4.0f;
			}

		}
		else {
			if (x[0] <= 18.5) {
				return 11.0f;
			}
			else {
				return 36.0f;
			}

		}

	}

}