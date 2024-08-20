#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,-1.f,1.f,5.f,2.f,0.f,-1.f,2.f,-1.f,4.f,0.f,1.f,0.f,0.f,-1.f,1.f,5.f,2.f,0.f,-1.f,2.f,-1.f,4.f,0.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	return 1.0f;
}