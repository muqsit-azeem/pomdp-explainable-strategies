#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {0.f,2.f,3.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[1] <= 1.5) {
		return 0.0f;
	}
	else {
		if (x[2] <= 2.5) {
			return 2.0f;
		}
		else {
			if (x[0] <= 0.5) {
				return 0.0f;
			}
			else {
				return 1.0f;
			}

		}

	}

}