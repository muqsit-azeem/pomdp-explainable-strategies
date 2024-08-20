#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {6.f,0.f,1.f,1.f,1.f,1.f,1.f,0.f,1.f,0.f,0.f,1.f,0.f,1.f,1.f,1.f,1.f,1.f,0.f,1.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[15] <= 0.5) {
		if (x[12] <= 0.5) {
			return 1.0f;
		}
		else {
			return 0.0f;
		}

	}
	else {
		if (x[14] <= 0.5) {
			return 6.0f;
		}
		else {
			if (x[21] <= 0.5) {
				if (x[13] <= 0.5) {
					if (x[19] <= 0.5) {
						return 2.0f;
					}
					else {
						return 5.0f;
					}

				}
				else {
					if (x[18] <= 0.5) {
						return 6.0f;
					}
					else {
						return 5.0f;
					}

				}

			}
			else {
				return 5.0f;
			}

		}

	}

}