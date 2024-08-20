#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {15.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 15.5) {
		return 1.0f;
	}
	else {
		if (x[0] <= 17.5) {
			if (x[0] <= 16.5) {
				return 3.0f;
			}
			else {
				return 4.0f;
			}

		}
		else {
			if (x[0] <= 18.5) {
				return 1.0f;
			}
			else {
				return 5.0f;
			}

		}

	}

}