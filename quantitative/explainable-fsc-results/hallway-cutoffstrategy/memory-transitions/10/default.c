#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {8.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 10.5) {
		if (x[0] <= 4.5) {
			return 10.0f;
		}
		else {
			if (x[0] <= 6.5) {
				return 24.0f;
			}
			else {
				return 10.0f;
			}

		}

	}
	else {
		if (x[0] <= 14.5) {
			return 4.0f;
		}
		else {
			return 10.0f;
		}

	}

}