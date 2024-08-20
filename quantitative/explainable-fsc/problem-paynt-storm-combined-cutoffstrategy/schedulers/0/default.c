#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,0.f,0.f,0.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[2] <= 0.5) {
		return 0.0f;
	}
	else {
		return 1.0f;
	}

}