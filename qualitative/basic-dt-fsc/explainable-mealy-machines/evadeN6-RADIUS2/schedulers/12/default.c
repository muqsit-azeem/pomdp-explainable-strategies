#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {12.f,0.f,4.f,1.f,0.f,4.f,4.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		return 0.0f;
	}
	else {
		if (x[3] <= 0.5) {
			return 4.0f;
		}
		else {
			if (x[5] <= 1.5) {
				if (x[2] <= 4.5) {
					if (x[2] <= 3.5) {
						return 6.0f;
					}
					else {
						if (x[3] <= 1.5) {
							return 2.0f;
						}
						else {
							return 1.0f;
						}

					}

				}
				else {
					return 3.0f;
				}

			}
			else {
				if (x[5] <= 4.5) {
					if (x[5] <= 3.5) {
						return 1.0f;
					}
					else {
						if (x[2] <= 4.5) {
							if (x[6] <= 3.5) {
								return 4.0f;
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
					return 2.0f;
				}

			}

		}

	}

}