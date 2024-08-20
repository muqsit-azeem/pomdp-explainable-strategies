#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,0.f,1.f,1.f,1.f,1.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[1] <= 0.5) {
		if (x[8] <= 0.5) {
			return 17.0f;
		}
		else {
			return 10.0f;
		}

	}
	else {
		if (x[7] <= 0.5) {
			if (x[1] <= 3.5) {
				return 10.0f;
			}
			else {
				if (x[5] <= 0.5) {
					return 17.0f;
				}
				else {
					return 10.0f;
				}

			}

		}
		else {
			return 17.0f;
		}

	}

}