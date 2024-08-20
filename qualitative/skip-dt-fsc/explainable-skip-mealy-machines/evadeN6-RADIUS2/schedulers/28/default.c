#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {28.f,0.f,1.f,1.f,0.f,5.f,4.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[2] <= 1.5) {
		if (x[3] <= 0.5) {
			return 6.0f;
		}
		else {
			if (x[5] <= 3.5) {
				return 1.0f;
			}
			else {
				return 6.0f;
			}

		}

	}
	else {
		return 6.0f;
	}

}