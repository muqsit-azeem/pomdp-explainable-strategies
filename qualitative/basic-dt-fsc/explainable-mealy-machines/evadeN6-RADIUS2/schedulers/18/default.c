#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {18.f,0.f,5.f,1.f,0.f,3.f,4.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[3] <= 1.5) {
		if (x[5] <= 3.5) {
			return 0.0f;
		}
		else {
			return 4.0f;
		}

	}
	else {
		if (x[5] <= 0.0) {
			if (x[2] <= 3.5) {
				return 2.0f;
			}
			else {
				return 6.0f;
			}

		}
		else {
			return 1.0f;
		}

	}

}