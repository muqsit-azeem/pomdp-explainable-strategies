#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {26.f,0.f,3.f,3.f,0.f,0.f,4.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		return 0.0f;
	}
	else {
		if (x[2] <= 3.5) {
			return 1.0f;
		}
		else {
			if (x[2] <= 4.5) {
				return 3.0f;
			}
			else {
				if (x[2] <= 5.5) {
					return 4.0f;
				}
				else {
					return 3.0f;
				}

			}

		}

	}

}