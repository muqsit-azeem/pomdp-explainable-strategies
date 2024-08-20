#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {2.f,0.f,1.f,1.f,1.f,1.f,1.f,0.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		return 5.0f;
	}
	else {
		return 4.0f;
	}

}