#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {3.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 2.5) {
		if (x[0] <= 0.5) {
			return 13.0f;
		}
		else {
			if (x[0] <= 1.5) {
				return 6.0f;
			}
			else {
				return 5.0f;
			}

		}

	}
	else {
		return 0.0f;
	}

}