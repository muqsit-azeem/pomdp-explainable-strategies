#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {13.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 2.5) {
		return 0.0f;
	}
	else {
		if (x[0] <= 14.5) {
			if (x[0] <= 7.5) {
				if (x[0] <= 4.5) {
					return 2.0f;
				}
				else {
					return 3.0f;
				}

			}
			else {
				return 1.0f;
			}

		}
		else {
			if (x[0] <= 18.5) {
				return 2.0f;
			}
			else {
				return 3.0f;
			}

		}

	}

}