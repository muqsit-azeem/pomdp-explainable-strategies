#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {22.f,0.f,6.f,2.f,0.f,3.f,1.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[5] <= 0.0) {
		return 5.0f;
	}
	else {
		return 7.0f;
	}

}