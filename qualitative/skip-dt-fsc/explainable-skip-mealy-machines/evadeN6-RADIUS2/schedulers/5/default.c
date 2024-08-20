#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {5.f,0.f,5.f,1.f,0.f,1.f,1.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[5] <= 0.0) {
		if (x[2] <= 4.5) {
			if (x[3] <= 2.5) {
				return 2.0f;
			}
			else {
				return 0.0f;
			}

		}
		else {
			return 7.0f;
		}

	}
	else {
		return 6.0f;
	}

}