#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {21.f,0.f,0.f,0.f,1.f,0.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		return 1.0f;
	}
	else {
		return 5.0f;
	}

}