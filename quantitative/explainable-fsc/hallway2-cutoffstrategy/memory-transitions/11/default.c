#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {15.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 12.5) {
		if (x[0] <= 7.5) {
			if (x[0] <= 4.5) {
				if (x[0] <= 1.5) {
					return 21.0f;
				}
				else {
					if (x[0] <= 2.5) {
						return 16.0f;
					}
					else {
						return 21.0f;
					}

				}

			}
			else {
				return 16.0f;
			}

		}
		else {
			return 21.0f;
		}

	}
	else {
		if (x[0] <= 15.5) {
			return 16.0f;
		}
		else {
			return 18.0f;
		}

	}

}