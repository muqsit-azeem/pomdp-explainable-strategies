#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,10.f,0.f,1.f,1.f,1.f,1.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		if (x[1] <= 7.5) {
			if (x[1] <= 4.5) {
				if (x[1] <= 2.5) {
					return 74.0f;
				}
				else {
					return 0.0f;
				}

			}
			else {
				if (x[1] <= 5.5) {
					return 79.0f;
				}
				else {
					return 78.0f;
				}

			}

		}
		else {
			if (x[0] <= 0.5) {
				return 28.0f;
			}
			else {
				if (x[1] <= 15.5) {
					if (x[1] <= 8.5) {
						return 3.0f;
					}
					else {
						if (x[1] <= 9.5) {
							return 0.0f;
						}
						else {
							if (x[1] <= 10.5) {
								return 3.0f;
							}
							else {
								if (x[1] <= 11.5) {
									return 0.0f;
								}
								else {
									if (x[1] <= 13.5) {
										return 3.0f;
									}
									else {
										if (x[1] <= 14.5) {
											return 0.0f;
										}
										else {
											return 3.0f;
										}

									}

								}

							}

						}

					}

				}
				else {
					if (x[4] <= 0.5) {
						return 3.0f;
					}
					else {
						return 0.0f;
					}

				}

			}

		}

	}
	else {
		return 2.0f;
	}

}