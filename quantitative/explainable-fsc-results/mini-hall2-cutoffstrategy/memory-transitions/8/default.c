#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {5.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 2.5) {
		return 0.0f;
	}
	else {
		if (x[0] <= 6.5) {
			return 8.0f;
		}
		else {
			return 0.0f;
		}

	}

}