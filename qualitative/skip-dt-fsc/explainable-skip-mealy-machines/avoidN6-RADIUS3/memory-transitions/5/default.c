#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {5.f,0.f,1.f,-1.f,2.f,0.f,0.f,4.f,-1.f,2.f,-1.f,0.f,1.f,1.f,0.f,1.f,0.f,0.f,1.f,0.f,2.f,1.f,2.f,4.f,0.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[15] <= -0.5) {
		if (x[17] <= 2.5) {
			if (x[18] <= 2.5) {
				if (x[21] <= 3.5) {
					if (x[16] <= -0.5) {
						return 1.0f;
					}
					else {
						if (x[18] <= 1.5) {
							if (x[17] <= 0.5) {
								if (x[16] <= 0.5) {
									return 1.0f;
								}
								else {
									if (x[26] <= 0.5) {
										return 1.0f;
									}
									else {
										return 4.0f;
									}

								}

							}
							else {
								return 5.0f;
							}

						}
						else {
							if (x[21] <= 1.5) {
								return 1.0f;
							}
							else {
								if (x[17] <= 0.5) {
									return 5.0f;
								}
								else {
									return 1.0f;
								}

							}

						}

					}

				}
				else {
					return 4.0f;
				}

			}
			else {
				return 5.0f;
			}

		}
		else {
			if (x[16] <= -0.5) {
				return 3.0f;
			}
			else {
				return 1.0f;
			}

		}

	}
	else {
		if (x[20] <= 3.5) {
			if (x[17] <= 4.5) {
				return 4.0f;
			}
			else {
				if (x[15] <= 0.5) {
					return 1.0f;
				}
				else {
					if (x[18] <= 0.5) {
						if (x[20] <= 2.5) {
							return 1.0f;
						}
						else {
							return 4.0f;
						}

					}
					else {
						return 4.0f;
					}

				}

			}

		}
		else {
			if (x[17] <= 1.5) {
				if (x[18] <= 0.5) {
					if (x[26] <= 0.5) {
						return 1.0f;
					}
					else {
						return 4.0f;
					}

				}
				else {
					return 4.0f;
				}

			}
			else {
				if (x[17] <= 2.5) {
					if (x[21] <= 2.5) {
						if (x[15] <= 0.5) {
							if (x[16] <= 0.5) {
								if (x[20] <= 4.5) {
									return 4.0f;
								}
								else {
									if (x[16] <= -0.5) {
										if (x[26] <= 0.5) {
											return 5.0f;
										}
										else {
											return 4.0f;
										}

									}
									else {
										return 4.0f;
									}

								}

							}
							else {
								return 5.0f;
							}

						}
						else {
							if (x[26] <= 0.5) {
								return 4.0f;
							}
							else {
								return 5.0f;
							}

						}

					}
					else {
						return 4.0f;
					}

				}
				else {
					return 4.0f;
				}

			}

		}

	}

}