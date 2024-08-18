#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,0.f,1.f,1.f,1.f,1.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[1] <= 2.5) {
		if (x[1] <= 0.5) {
			if (x[8] <= 0.5) {
				return 14.0f;
			}
			else {
				return 10.0f;
			}

		}
		else {
			return 10.0f;
		}

	}
	else {
		if (x[1] <= 4.5) {
			return 24.0f;
		}
		else {
			if (x[1] <= 6.5) {
				if (x[8] <= 0.5) {
					return 10.0f;
				}
				else {
					return 24.0f;
				}

			}
			else {
				return 24.0f;
			}

		}

	}

}