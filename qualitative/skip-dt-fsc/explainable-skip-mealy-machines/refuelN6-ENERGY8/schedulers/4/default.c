#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {4.f,0.f,1.f,1.f,1.f,1.f,1.f,0.f,1.f,0.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[4] <= 0.5) {
		return 2.0f;
	}
	else {
		if (x[7] <= 0.5) {
			if (x[10] <= 0.5) {
				return 1.0f;
			}
			else {
				return 0.0f;
			}

		}
		else {
			return 6.0f;
		}

	}

}