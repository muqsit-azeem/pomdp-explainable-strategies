#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {21.f,0.f,0.f,0.f,1.f,0.f,1.f,0.f,1.f,0.f,0.f,0.f,0.f,1.f,1.f,0.f,0.f,1.f,1.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[18] <= 0.5) {
		if (x[19] <= 0.5) {
			if (x[20] <= 0.5) {
				return 4.0f;
			}
			else {
				return 17.0f;
			}

		}
		else {
			if (x[22] <= 0.5) {
				return 21.0f;
			}
			else {
				return 17.0f;
			}

		}

	}
	else {
		if (x[17] <= 0.5) {
			if (x[20] <= 0.5) {
				return 1.0f;
			}
			else {
				return 17.0f;
			}

		}
		else {
			return 17.0f;
		}

	}

}