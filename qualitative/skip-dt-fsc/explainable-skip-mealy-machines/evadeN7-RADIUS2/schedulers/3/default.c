#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {3.f,0.f,3.f,5.f,0.f,2.f,2.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[5] <= -0.5) {
		if (x[2] <= 3.5) {
			return 0.0f;
		}
		else {
			return 1.0f;
		}

	}
	else {
		return 7.0f;
	}

}