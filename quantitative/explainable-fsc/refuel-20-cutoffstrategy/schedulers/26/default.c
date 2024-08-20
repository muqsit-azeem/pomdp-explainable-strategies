#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,14.f,0.f,1.f,1.f,1.f,1.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		if (x[1] <= 16.0) {
			if (x[1] <= 12.5) {
				return 3.0f;
			}
			else {
				return 0.0f;
			}

		}
		else {
			return 3.0f;
		}

	}
	else {
		return 2.0f;
	}

}