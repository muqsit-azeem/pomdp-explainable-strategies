#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {3.f,0.f,0.f,1.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	return 2.0f;
}