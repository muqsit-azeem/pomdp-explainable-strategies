#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,2.f,0.f,0.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[5] <= 0.5) {
		return 3.0f;
	}
	else {
		if (x[3] <= 0.5) {
			return 9.0f;
		}
		else {
			if (x[3] <= 2.5) {
				return 11.0f;
			}
			else {
				if (x[2] <= 1.5) {
					return 11.0f;
				}
				else {
					return 3.0f;
				}

			}

		}

	}

}