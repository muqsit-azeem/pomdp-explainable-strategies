#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {5.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 4.5) {
		if (x[0] <= 2.5) {
			return 22.0f;
		}
		else {
			return 10.0f;
		}

	}
	else {
		if (x[0] <= 6.0) {
			return 24.0f;
		}
		else {
			if (x[0] <= 10.0) {
				return 14.0f;
			}
			else {
				return 5.0f;
			}

		}

	}

}