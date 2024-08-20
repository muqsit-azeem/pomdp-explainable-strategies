#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {27.f,0.f,3.f,1.f,0.f,1.f,3.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		return 0.0f;
	}
	else {
		if (x[3] <= 0.5) {
			return 3.0f;
		}
		else {
			if (x[2] <= 2.0) {
				return 1.0f;
			}
			else {
				if (x[5] <= 1.5) {
					return 4.0f;
				}
				else {
					return 1.0f;
				}

			}

		}

	}

}