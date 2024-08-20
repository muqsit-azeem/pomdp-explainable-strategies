#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,13.f,0.f,1.f,1.f,0.f,1.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[8] <= 0.5) {
		if (x[1] <= 9.5) {
			if (x[3] <= 0.5) {
				if (x[4] <= 0.5) {
					return 14.0f;
				}
				else {
					if (x[1] <= 4.5) {
						if (x[1] <= 2.5) {
							if (x[1] <= 1.5) {
								return 64.0f;
							}
							else {
								return 76.0f;
							}

						}
						else {
							if (x[1] <= 3.5) {
								return 36.0f;
							}
							else {
								return 65.0f;
							}

						}

					}
					else {
						if (x[1] <= 6.5) {
							if (x[1] <= 5.5) {
								return 46.0f;
							}
							else {
								return 61.0f;
							}

						}
						else {
							if (x[1] <= 7.5) {
								return 58.0f;
							}
							else {
								if (x[1] <= 8.5) {
									return 7.0f;
								}
								else {
									return 29.0f;
								}

							}

						}

					}

				}

			}
			else {
				if (x[5] <= 0.5) {
					if (x[6] <= 0.5) {
						return 4.0f;
					}
					else {
						if (x[1] <= 4.5) {
							if (x[1] <= 2.5) {
								if (x[1] <= 1.5) {
									return 43.0f;
								}
								else {
									return 72.0f;
								}

							}
							else {
								if (x[1] <= 3.5) {
									return 73.0f;
								}
								else {
									return 69.0f;
								}

							}

						}
						else {
							if (x[1] <= 6.5) {
								if (x[1] <= 5.5) {
									return 49.0f;
								}
								else {
									return 60.0f;
								}

							}
							else {
								if (x[1] <= 7.5) {
									return 55.0f;
								}
								else {
									if (x[1] <= 8.5) {
										return 6.0f;
									}
									else {
										return 1.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (x[1] <= 4.5) {
						if (x[1] <= 2.5) {
							if (x[1] <= 1.5) {
								if (x[4] <= 0.5) {
									return 38.0f;
								}
								else {
									if (x[6] <= 0.5) {
										return 77.0f;
									}
									else {
										return 59.0f;
									}

								}

							}
							else {
								if (x[4] <= 0.5) {
									return 48.0f;
								}
								else {
									if (x[6] <= 0.5) {
										return 75.0f;
									}
									else {
										return 74.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 3.5) {
								if (x[4] <= 0.5) {
									return 47.0f;
								}
								else {
									if (x[6] <= 0.5) {
										return 13.0f;
									}
									else {
										return 34.0f;
									}

								}

							}
							else {
								if (x[4] <= 0.5) {
									return 67.0f;
								}
								else {
									if (x[6] <= 0.5) {
										return 68.0f;
									}
									else {
										return 19.0f;
									}

								}

							}

						}

					}
					else {
						if (x[1] <= 6.5) {
							if (x[1] <= 5.5) {
								if (x[4] <= 0.5) {
									return 9.0f;
								}
								else {
									if (x[6] <= 0.5) {
										return 42.0f;
									}
									else {
										return 63.0f;
									}

								}

							}
							else {
								if (x[4] <= 0.5) {
									return 56.0f;
								}
								else {
									if (x[6] <= 0.5) {
										return 57.0f;
									}
									else {
										return 52.0f;
									}

								}

							}

						}
						else {
							if (x[1] <= 7.5) {
								if (x[4] <= 0.5) {
									return 17.0f;
								}
								else {
									if (x[6] <= 0.5) {
										return 54.0f;
									}
									else {
										return 30.0f;
									}

								}

							}
							else {
								if (x[1] <= 8.5) {
									if (x[4] <= 0.5) {
										return 45.0f;
									}
									else {
										if (x[6] <= 0.5) {
											return 62.0f;
										}
										else {
											return 35.0f;
										}

									}

								}
								else {
									if (x[4] <= 0.5) {
										return 11.0f;
									}
									else {
										if (x[6] <= 0.5) {
											return 12.0f;
										}
										else {
											return 44.0f;
										}

									}

								}

							}

						}

					}

				}

			}

		}
		else {
			if (x[1] <= 15.5) {
				if (x[3] <= 0.5) {
					return 3.0f;
				}
				else {
					if (x[4] <= 0.5) {
						if (x[1] <= 12.5) {
							if (x[1] <= 10.5) {
								return 33.0f;
							}
							else {
								if (x[1] <= 11.5) {
									return 18.0f;
								}
								else {
									return 50.0f;
								}

							}

						}
						else {
							if (x[1] <= 13.5) {
								return 41.0f;
							}
							else {
								if (x[1] <= 14.5) {
									return 25.0f;
								}
								else {
									return 39.0f;
								}

							}

						}

					}
					else {
						if (x[5] <= 0.5) {
							return 0.0f;
						}
						else {
							if (x[1] <= 12.5) {
								if (x[6] <= 0.5) {
									if (x[1] <= 10.5) {
										return 66.0f;
									}
									else {
										if (x[1] <= 11.5) {
											return 27.0f;
										}
										else {
											return 53.0f;
										}

									}

								}
								else {
									if (x[1] <= 10.5) {
										return 15.0f;
									}
									else {
										if (x[1] <= 11.5) {
											return 71.0f;
										}
										else {
											return 21.0f;
										}

									}

								}

							}
							else {
								if (x[6] <= 0.5) {
									if (x[1] <= 13.5) {
										return 51.0f;
									}
									else {
										if (x[1] <= 14.5) {
											return 37.0f;
										}
										else {
											return 8.0f;
										}

									}

								}
								else {
									if (x[1] <= 13.5) {
										return 40.0f;
									}
									else {
										if (x[1] <= 14.5) {
											return 32.0f;
										}
										else {
											return 10.0f;
										}

									}

								}

							}

						}

					}

				}

			}
			else {
				if (x[1] <= 17.5) {
					if (x[1] <= 16.5) {
						if (x[4] <= 0.5) {
							return 70.0f;
						}
						else {
							if (x[6] <= 0.5) {
								return 22.0f;
							}
							else {
								return 20.0f;
							}

						}

					}
					else {
						if (x[4] <= 0.5) {
							return 26.0f;
						}
						else {
							if (x[6] <= 0.5) {
								return 24.0f;
							}
							else {
								return 31.0f;
							}

						}

					}

				}
				else {
					if (x[0] <= 0.5) {
						return 28.0f;
					}
					else {
						if (x[1] <= 18.5) {
							if (x[4] <= 0.5) {
								return 23.0f;
							}
							else {
								if (x[6] <= 0.5) {
									return 5.0f;
								}
								else {
									return 16.0f;
								}

							}

						}
						else {
							return 16.0f;
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