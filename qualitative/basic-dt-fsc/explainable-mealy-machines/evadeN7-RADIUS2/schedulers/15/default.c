#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {15.f,0.f,6.f,2.f,0.f,0.f,2.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		return 0.0f;
	}
	else {
		if (x[2] <= 4.0) {
			if (x[2] <= 2.5) {
				return 1.0f;
			}
			else {
				return 5.0f;
			}

		}
		else {
			if (x[2] <= 5.5) {
				if (x[5] <= 1.5) {
					return 1.0f;
				}
				else {
					return 4.0f;
				}

			}
			else {
				return 4.0f;
			}

		}

	}

}