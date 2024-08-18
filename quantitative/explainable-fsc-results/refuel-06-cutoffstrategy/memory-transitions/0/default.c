#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {0.f,5.f,0.f,1.f,0.f,1.f,0.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[1] <= 3.5) {
		return 0.0f;
	}
	else {
		if (x[1] <= 4.5) {
			if (x[4] <= 0.5) {
				return 0.0f;
			}
			else {
				return 10.0f;
			}

		}
		else {
			return 0.0f;
		}

	}

}