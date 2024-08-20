#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {60.f,0.f,0.f,0.f,0.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f,1.f,0.f,0.f,1.f,1.f,1.f,0.f,0.f,0.f,0.f,0.f,0.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[17] <= 0.5) {
		if (x[24] <= 0.5) {
			if (x[20] <= 0.5) {
				if (x[22] <= 0.5) {
					if (x[18] <= 0.5) {
						return 60.0f;
					}
					else {
						if (x[21] <= 0.5) {
							if (x[19] <= 0.5) {
								return 27.0f;
							}
							else {
								return 60.0f;
							}

						}
						else {
							return 56.0f;
						}

					}

				}
				else {
					return 56.0f;
				}

			}
			else {
				return 56.0f;
			}

		}
		else {
			return 10.0f;
		}

	}
	else {
		if (x[18] <= 0.5) {
			if (x[21] <= 0.5) {
				if (x[22] <= 0.5) {
					if (x[20] <= 0.5) {
						return 11.0f;
					}
					else {
						return 56.0f;
					}

				}
				else {
					return 56.0f;
				}

			}
			else {
				if (x[19] <= 0.5) {
					if (x[20] <= 0.5) {
						return 32.0f;
					}
					else {
						return 56.0f;
					}

				}
				else {
					return 18.0f;
				}

			}

		}
		else {
			return 56.0f;
		}

	}

}