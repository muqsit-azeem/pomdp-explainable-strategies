#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {7.f,0.f,1.f,0.f,2.f,1.f,0.f,4.f,0.f,2.f,4.f,0.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[13] <= 0.5) {
		return 2.0f;
	}
	else {
		if (x[3] <= -0.5) {
			return 4.0f;
		}
		else {
			if (x[7] <= 4.5) {
				if (x[4] <= 0.5) {
					if (x[8] <= 2.0) {
						return 0.0f;
					}
					else {
						return 5.0f;
					}

				}
				else {
					if (x[4] <= 1.5) {
						if (x[3] <= 0.5) {
							return 0.0f;
						}
						else {
							return 3.0f;
						}

					}
					else {
						return 0.0f;
					}

				}

			}
			else {
				return 5.0f;
			}

		}

	}

}