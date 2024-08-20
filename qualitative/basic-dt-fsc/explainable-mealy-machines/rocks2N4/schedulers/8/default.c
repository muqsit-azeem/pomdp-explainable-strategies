#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {8.f,0.f,0.f,0.f,0.f,1.f,0.f,1.f,0.f,0.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[5] <= 0.5) {
		return 6.0f;
	}
	else {
		return 3.0f;
	}

}