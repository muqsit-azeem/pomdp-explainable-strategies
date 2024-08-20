#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 2.0) {
		return 3.0f;
	}
	else {
		return 0.0f;
	}

}