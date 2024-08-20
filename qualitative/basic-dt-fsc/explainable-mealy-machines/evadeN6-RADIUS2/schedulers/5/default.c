#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {5.f,0.f,5.f,1.f,0.f,1.f,1.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		return 0.0f;
	}
	else {
		if (x[2] <= 4.5) {
			return 2.0f;
		}
		else {
			return 6.0f;
		}

	}

}