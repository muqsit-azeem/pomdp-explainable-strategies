#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,2.f,2.f,2.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[6] <= 0.5) {
		if (x[4] <= 1.5) {
			if (x[2] <= 0.5) {
				if (x[3] <= 0.5) {
					if (x[0] <= 0.5) {
						return 4.0f;
					}
					else {
						if (x[4] <= 0.5) {
							return 12.0f;
						}
						else {
							return 8.0f;
						}

					}

				}
				else {
					return 10.0f;
				}

			}
			else {
				if (x[3] <= 0.5) {
					if (x[4] <= 0.5) {
						return 11.0f;
					}
					else {
						return 8.0f;
					}

				}
				else {
					return 8.0f;
				}

			}

		}
		else {
			return 9.0f;
		}

	}
	else {
		return 0.0f;
	}

}