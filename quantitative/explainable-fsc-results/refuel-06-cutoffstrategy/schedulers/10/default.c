#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,0.f,1.f,1.f,1.f,1.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		if (x[5] <= 0.5) {
			return 1.0f;
		}
		else {
			if (x[1] <= 1.5) {
				if (x[3] <= 0.5) {
					return 2.0f;
				}
				else {
					return 22.0f;
				}

			}
			else {
				if (x[1] <= 2.5) {
					return 2.0f;
				}
				else {
					if (x[1] <= 3.5) {
						return 1.0f;
					}
					else {
						return 2.0f;
					}

				}

			}

		}

	}
	else {
		return 3.0f;
	}

}