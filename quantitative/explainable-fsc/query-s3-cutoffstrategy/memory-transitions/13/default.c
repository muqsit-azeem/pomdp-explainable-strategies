#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {2.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 0.5) {
		return 17.0f;
	}
	else {
		if (x[0] <= 1.5) {
			return 14.0f;
		}
		else {
			return 19.0f;
		}

	}

}