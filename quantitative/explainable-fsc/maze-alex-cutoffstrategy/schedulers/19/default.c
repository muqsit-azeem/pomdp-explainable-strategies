#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {0.f,1.f,0.f,1.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[1] <= 0.5) {
		if (x[0] <= 0.5) {
			return 5.0f;
		}
		else {
			if (x[5] <= 0.5) {
				return 7.0f;
			}
			else {
				return 0.0f;
			}

		}

	}
	else {
		if (x[3] <= 0.5) {
			if (x[4] <= 0.5) {
				return 6.0f;
			}
			else {
				return 1.0f;
			}

		}
		else {
			if (x[4] <= 0.5) {
				return 4.0f;
			}
			else {
				return 3.0f;
			}

		}

	}

}