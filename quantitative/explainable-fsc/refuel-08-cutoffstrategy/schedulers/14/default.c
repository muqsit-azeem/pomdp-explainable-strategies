#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,7.f,0.f,1.f,1.f,1.f,1.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		if (x[1] <= 3.5) {
			if (x[3] <= 0.5) {
				if (x[4] <= 0.5) {
					return 10.0f;
				}
				else {
					if (x[1] <= 1.5) {
						return 29.0f;
					}
					else {
						if (x[1] <= 2.5) {
							return 6.0f;
						}
						else {
							return 30.0f;
						}

					}

				}

			}
			else {
				if (x[5] <= 0.5) {
					if (x[6] <= 0.5) {
						return 14.0f;
					}
					else {
						if (x[1] <= 1.5) {
							return 27.0f;
						}
						else {
							if (x[1] <= 2.5) {
								return 7.0f;
							}
							else {
								return 15.0f;
							}

						}

					}

				}
				else {
					if (x[1] <= 1.5) {
						if (x[4] <= 0.5) {
							return 25.0f;
						}
						else {
							if (x[6] <= 0.5) {
								return 26.0f;
							}
							else {
								return 23.0f;
							}

						}

					}
					else {
						if (x[1] <= 2.5) {
							if (x[4] <= 0.5) {
								return 17.0f;
							}
							else {
								if (x[6] <= 0.5) {
									return 12.0f;
								}
								else {
									return 28.0f;
								}

							}

						}
						else {
							if (x[4] <= 0.5) {
								return 16.0f;
							}
							else {
								if (x[6] <= 0.5) {
									return 8.0f;
								}
								else {
									return 9.0f;
								}

							}

						}

					}

				}

			}

		}
		else {
			if (x[1] <= 5.5) {
				if (x[3] <= 0.5) {
					return 3.0f;
				}
				else {
					if (x[4] <= 0.5) {
						if (x[1] <= 4.5) {
							return 21.0f;
						}
						else {
							return 13.0f;
						}

					}
					else {
						if (x[5] <= 0.5) {
							return 2.0f;
						}
						else {
							if (x[1] <= 4.5) {
								if (x[6] <= 0.5) {
									return 19.0f;
								}
								else {
									return 24.0f;
								}

							}
							else {
								if (x[6] <= 0.5) {
									return 18.0f;
								}
								else {
									return 20.0f;
								}

							}

						}

					}

				}

			}
			else {
				if (x[0] <= 0.5) {
					return 4.0f;
				}
				else {
					if (x[1] <= 6.5) {
						if (x[4] <= 0.5) {
							return 11.0f;
						}
						else {
							if (x[6] <= 0.5) {
								return 22.0f;
							}
							else {
								return 5.0f;
							}

						}

					}
					else {
						return 5.0f;
					}

				}

			}

		}

	}
	else {
		return 0.0f;
	}

}