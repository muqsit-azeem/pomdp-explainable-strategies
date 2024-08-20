#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {193.f,0.f,0.f,0.f,0.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f,1.f,0.f,0.f,1.f,1.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[17] <= 0.5) {
		if (x[18] <= 0.5) {
			if (x[24] <= 0.5) {
				if (x[20] <= 0.5) {
					if (x[22] <= 0.5) {
						if (x[21] <= 0.5) {
							if (x[26] <= 0.5) {
								return 193.0f;
							}
							else {
								return 108.0f;
							}

						}
						else {
							return 193.0f;
						}

					}
					else {
						return 129.0f;
					}

				}
				else {
					return 129.0f;
				}

			}
			else {
				return 92.0f;
			}

		}
		else {
			if (x[19] <= 0.5) {
				if (x[20] <= 0.5) {
					if (x[21] <= 0.5) {
						if (x[22] <= 0.5) {
							return 68.0f;
						}
						else {
							return 129.0f;
						}

					}
					else {
						return 129.0f;
					}

				}
				else {
					return 129.0f;
				}

			}
			else {
				if (x[21] <= 0.5) {
					if (x[22] <= 0.5) {
						return 52.0f;
					}
					else {
						return 129.0f;
					}

				}
				else {
					return 129.0f;
				}

			}

		}

	}
	else {
		if (x[18] <= 0.5) {
			if (x[19] <= 0.5) {
				if (x[20] <= 0.5) {
					if (x[21] <= 0.5) {
						if (x[22] <= 0.5) {
							return 3.0f;
						}
						else {
							return 129.0f;
						}

					}
					else {
						return 129.0f;
					}

				}
				else {
					return 129.0f;
				}

			}
			else {
				return 129.0f;
			}

		}
		else {
			return 129.0f;
		}

	}

}