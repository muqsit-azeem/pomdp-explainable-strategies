#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {19.f,7.f,0.f,1.f,1.f,3.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[2] <= 0.5) {
		if (x[0] <= 18.5) {
			return 1.0f;
		}
		else {
			if (x[1] <= 6.5) {
				return 1.0f;
			}
			else {
				return 0.0f;
			}

		}

	}
	else {
		return 2.0f;
	}

}