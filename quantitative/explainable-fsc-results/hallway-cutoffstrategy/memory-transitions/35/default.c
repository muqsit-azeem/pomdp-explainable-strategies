#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {5.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 10.5) {
		return 35.0f;
	}
	else {
		if (x[0] <= 16.0) {
			return 5.0f;
		}
		else {
			return 36.0f;
		}

	}

}