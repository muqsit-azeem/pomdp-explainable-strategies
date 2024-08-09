#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {15.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[0] <= 14.5) {
		if (x[0] <= 2.5) {
			if (x[0] <= 0.5) {
				return 6.0f;
			}
			else {
				if (x[0] <= 1.5) {
					return 5.0f;
				}
				else {
					return 6.0f;
				}

			}

		}
		else {
			if (x[0] <= 3.5) {
				return 4.0f;
			}
			else {
				if (x[0] <= 8.5) {
					if (x[0] <= 4.5) {
						return 6.0f;
					}
					else {
						if (x[0] <= 5.5) {
							return 1.0f;
						}
						else {
							if (x[0] <= 6.5) {
								return 6.0f;
							}
							else {
								if (x[0] <= 7.5) {
									return 1.0f;
								}
								else {
									return 6.0f;
								}

							}

						}

					}

				}
				else {
					if (x[0] <= 11.5) {
						if (x[0] <= 9.5) {
							return 4.0f;
						}
						else {
							if (x[0] <= 10.5) {
								return 6.0f;
							}
							else {
								return 4.0f;
							}

						}

					}
					else {
						if (x[0] <= 12.5) {
							return 6.0f;
						}
						else {
							if (x[0] <= 13.5) {
								return 1.0f;
							}
							else {
								return 6.0f;
							}

						}

					}

				}

			}

		}

	}
	else {
		if (x[0] <= 15.5) {
			return 1.0f;
		}
		else {
			return 0.0f;
		}

	}

}