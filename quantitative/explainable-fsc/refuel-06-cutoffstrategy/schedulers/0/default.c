#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {0.f,5.f,0.f,1.f,0.f,1.f,0.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[1] <= 3.5) {
		if (x[8] <= 0.5) {
			if (x[6] <= 0.5) {
				return 23.0f;
			}
			else {
				return 22.0f;
			}

		}
		else {
			return 3.0f;
		}

	}
	else {
		if (x[1] <= 4.5) {
			return 2.0f;
		}
		else {
			if (x[0] <= 0.5) {
				return 16.0f;
			}
			else {
				return 1.0f;
			}

		}

	}

}