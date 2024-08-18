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
			return 11.0f;
		}
		else {
			if (x[0] <= 6.5) {
				return 30.0f;
			}
			else {
				return 11.0f;
			}

		}

	}
	else {
		if (x[0] <= 15.5) {
			return 4.0f;
		}
		else {
			return 11.0f;
		}

	}

}