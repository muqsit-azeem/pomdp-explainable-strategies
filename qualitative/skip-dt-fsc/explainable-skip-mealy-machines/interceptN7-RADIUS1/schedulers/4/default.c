#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {4.f,0.f,1.f,1.f,0.f,5.f,3.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[5] <= 1.0) {
		if (x[8] <= 0.5) {
			return 1.0f;
		}
		else {
			if (x[2] <= 2.5) {
				if (x[3] <= 5.5) {
					if (x[3] <= 4.5) {
						if (x[3] <= 1.5) {
							if (x[2] <= 1.5) {
								return 2.0f;
							}
							else {
								if (x[3] <= 0.5) {
									return 0.0f;
								}
								else {
									return 2.0f;
								}

							}

						}
						else {
							if (x[2] <= 0.5) {
								return 0.0f;
							}
							else {
								if (x[3] <= 2.5) {
									if (x[2] <= 1.5) {
										return 2.0f;
									}
									else {
										return 3.0f;
									}

								}
								else {
									if (x[2] <= 1.5) {
										if (x[3] <= 3.5) {
											return 2.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[3] <= 3.5) {
											return 0.0f;
										}
										else {
											return 2.0f;
										}

									}

								}

							}

						}

					}
					else {
						return 2.0f;
					}

				}
				else {
					return 3.0f;
				}

			}
			else {
				if (x[3] <= 3.5) {
					if (x[3] <= 2.5) {
						return 0.0f;
					}
					else {
						if (x[2] <= 3.5) {
							return 4.0f;
						}
						else {
							return 0.0f;
						}

					}

				}
				else {
					return 3.0f;
				}

			}

		}

	}
	else {
		return 6.0f;
	}

}