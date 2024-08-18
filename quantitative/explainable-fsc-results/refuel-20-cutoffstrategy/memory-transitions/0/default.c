#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,10.f,0.f,1.f,1.f,1.f,1.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[1] <= 2.5) {
		if (x[8] <= 0.5) {
			return 30.0f;
		}
		else {
			return 0.0f;
		}

	}
	else {
		if (x[1] <= 18.5) {
			return 0.0f;
		}
		else {
			if (x[4] <= 0.5) {
				return 0.0f;
			}
			else {
				return 13.0f;
			}

		}

	}

}