#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {0.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	return 5.0f;
}