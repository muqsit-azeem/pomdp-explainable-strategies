#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {5.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 5.5) {
		if (x[0] <= 2.5) {
			return 3.0f;
		}
		else {
			return 1.0f;
		}

	}
	else {
		return 3.0f;
	}

}