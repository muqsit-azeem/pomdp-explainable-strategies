#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {32.f,0.f,3.f,0.f,0.f,0.f,2.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		if (x[2] <= 0.5) {
			return 5.0f;
		}
		else {
			return 0.0f;
		}

	}
	else {
		if (x[6] <= 2.5) {
			if (x[5] <= 0.5) {
				return 2.0f;
			}
			else {
				if (x[2] <= 2.5) {
					if (x[5] <= 3.5) {
						if (x[2] <= 0.5) {
							if (x[3] <= 0.5) {
								return 3.0f;
							}
							else {
								return 1.0f;
							}

						}
						else {
							if (x[3] <= 0.5) {
								return 1.0f;
							}
							else {
								return 3.0f;
							}

						}

					}
					else {
						return 1.0f;
					}

				}
				else {
					if (x[2] <= 4.5) {
						return 2.0f;
					}
					else {
						if (x[5] <= 3.5) {
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
			if (x[6] <= 3.5) {
				return 1.0f;
			}
			else {
				if (x[2] <= 1.5) {
					if (x[2] <= 0.5) {
						return 1.0f;
					}
					else {
						return 4.0f;
					}

				}
				else {
					return 1.0f;
				}

			}

		}

	}

}