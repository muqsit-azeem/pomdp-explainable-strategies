#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,18.f,0.f,1.f,1.f,1.f,1.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[1] <= 15.5) {
		return 26.0f;
	}
	else {
		return 13.0f;
	}

}