#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {3.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 2.5) {
		return 16.0f;
	}
	else {
		if (x[0] <= 4.0) {
			return 5.0f;
		}
		else {
			return 4.0f;
		}

	}

}