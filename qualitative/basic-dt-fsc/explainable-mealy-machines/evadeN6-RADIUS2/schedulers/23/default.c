#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {23.f,0.f,1.f,0.f,0.f,1.f,4.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		return 0.0f;
	}
	else {
		if (x[5] <= 2.0) {
			if (x[5] <= 0.0) {
				return 2.0f;
			}
			else {
				return 4.0f;
			}

		}
		else {
			if (x[3] <= 0.5) {
				if (x[6] <= 1.5) {
					return 1.0f;
				}
				else {
					if (x[6] <= 2.5) {
						return 3.0f;
					}
					else {
						return 4.0f;
					}

				}

			}
			else {
				return 1.0f;
			}

		}

	}

}