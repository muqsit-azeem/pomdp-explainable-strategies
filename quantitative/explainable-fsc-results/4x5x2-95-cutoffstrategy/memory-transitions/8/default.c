#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 1.5) {
		if (x[0] <= 0.5) {
			return 11.0f;
		}
		else {
			return 4.0f;
		}

	}
	else {
		if (x[0] <= 2.5) {
			return 17.0f;
		}
		else {
			return 5.0f;
		}

	}

}