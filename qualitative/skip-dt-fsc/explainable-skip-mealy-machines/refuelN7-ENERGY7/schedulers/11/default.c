#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {11.f,0.f,1.f,0.f,1.f,0.f,1.f,1.f,2.f,0.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[3] <= 0.5) {
		if (x[10] <= 0.5) {
			if (x[5] <= 0.5) {
				if (x[11] <= 0.5) {
					return 0.0f;
				}
				else {
					return 4.0f;
				}

			}
			else {
				return 2.0f;
			}

		}
		else {
			return 1.0f;
		}

	}
	else {
		if (x[5] <= 0.5) {
			if (x[8] <= 0.5) {
				return 3.0f;
			}
			else {
				return 5.0f;
			}

		}
		else {
			return 3.0f;
		}

	}

}