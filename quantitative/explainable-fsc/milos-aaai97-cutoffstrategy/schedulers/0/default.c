#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 4.0) {
		return 5.0f;
	}
	else {
		if (x[0] <= 8.5) {
			return 3.0f;
		}
		else {
			return 5.0f;
		}

	}

}