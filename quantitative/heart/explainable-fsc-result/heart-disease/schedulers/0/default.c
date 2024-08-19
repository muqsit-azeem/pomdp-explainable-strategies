#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,1.f,2.f,0.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[2] <= 0.5) {
		if (x[6] <= 0.5) {
			if (x[0] <= 0.5) {
				return 4.0f;
			}
			else {
				return 14.0f;
			}

		}
		else {
			return 0.0f;
		}

	}
	else {
		if (x[3] <= 0.5) {
			if (x[2] <= 1.5) {
				return 7.0f;
			}
			else {
				return 15.0f;
			}

		}
		else {
			if (x[3] <= 1.5) {
				return 15.0f;
			}
			else {
				if (x[3] <= 2.5) {
					return 13.0f;
				}
				else {
					return 15.0f;
				}

			}

		}

	}

}