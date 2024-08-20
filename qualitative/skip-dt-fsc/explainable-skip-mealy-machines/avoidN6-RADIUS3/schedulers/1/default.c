#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,-1.f,1.f,5.f,1.f,0.f,-1.f,4.f,-1.f,4.f,0.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[13] <= 0.5) {
		if (x[2] <= 0.0) {
			return 2.0f;
		}
		else {
			if (x[3] <= 0.0) {
				return 2.0f;
			}
			else {
				return 6.0f;
			}

		}

	}
	else {
		if (x[4] <= 4.5) {
			if (x[5] <= 1.5) {
				return 4.0f;
			}
			else {
				return 5.0f;
			}

		}
		else {
			return 4.0f;
		}

	}

}