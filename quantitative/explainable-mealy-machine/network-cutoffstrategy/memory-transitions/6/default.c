#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {4.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	return 6.0f;
}