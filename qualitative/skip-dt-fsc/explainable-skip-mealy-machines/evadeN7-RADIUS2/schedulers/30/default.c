#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {30.f,0.f,4.f,1.f,0.f,0.f,5.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[3] <= 1.5) {
		if (x[6] <= 1.5) {
			if (x[2] <= 4.5) {
				return 0.0f;
			}
			else {
				return 7.0f;
			}

		}
		else {
			return 7.0f;
		}

	}
	else {
		if (x[5] <= 1.5) {
			return 1.0f;
		}
		else {
			if (x[2] <= 5.5) {
				if (x[2] <= 1.5) {
					return 7.0f;
				}
				else {
					return 3.0f;
				}

			}
			else {
				return 7.0f;
			}

		}

	}

}