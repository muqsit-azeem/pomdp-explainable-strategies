#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,0.f,0.f,0.f,0.f,0.f,5.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[7] <= 4.5) {
		return 0.0f;
	}
	else {
		return 8.0f;
	}

}