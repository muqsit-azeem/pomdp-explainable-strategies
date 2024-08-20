#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {25.f,0.f,6.f,3.f,0.f,3.f,5.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		if (x[5] <= -0.5) {
			return 0.0f;
		}
		else {
			if (x[5] <= 3.5) {
				return 7.0f;
			}
			else {
				if (x[6] <= 4.5) {
					if (x[2] <= 5.5) {
						if (x[3] <= 0.5) {
							return 0.0f;
						}
						else {
							return 7.0f;
						}

					}
					else {
						return 0.0f;
					}

				}
				else {
					return 7.0f;
				}

			}

		}

	}
	else {
		if (x[2] <= 4.0) {
			return 1.0f;
		}
		else {
			if (x[5] <= 3.5) {
				if (x[5] <= 0.5) {
					return 5.0f;
				}
				else {
					return 7.0f;
				}

			}
			else {
				if (x[6] <= 5.5) {
					return 3.0f;
				}
				else {
					return 7.0f;
				}

			}

		}

	}

}