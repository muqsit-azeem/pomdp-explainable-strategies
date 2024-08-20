#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {29.f,0.f,5.f,0.f,0.f,1.f,4.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		if (x[5] <= 0.5) {
			return 0.0f;
		}
		else {
			if (x[5] <= 2.5) {
				if (x[2] <= 1.5) {
					if (x[6] <= 3.5) {
						if (x[3] <= 0.5) {
							if (x[5] <= 1.5) {
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
				else {
					return 7.0f;
				}

			}
			else {
				return 7.0f;
			}

		}

	}
	else {
		if (x[5] <= 2.5) {
			if (x[2] <= 0.5) {
				if (x[5] <= -0.5) {
					if (x[3] <= 1.5) {
						return 7.0f;
					}
					else {
						return 3.0f;
					}

				}
				else {
					return 3.0f;
				}

			}
			else {
				if (x[5] <= -0.5) {
					if (x[2] <= 4.0) {
						if (x[2] <= 2.0) {
							return 2.0f;
						}
						else {
							return 1.0f;
						}

					}
					else {
						return 5.0f;
					}

				}
				else {
					return 7.0f;
				}

			}

		}
		else {
			if (x[3] <= 1.5) {
				return 2.0f;
			}
			else {
				return 7.0f;
			}

		}

	}

}