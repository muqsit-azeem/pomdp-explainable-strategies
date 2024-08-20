#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {9.f,0.f,1.f,1.f,2.f,1.f,0.f,4.f,1.f,2.f,4.f,0.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[13] <= 0.5) {
		if (x[4] <= 0.5) {
			return 1.0f;
		}
		else {
			return 2.0f;
		}

	}
	else {
		if (x[5] <= 0.5) {
			if (x[2] <= 0.5) {
				return 3.0f;
			}
			else {
				if (x[4] <= 4.0) {
					return 5.0f;
				}
				else {
					return 4.0f;
				}

			}

		}
		else {
			if (x[4] <= 3.5) {
				if (x[4] <= 0.5) {
					if (x[3] <= 0.5) {
						return 0.0f;
					}
					else {
						if (x[5] <= 1.5) {
							return 5.0f;
						}
						else {
							return 0.0f;
						}

					}

				}
				else {
					return 0.0f;
				}

			}
			else {
				return 3.0f;
			}

		}

	}

}