#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {5.f,0.f,0.f,0.f,1.f,0.f,0.f,1.f,0.f,1.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[4] <= 0.5) {
		if (x[5] <= 0.5) {
			return 3.0f;
		}
		else {
			if (x[6] <= 0.5) {
				return 3.0f;
			}
			else {
				if (x[9] <= 0.5) {
					return 3.0f;
				}
				else {
					return 6.0f;
				}

			}

		}

	}
	else {
		if (x[8] <= 0.5) {
			return 7.0f;
		}
		else {
			return 3.0f;
		}

	}

}