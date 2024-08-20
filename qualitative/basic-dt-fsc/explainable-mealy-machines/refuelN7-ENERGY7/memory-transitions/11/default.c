#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {11.f,0.f,1.f,1.f,1.f,0.f,1.f,0.f,0.f,0.f,0.f,1.f,0.f,1.f,1.f,1.f,0.f,1.f,0.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[13] <= 0.5) {
		return 1.0f;
	}
	else {
		if (x[18] <= 0.5) {
			return 11.0f;
		}
		else {
			if (x[14] <= 0.5) {
				return 11.0f;
			}
			else {
				return 2.0f;
			}

		}

	}

}