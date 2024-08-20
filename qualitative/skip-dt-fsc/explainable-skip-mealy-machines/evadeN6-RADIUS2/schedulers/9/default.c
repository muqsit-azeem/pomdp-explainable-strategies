#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {9.f,0.f,4.f,0.f,0.f,5.f,3.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[3] <= 0.5) {
		return 6.0f;
	}
	else {
		return 1.0f;
	}

}