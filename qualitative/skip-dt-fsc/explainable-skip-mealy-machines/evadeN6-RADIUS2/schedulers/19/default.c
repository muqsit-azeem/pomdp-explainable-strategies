#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {19.f,0.f,4.f,0.f,0.f,5.f,2.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[3] <= 1.5) {
		if (x[2] <= 3.5) {
			return 4.0f;
		}
		else {
			if (x[3] <= 0.5) {
				return 0.0f;
			}
			else {
				return 1.0f;
			}

		}

	}
	else {
		return 6.0f;
	}

}