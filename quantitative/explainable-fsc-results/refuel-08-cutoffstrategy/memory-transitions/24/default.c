#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,3.f,0.f,0.f,1.f,1.f,1.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[7] <= 0.5) {
		if (x[1] <= 6.5) {
			if (x[1] <= 0.5) {
				if (x[8] <= 0.5) {
					return 14.0f;
				}
				else {
					return 24.0f;
				}

			}
			else {
				if (x[3] <= 0.5) {
					if (x[1] <= 3.5) {
						return 24.0f;
					}
					else {
						return 14.0f;
					}

				}
				else {
					return 24.0f;
				}

			}

		}
		else {
			return 20.0f;
		}

	}
	else {
		return 14.0f;
	}

}