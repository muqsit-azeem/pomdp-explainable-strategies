#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {17.f,0.f,4.f,0.f,0.f,3.f,2.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		return 0.0f;
	}
	else {
		if (x[5] <= 4.0) {
			if (x[3] <= 0.5) {
				return 2.0f;
			}
			else {
				if (x[6] <= 3.0) {
					return 1.0f;
				}
				else {
					return 6.0f;
				}

			}

		}
		else {
			return 4.0f;
		}

	}

}