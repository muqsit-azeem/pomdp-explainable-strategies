#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {10.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 9.0) {
		return 1.0f;
	}
	else {
		return 0.0f;
	}

}