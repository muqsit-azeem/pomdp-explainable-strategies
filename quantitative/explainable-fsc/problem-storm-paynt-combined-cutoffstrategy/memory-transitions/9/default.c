#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,1.f,0.f,0.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 0.5) {
		return 10.0f;
	}
	else {
		return 4.0f;
	}

}