#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {11.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 6.0) {
		return 32.0f;
	}
	else {
		return 37.0f;
	}

}