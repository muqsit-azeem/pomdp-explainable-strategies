#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {10.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 4.5) {
		return 32.0f;
	}
	else {
		if (x[0] <= 11.5) {
			if (x[0] <= 6.0) {
				return 29.0f;
			}
			else {
				if (x[0] <= 8.5) {
					return 35.0f;
				}
				else {
					return 29.0f;
				}

			}

		}
		else {
			return 5.0f;
		}

	}

}