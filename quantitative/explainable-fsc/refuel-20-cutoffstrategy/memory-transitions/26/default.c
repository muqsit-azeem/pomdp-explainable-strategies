#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,14.f,0.f,1.f,1.f,1.f,1.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		if (x[1] <= 12.5) {
			return 30.0f;
		}
		else {
			if (x[1] <= 16.0) {
				return 26.0f;
			}
			else {
				if (x[1] <= 18.5) {
					return 30.0f;
				}
				else {
					return 26.0f;
				}

			}

		}

	}
	else {
		return 26.0f;
	}

}