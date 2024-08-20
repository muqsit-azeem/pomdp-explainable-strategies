#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {3.f,0.f,-1.f,-1.f,5.f,0.f,0.f,-1.f,-1.f,-1.f,-1.f,0.f,1.f,1.f,0.f,-1.f,-1.f,5.f,0.f,0.f,-1.f,-1.f,-1.f,-1.f,0.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[17] <= 4.5) {
		return 3.0f;
	}
	else {
		if (x[18] <= 1.5) {
			if (x[16] <= 0.5) {
				return 3.0f;
			}
			else {
				if (x[21] <= 2.5) {
					if (x[26] <= 0.5) {
						return 3.0f;
					}
					else {
						return 2.0f;
					}

				}
				else {
					return 3.0f;
				}

			}

		}
		else {
			if (x[21] <= 2.5) {
				return 1.0f;
			}
			else {
				return 3.0f;
			}

		}

	}

}