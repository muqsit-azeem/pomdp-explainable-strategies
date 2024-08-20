#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {8.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f,0.f,0.f,0.f,0.f,0.f,1.f,1.f,0.f,0.f,1.f,1.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[17] <= 0.5) {
		if (x[18] <= 0.5) {
			if (x[21] <= 0.5) {
				return 3.0f;
			}
			else {
				return 4.0f;
			}

		}
		else {
			return 8.0f;
		}

	}
	else {
		return 7.0f;
	}

}