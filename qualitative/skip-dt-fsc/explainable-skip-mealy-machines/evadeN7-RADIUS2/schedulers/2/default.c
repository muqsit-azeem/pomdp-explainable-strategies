#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {2.f,0.f,2.f,6.f,0.f,3.f,1.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[5] <= 0.0) {
		if (x[3] <= 3.5) {
			return 1.0f;
		}
		else {
			return 4.0f;
		}

	}
	else {
		if (x[5] <= 2.0) {
			return 7.0f;
		}
		else {
			if (x[2] <= 3.5) {
				return 7.0f;
			}
			else {
				return 1.0f;
			}

		}

	}

}