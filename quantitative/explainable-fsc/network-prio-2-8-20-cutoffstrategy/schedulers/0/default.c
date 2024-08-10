#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {19.f,7.f,1.f,1.f,1.f,3.f,3.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[2] <= 0.5) {
		return 8.0f;
	}
	else {
		if (x[5] <= 1.5) {
			if (x[6] <= 1.5) {
				if (x[3] <= 0.5) {
					if (x[4] <= 0.5) {
						return 13.0f;
					}
					else {
						if (x[1] <= 4.5) {
							if (x[1] <= 2.5) {
								if (x[1] <= 1.0) {
									return 107.0f;
								}
								else {
									if (x[0] <= 18.5) {
										return 71.0f;
									}
									else {
										return 92.0f;
									}

								}

							}
							else {
								if (x[1] <= 3.5) {
									if (x[0] <= 18.5) {
										return 92.0f;
									}
									else {
										return 90.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 90.0f;
									}
									else {
										return 103.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 5.5) {
								if (x[0] <= 18.5) {
									return 103.0f;
								}
								else {
									return 102.0f;
								}

							}
							else {
								if (x[1] <= 6.5) {
									if (x[0] <= 18.5) {
										return 102.0f;
									}
									else {
										return 82.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 82.0f;
									}
									else {
										return 107.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (x[4] <= 0.5) {
						if (x[1] <= 4.5) {
							if (x[1] <= 2.5) {
								if (x[1] <= 1.0) {
									return 79.0f;
								}
								else {
									if (x[0] <= 18.5) {
										return 93.0f;
									}
									else {
										return 38.0f;
									}

								}

							}
							else {
								if (x[1] <= 3.5) {
									if (x[0] <= 18.5) {
										return 38.0f;
									}
									else {
										return 91.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 91.0f;
									}
									else {
										return 112.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 5.5) {
								if (x[0] <= 18.5) {
									return 112.0f;
								}
								else {
									return 86.0f;
								}

							}
							else {
								if (x[1] <= 6.5) {
									if (x[0] <= 18.5) {
										return 86.0f;
									}
									else {
										return 83.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 83.0f;
									}
									else {
										return 79.0f;
									}

								}

							}

						}

					}
					else {
						if (x[1] <= 3.5) {
							if (x[1] <= 1.5) {
								if (x[1] <= 0.5) {
									return 7.0f;
								}
								else {
									if (x[0] <= 18.5) {
										return 77.0f;
									}
									else {
										return 115.0f;
									}

								}

							}
							else {
								if (x[1] <= 2.5) {
									if (x[0] <= 18.5) {
										return 115.0f;
									}
									else {
										return 61.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 61.0f;
									}
									else {
										return 33.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 5.5) {
								if (x[1] <= 4.5) {
									if (x[0] <= 18.5) {
										return 33.0f;
									}
									else {
										return 50.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 50.0f;
									}
									else {
										return 17.0f;
									}

								}

							}
							else {
								if (x[1] <= 6.5) {
									if (x[0] <= 18.5) {
										return 17.0f;
									}
									else {
										return 14.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 14.0f;
									}
									else {
										return 7.0f;
									}

								}

							}

						}

					}

				}

			}
			else {
				if (x[6] <= 2.5) {
					if (x[3] <= 0.5) {
						if (x[1] <= 4.5) {
							if (x[1] <= 2.5) {
								if (x[1] <= 1.0) {
									return 5.0f;
								}
								else {
									if (x[0] <= 18.5) {
										return 70.0f;
									}
									else {
										return 59.0f;
									}

								}

							}
							else {
								if (x[1] <= 3.5) {
									if (x[0] <= 18.5) {
										return 59.0f;
									}
									else {
										return 54.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 54.0f;
									}
									else {
										return 26.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 5.5) {
								if (x[0] <= 18.5) {
									return 26.0f;
								}
								else {
									return 111.0f;
								}

							}
							else {
								if (x[1] <= 6.5) {
									if (x[0] <= 18.5) {
										return 111.0f;
									}
									else {
										return 100.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 100.0f;
									}
									else {
										return 5.0f;
									}

								}

							}

						}

					}
					else {
						if (x[1] <= 3.5) {
							if (x[1] <= 1.5) {
								if (x[1] <= 0.5) {
									return 6.0f;
								}
								else {
									if (x[0] <= 18.5) {
										return 97.0f;
									}
									else {
										return 39.0f;
									}

								}

							}
							else {
								if (x[1] <= 2.5) {
									if (x[0] <= 18.5) {
										return 39.0f;
									}
									else {
										return 60.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 60.0f;
									}
									else {
										return 32.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 5.5) {
								if (x[1] <= 4.5) {
									if (x[0] <= 18.5) {
										return 32.0f;
									}
									else {
										return 27.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 27.0f;
									}
									else {
										return 16.0f;
									}

								}

							}
							else {
								if (x[1] <= 6.5) {
									if (x[0] <= 18.5) {
										return 16.0f;
									}
									else {
										return 43.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 43.0f;
									}
									else {
										return 6.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (x[3] <= 0.5) {
						if (x[1] <= 4.5) {
							if (x[1] <= 2.5) {
								if (x[1] <= 1.0) {
									return 98.0f;
								}
								else {
									if (x[0] <= 18.5) {
										return 68.0f;
									}
									else {
										return 37.0f;
									}

								}

							}
							else {
								if (x[1] <= 3.5) {
									if (x[0] <= 18.5) {
										return 37.0f;
									}
									else {
										return 89.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 89.0f;
									}
									else {
										return 87.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 5.5) {
								if (x[0] <= 18.5) {
									return 87.0f;
								}
								else {
									return 15.0f;
								}

							}
							else {
								if (x[1] <= 6.5) {
									if (x[0] <= 18.5) {
										return 15.0f;
									}
									else {
										return 42.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 42.0f;
									}
									else {
										return 98.0f;
									}

								}

							}

						}

					}
					else {
						if (x[1] <= 3.5) {
							if (x[1] <= 1.5) {
								if (x[1] <= 0.5) {
									return 99.0f;
								}
								else {
									if (x[0] <= 18.5) {
										return 96.0f;
									}
									else {
										return 69.0f;
									}

								}

							}
							else {
								if (x[1] <= 2.5) {
									if (x[0] <= 18.5) {
										return 69.0f;
									}
									else {
										return 58.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 58.0f;
									}
									else {
										return 53.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 5.5) {
								if (x[1] <= 4.5) {
									if (x[0] <= 18.5) {
										return 53.0f;
									}
									else {
										return 25.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 25.0f;
									}
									else {
										return 48.0f;
									}

								}

							}
							else {
								if (x[1] <= 6.5) {
									if (x[0] <= 18.5) {
										return 48.0f;
									}
									else {
										return 81.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 81.0f;
									}
									else {
										return 99.0f;
									}

								}

							}

						}

					}

				}

			}

		}
		else {
			if (x[5] <= 2.5) {
				if (x[6] <= 1.5) {
					if (x[4] <= 0.5) {
						if (x[1] <= 4.5) {
							if (x[1] <= 2.5) {
								if (x[1] <= 1.0) {
									return 4.0f;
								}
								else {
									if (x[0] <= 18.5) {
										return 66.0f;
									}
									else {
										return 36.0f;
									}

								}

							}
							else {
								if (x[1] <= 3.5) {
									if (x[0] <= 18.5) {
										return 36.0f;
									}
									else {
										return 30.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 30.0f;
									}
									else {
										return 24.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 5.5) {
								if (x[0] <= 18.5) {
									return 24.0f;
								}
								else {
									return 109.0f;
								}

							}
							else {
								if (x[1] <= 6.5) {
									if (x[0] <= 18.5) {
										return 109.0f;
									}
									else {
										return 12.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 12.0f;
									}
									else {
										return 4.0f;
									}

								}

							}

						}

					}
					else {
						if (x[1] <= 3.5) {
							if (x[1] <= 1.5) {
								if (x[1] <= 0.5) {
									return 106.0f;
								}
								else {
									if (x[0] <= 18.5) {
										return 75.0f;
									}
									else {
										return 67.0f;
									}

								}

							}
							else {
								if (x[1] <= 2.5) {
									if (x[0] <= 18.5) {
										return 67.0f;
									}
									else {
										return 76.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 76.0f;
									}
									else {
										return 31.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 5.5) {
								if (x[1] <= 4.5) {
									if (x[0] <= 18.5) {
										return 31.0f;
									}
									else {
										return 114.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 114.0f;
									}
									else {
										return 110.0f;
									}

								}

							}
							else {
								if (x[1] <= 6.5) {
									if (x[0] <= 18.5) {
										return 110.0f;
									}
									else {
										return 44.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 44.0f;
									}
									else {
										return 106.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (x[6] <= 2.5) {
						if (x[1] <= 3.5) {
							if (x[1] <= 1.5) {
								if (x[1] <= 0.5) {
									return 3.0f;
								}
								else {
									if (x[0] <= 18.5) {
										return 95.0f;
									}
									else {
										return 105.0f;
									}

								}

							}
							else {
								if (x[1] <= 2.5) {
									if (x[0] <= 18.5) {
										return 105.0f;
									}
									else {
										return 57.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 57.0f;
									}
									else {
										return 29.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 5.5) {
								if (x[1] <= 4.5) {
									if (x[0] <= 18.5) {
										return 29.0f;
									}
									else {
										return 23.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 23.0f;
									}
									else {
										return 47.0f;
									}

								}

							}
							else {
								if (x[1] <= 6.5) {
									if (x[0] <= 18.5) {
										return 47.0f;
									}
									else {
										return 41.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 41.0f;
									}
									else {
										return 3.0f;
									}

								}

							}

						}

					}
					else {
						if (x[1] <= 3.5) {
							if (x[1] <= 1.5) {
								if (x[1] <= 0.5) {
									return 2.0f;
								}
								else {
									if (x[0] <= 18.5) {
										return 74.0f;
									}
									else {
										return 104.0f;
									}

								}

							}
							else {
								if (x[1] <= 2.5) {
									if (x[0] <= 18.5) {
										return 104.0f;
									}
									else {
										return 35.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 35.0f;
									}
									else {
										return 52.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 5.5) {
								if (x[1] <= 4.5) {
									if (x[0] <= 18.5) {
										return 52.0f;
									}
									else {
										return 22.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 22.0f;
									}
									else {
										return 85.0f;
									}

								}

							}
							else {
								if (x[1] <= 6.5) {
									if (x[0] <= 18.5) {
										return 85.0f;
									}
									else {
										return 11.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 11.0f;
									}
									else {
										return 2.0f;
									}

								}

							}

						}

					}

				}

			}
			else {
				if (x[6] <= 1.5) {
					if (x[4] <= 0.5) {
						if (x[1] <= 4.5) {
							if (x[1] <= 2.5) {
								if (x[1] <= 1.0) {
									return 40.0f;
								}
								else {
									if (x[0] <= 18.5) {
										return 64.0f;
									}
									else {
										return 34.0f;
									}

								}

							}
							else {
								if (x[1] <= 3.5) {
									if (x[0] <= 18.5) {
										return 34.0f;
									}
									else {
										return 28.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 28.0f;
									}
									else {
										return 20.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 5.5) {
								if (x[0] <= 18.5) {
									return 20.0f;
								}
								else {
									return 84.0f;
								}

							}
							else {
								if (x[1] <= 6.5) {
									if (x[0] <= 18.5) {
										return 84.0f;
									}
									else {
										return 80.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 80.0f;
									}
									else {
										return 40.0f;
									}

								}

							}

						}

					}
					else {
						if (x[1] <= 3.5) {
							if (x[1] <= 1.5) {
								if (x[1] <= 0.5) {
									return 78.0f;
								}
								else {
									if (x[0] <= 18.5) {
										return 94.0f;
									}
									else {
										return 65.0f;
									}

								}

							}
							else {
								if (x[1] <= 2.5) {
									if (x[0] <= 18.5) {
										return 65.0f;
									}
									else {
										return 56.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 56.0f;
									}
									else {
										return 88.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 5.5) {
								if (x[1] <= 4.5) {
									if (x[0] <= 18.5) {
										return 88.0f;
									}
									else {
										return 21.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 21.0f;
									}
									else {
										return 101.0f;
									}

								}

							}
							else {
								if (x[1] <= 6.5) {
									if (x[0] <= 18.5) {
										return 101.0f;
									}
									else {
										return 10.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 10.0f;
									}
									else {
										return 78.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (x[6] <= 2.5) {
						if (x[1] <= 3.5) {
							if (x[1] <= 1.5) {
								if (x[1] <= 0.5) {
									return 1.0f;
								}
								else {
									if (x[0] <= 18.5) {
										return 73.0f;
									}
									else {
										return 63.0f;
									}

								}

							}
							else {
								if (x[1] <= 2.5) {
									if (x[0] <= 18.5) {
										return 63.0f;
									}
									else {
										return 55.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 55.0f;
									}
									else {
										return 113.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 5.5) {
								if (x[1] <= 4.5) {
									if (x[0] <= 18.5) {
										return 113.0f;
									}
									else {
										return 19.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 19.0f;
									}
									else {
										return 46.0f;
									}

								}

							}
							else {
								if (x[1] <= 6.5) {
									if (x[0] <= 18.5) {
										return 46.0f;
									}
									else {
										return 108.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 108.0f;
									}
									else {
										return 1.0f;
									}

								}

							}

						}

					}
					else {
						if (x[1] <= 3.5) {
							if (x[1] <= 1.5) {
								if (x[1] <= 0.5) {
									return 0.0f;
								}
								else {
									if (x[0] <= 18.5) {
										return 72.0f;
									}
									else {
										return 62.0f;
									}

								}

							}
							else {
								if (x[1] <= 2.5) {
									if (x[0] <= 18.5) {
										return 62.0f;
									}
									else {
										return 49.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 49.0f;
									}
									else {
										return 51.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 5.5) {
								if (x[1] <= 4.5) {
									if (x[0] <= 18.5) {
										return 51.0f;
									}
									else {
										return 18.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 18.0f;
									}
									else {
										return 45.0f;
									}

								}

							}
							else {
								if (x[1] <= 6.5) {
									if (x[0] <= 18.5) {
										return 45.0f;
									}
									else {
										return 9.0f;
									}

								}
								else {
									if (x[0] <= 18.5) {
										return 9.0f;
									}
									else {
										return 0.0f;
									}

								}

							}

						}

					}

				}

			}

		}

	}

}