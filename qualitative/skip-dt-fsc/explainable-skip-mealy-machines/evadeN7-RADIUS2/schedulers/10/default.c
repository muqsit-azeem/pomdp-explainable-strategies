#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {10.f,0.f,4.f,4.f,0.f,1.f,1.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[5] <= 0.0) {
		if (x[8] <= 0.5) {
			return 0.0f;
		}
		else {
			if (x[2] <= 4.5) {
				if (x[3] <= 3.5) {
					return 5.0f;
				}
				else {
					return 1.0f;
				}

			}
			else {
				return 5.0f;
			}

		}

	}
	else {
		return 7.0f;
	}

}