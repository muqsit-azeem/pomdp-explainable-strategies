#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 1.5) {
		if (x[0] <= 0.5) {
			return 9.0f;
		}
		else {
			return 4.0f;
		}

	}
	else {
		return 9.0f;
	}

}