#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {5.f,0.f,4.f,3.f,0.f,-1.f,-1.f,1.f,0.f,0.f,4.f,3.f,0.f,-1.f,-1.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[11] <= 3.5) {
		if (x[11] <= 2.5) {
			if (x[14] <= 1.5) {
				if (x[10] <= 4.5) {
					if (x[13] <= -0.5) {
						return 5.0f;
					}
					else {
						return 4.0f;
					}

				}
				else {
					return 5.0f;
				}

			}
			else {
				return 1.0f;
			}

		}
		else {
			if (x[13] <= -0.5) {
				if (x[16] <= 0.5) {
					return 5.0f;
				}
				else {
					return 1.0f;
				}

			}
			else {
				return 1.0f;
			}

		}

	}
	else {
		if (x[10] <= 2.5) {
			if (x[11] <= 4.5) {
				if (x[14] <= 1.5) {
					return 3.0f;
				}
				else {
					return 4.0f;
				}

			}
			else {
				return 4.0f;
			}

		}
		else {
			if (x[13] <= 0.5) {
				if (x[13] <= -0.5) {
					return 1.0f;
				}
				else {
					if (x[14] <= 1.5) {
						return 3.0f;
					}
					else {
						return 1.0f;
					}

				}

			}
			else {
				if (x[14] <= 1.5) {
					return 1.0f;
				}
				else {
					return 0.0f;
				}

			}

		}

	}

}