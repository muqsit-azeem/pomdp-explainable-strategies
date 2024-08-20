#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {19.f,0.f,3.f,4.f,0.f,1.f,1.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[2] <= 5.5) {
		if (x[5] <= 1.5) {
			return 7.0f;
		}
		else {
			if (x[2] <= 4.5) {
				return 1.0f;
			}
			else {
				return 7.0f;
			}

		}

	}
	else {
		return 4.0f;
	}

}