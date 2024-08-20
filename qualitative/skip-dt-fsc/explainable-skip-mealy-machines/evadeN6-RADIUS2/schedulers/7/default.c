#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {7.f,0.f,5.f,1.f,0.f,0.f,2.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[5] <= 2.5) {
		if (x[5] <= -0.5) {
			return 3.0f;
		}
		else {
			return 6.0f;
		}

	}
	else {
		if (x[3] <= 1.5) {
			if (x[6] <= 3.5) {
				if (x[5] <= 3.5) {
					if (x[3] <= 0.5) {
						return 6.0f;
					}
					else {
						return 0.0f;
					}

				}
				else {
					return 0.0f;
				}

			}
			else {
				return 6.0f;
			}

		}
		else {
			return 1.0f;
		}

	}

}