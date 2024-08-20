#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {16.f,0.f,1.f,6.f,0.f,0.f,2.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[5] <= -0.5) {
		if (x[3] <= 5.5) {
			return 4.0f;
		}
		else {
			return 0.0f;
		}

	}
	else {
		return 7.0f;
	}

}