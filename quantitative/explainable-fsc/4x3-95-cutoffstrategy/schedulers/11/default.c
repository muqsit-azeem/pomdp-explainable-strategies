#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {3.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 2.5) {
		if (x[0] <= 1.0) {
			return 6.0f;
		}
		else {
			return 3.0f;
		}

	}
	else {
		return 1.0f;
	}

}