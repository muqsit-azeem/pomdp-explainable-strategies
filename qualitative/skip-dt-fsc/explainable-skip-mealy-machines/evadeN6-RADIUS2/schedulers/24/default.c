#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {24.f,0.f,4.f,2.f,0.f,2.f,5.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[2] <= 0.5) {
		return 0.0f;
	}
	else {
		return 6.0f;
	}

}