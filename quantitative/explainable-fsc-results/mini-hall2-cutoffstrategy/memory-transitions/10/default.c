#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {6.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	return 8.0f;
}