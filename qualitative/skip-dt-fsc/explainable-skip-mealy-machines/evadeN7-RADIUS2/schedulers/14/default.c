#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {14.f,0.f,5.f,4.f,0.f,2.f,1.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[5] <= -0.5) {
		if (x[8] <= 0.5) {
			return 0.0f;
		}
		else {
			return 4.0f;
		}

	}
	else {
		if (x[2] <= 2.5) {
			if (x[6] <= 3.0) {
				return 7.0f;
			}
			else {
				return 1.0f;
			}

		}
		else {
			return 7.0f;
		}

	}

}