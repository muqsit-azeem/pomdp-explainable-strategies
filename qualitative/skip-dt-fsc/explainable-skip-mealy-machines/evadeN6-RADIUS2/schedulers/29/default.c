#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {29.f,0.f,3.f,1.f,0.f,4.f,2.f,1.f,1.f};
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