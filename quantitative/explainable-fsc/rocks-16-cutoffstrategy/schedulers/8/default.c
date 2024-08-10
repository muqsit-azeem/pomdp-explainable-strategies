#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,1.f,0.f,0.f,1.f,0.f,16.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[6] <= 8.5) {
		if (x[7] <= 7.5) {
			if (x[4] <= 0.5) {
				if (x[6] <= 3.5) {
					if (x[6] <= 2.5) {
						if (x[6] <= 1.5) {
							if (x[0] <= 0.5) {
								return 244.0f;
							}
							else {
								return 2.0f;
							}

						}
						else {
							if (x[7] <= 1.5) {
								if (x[7] <= 0.5) {
									if (x[2] <= 0.5) {
										return 83.0f;
									}
									else {
										return 5.0f;
									}

								}
								else {
									if (x[2] <= 0.5) {
										return 108.0f;
									}
									else {
										return 2.0f;
									}

								}

							}
							else {
								if (x[7] <= 6.5) {
									return 2.0f;
								}
								else {
									if (x[2] <= 0.5) {
										return 186.0f;
									}
									else {
										return 242.0f;
									}

								}

							}

						}

					}
					else {
						if (x[7] <= 4.5) {
							if (x[7] <= 1.5) {
								if (x[7] <= 0.5) {
									if (x[2] <= 0.5) {
										return 180.0f;
									}
									else {
										return 7.0f;
									}

								}
								else {
									if (x[2] <= 0.5) {
										return 122.0f;
									}
									else {
										return 10.0f;
									}

								}

							}
							else {
								if (x[2] <= 0.5) {
									if (x[7] <= 2.5) {
										return 125.0f;
									}
									else {
										if (x[7] <= 3.5) {
											return 102.0f;
										}
										else {
											return 255.0f;
										}

									}

								}
								else {
									return 2.0f;
								}

							}

						}
						else {
							if (x[2] <= 0.5) {
								if (x[7] <= 5.5) {
									return 139.0f;
								}
								else {
									if (x[7] <= 6.5) {
										return 185.0f;
									}
									else {
										return 220.0f;
									}

								}

							}
							else {
								if (x[7] <= 5.5) {
									return 206.0f;
								}
								else {
									if (x[7] <= 6.5) {
										return 204.0f;
									}
									else {
										return 197.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (x[7] <= 3.5) {
						if (x[7] <= 1.5) {
							if (x[7] <= 0.5) {
								if (x[6] <= 5.5) {
									if (x[6] <= 4.5) {
										if (x[2] <= 0.5) {
											return 90.0f;
										}
										else {
											return 14.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 202.0f;
										}
										else {
											return 15.0f;
										}

									}

								}
								else {
									if (x[2] <= 0.5) {
										if (x[6] <= 6.5) {
											return 205.0f;
										}
										else {
											if (x[6] <= 7.5) {
												return 87.0f;
											}
											else {
												return 131.0f;
											}

										}

									}
									else {
										if (x[6] <= 6.5) {
											return 226.0f;
										}
										else {
											if (x[6] <= 7.5) {
												return 274.0f;
											}
											else {
												return 124.0f;
											}

										}

									}

								}

							}
							else {
								if (x[6] <= 5.5) {
									if (x[6] <= 4.5) {
										if (x[2] <= 0.5) {
											return 225.0f;
										}
										else {
											return 13.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 209.0f;
										}
										else {
											return 109.0f;
										}

									}

								}
								else {
									if (x[2] <= 0.5) {
										if (x[6] <= 6.5) {
											return 237.0f;
										}
										else {
											if (x[6] <= 7.5) {
												return 219.0f;
											}
											else {
												return 175.0f;
											}

										}

									}
									else {
										if (x[6] <= 6.5) {
											return 157.0f;
										}
										else {
											if (x[6] <= 7.5) {
												return 286.0f;
											}
											else {
												return 227.0f;
											}

										}

									}

								}

							}

						}
						else {
							if (x[7] <= 2.5) {
								if (x[6] <= 5.5) {
									if (x[6] <= 4.5) {
										if (x[2] <= 0.5) {
											return 101.0f;
										}
										else {
											return 328.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 97.0f;
										}
										else {
											return 356.0f;
										}

									}

								}
								else {
									if (x[2] <= 0.5) {
										if (x[6] <= 6.5) {
											return 155.0f;
										}
										else {
											if (x[6] <= 7.5) {
												return 152.0f;
											}
											else {
												return 259.0f;
											}

										}

									}
									else {
										if (x[6] <= 6.5) {
											return 343.0f;
										}
										else {
											if (x[6] <= 7.5) {
												return 338.0f;
											}
											else {
												return 329.0f;
											}

										}

									}

								}

							}
							else {
								if (x[6] <= 5.5) {
									if (x[6] <= 4.5) {
										if (x[2] <= 0.5) {
											return 208.0f;
										}
										else {
											return 54.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 181.0f;
										}
										else {
											return 308.0f;
										}

									}

								}
								else {
									if (x[2] <= 0.5) {
										if (x[6] <= 6.5) {
											return 94.0f;
										}
										else {
											if (x[6] <= 7.5) {
												return 179.0f;
											}
											else {
												return 236.0f;
											}

										}

									}
									else {
										if (x[6] <= 6.5) {
											return 339.0f;
										}
										else {
											if (x[6] <= 7.5) {
												return 284.0f;
											}
											else {
												return 315.0f;
											}

										}

									}

								}

							}

						}

					}
					else {
						if (x[7] <= 5.5) {
							if (x[7] <= 4.5) {
								if (x[6] <= 5.5) {
									if (x[6] <= 4.5) {
										if (x[2] <= 0.5) {
											return 128.0f;
										}
										else {
											return 336.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 182.0f;
										}
										else {
											return 287.0f;
										}

									}

								}
								else {
									if (x[2] <= 0.5) {
										if (x[6] <= 6.5) {
											return 117.0f;
										}
										else {
											if (x[6] <= 7.5) {
												return 166.0f;
											}
											else {
												return 183.0f;
											}

										}

									}
									else {
										if (x[6] <= 6.5) {
											return 123.0f;
										}
										else {
											if (x[6] <= 7.5) {
												return 260.0f;
											}
											else {
												return 305.0f;
											}

										}

									}

								}

							}
							else {
								if (x[6] <= 5.5) {
									if (x[6] <= 4.5) {
										if (x[2] <= 0.5) {
											return 184.0f;
										}
										else {
											return 319.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 29.0f;
										}
										else {
											return 330.0f;
										}

									}

								}
								else {
									if (x[2] <= 0.5) {
										if (x[6] <= 6.5) {
											return 195.0f;
										}
										else {
											if (x[6] <= 7.5) {
												return 120.0f;
											}
											else {
												return 200.0f;
											}

										}

									}
									else {
										if (x[6] <= 6.5) {
											return 317.0f;
										}
										else {
											if (x[6] <= 7.5) {
												return 297.0f;
											}
											else {
												return 266.0f;
											}

										}

									}

								}

							}

						}
						else {
							if (x[7] <= 6.5) {
								if (x[6] <= 5.5) {
									if (x[6] <= 4.5) {
										if (x[2] <= 0.5) {
											return 171.0f;
										}
										else {
											return 332.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 233.0f;
										}
										else {
											return 318.0f;
										}

									}

								}
								else {
									if (x[2] <= 0.5) {
										if (x[6] <= 6.5) {
											return 239.0f;
										}
										else {
											if (x[6] <= 7.5) {
												return 176.0f;
											}
											else {
												return 40.0f;
											}

										}

									}
									else {
										if (x[6] <= 6.5) {
											return 298.0f;
										}
										else {
											if (x[6] <= 7.5) {
												return 235.0f;
											}
											else {
												return 30.0f;
											}

										}

									}

								}

							}
							else {
								if (x[6] <= 6.5) {
									if (x[2] <= 0.5) {
										if (x[6] <= 4.5) {
											return 216.0f;
										}
										else {
											if (x[6] <= 5.5) {
												return 129.0f;
											}
											else {
												return 277.0f;
											}

										}

									}
									else {
										if (x[6] <= 4.5) {
											return 91.0f;
										}
										else {
											if (x[6] <= 5.5) {
												return 300.0f;
											}
											else {
												return 95.0f;
											}

										}

									}

								}
								else {
									if (x[6] <= 7.5) {
										if (x[2] <= 0.5) {
											return 145.0f;
										}
										else {
											return 63.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 119.0f;
										}
										else {
											return 130.0f;
										}

									}

								}

							}

						}

					}

				}

			}
			else {
				if (x[2] <= 0.5) {
					if (x[6] <= 6.5) {
						return 39.0f;
					}
					else {
						if (x[7] <= 2.5) {
							if (x[6] <= 7.5) {
								return 2.0f;
							}
							else {
								if (x[7] <= 0.5) {
									return 344.0f;
								}
								else {
									if (x[7] <= 1.5) {
										return 272.0f;
									}
									else {
										return 76.0f;
									}

								}

							}

						}
						else {
							return 2.0f;
						}

					}

				}
				else {
					return 3.0f;
				}

			}

		}
		else {
			if (x[4] <= 0.5) {
				if (x[6] <= 4.5) {
					if (x[6] <= 2.5) {
						if (x[7] <= 8.5) {
							if (x[6] <= 0.5) {
								return 3.0f;
							}
							else {
								if (x[6] <= 1.5) {
									return 112.0f;
								}
								else {
									return 21.0f;
								}

							}

						}
						else {
							if (x[6] <= 1.5) {
								return 0.0f;
							}
							else {
								if (x[7] <= 14.5) {
									if (x[7] <= 9.5) {
										if (x[2] <= 0.5) {
											return 172.0f;
										}
										else {
											return 340.0f;
										}

									}
									else {
										return 0.0f;
									}

								}
								else {
									if (x[7] <= 15.5) {
										if (x[2] <= 0.5) {
											return 105.0f;
										}
										else {
											return 0.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 55.0f;
										}
										else {
											return 4.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[7] <= 11.5) {
							if (x[7] <= 9.5) {
								if (x[7] <= 8.5) {
									return 21.0f;
								}
								else {
									if (x[6] <= 3.5) {
										if (x[2] <= 0.5) {
											return 194.0f;
										}
										else {
											return 334.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 252.0f;
										}
										else {
											return 67.0f;
										}

									}

								}

							}
							else {
								if (x[6] <= 3.5) {
									if (x[7] <= 10.5) {
										if (x[2] <= 0.5) {
											return 106.0f;
										}
										else {
											return 192.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 162.0f;
										}
										else {
											return 351.0f;
										}

									}

								}
								else {
									if (x[7] <= 10.5) {
										if (x[2] <= 0.5) {
											return 188.0f;
										}
										else {
											return 78.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 198.0f;
										}
										else {
											return 342.0f;
										}

									}

								}

							}

						}
						else {
							if (x[6] <= 3.5) {
								if (x[7] <= 14.5) {
									if (x[2] <= 0.5) {
										if (x[7] <= 12.5) {
											return 115.0f;
										}
										else {
											if (x[7] <= 13.5) {
												return 100.0f;
											}
											else {
												return 74.0f;
											}

										}

									}
									else {
										return 0.0f;
									}

								}
								else {
									if (x[7] <= 15.5) {
										if (x[2] <= 0.5) {
											return 104.0f;
										}
										else {
											return 8.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 84.0f;
										}
										else {
											return 6.0f;
										}

									}

								}

							}
							else {
								if (x[7] <= 13.5) {
									if (x[7] <= 12.5) {
										if (x[2] <= 0.5) {
											return 82.0f;
										}
										else {
											return 326.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 99.0f;
										}
										else {
											return 310.0f;
										}

									}

								}
								else {
									if (x[2] <= 0.5) {
										if (x[7] <= 14.5) {
											return 53.0f;
										}
										else {
											if (x[7] <= 15.5) {
												return 149.0f;
											}
											else {
												return 93.0f;
											}

										}

									}
									else {
										if (x[7] <= 14.5) {
											return 309.0f;
										}
										else {
											if (x[7] <= 15.5) {
												return 12.0f;
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

				}
				else {
					if (x[6] <= 6.5) {
						if (x[6] <= 5.5) {
							if (x[7] <= 11.5) {
								if (x[7] <= 9.5) {
									if (x[7] <= 8.5) {
										return 21.0f;
									}
									else {
										if (x[2] <= 0.5) {
											return 199.0f;
										}
										else {
											return 207.0f;
										}

									}

								}
								else {
									if (x[7] <= 10.5) {
										if (x[2] <= 0.5) {
											return 146.0f;
										}
										else {
											return 320.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 111.0f;
										}
										else {
											return 37.0f;
										}

									}

								}

							}
							else {
								if (x[7] <= 13.5) {
									if (x[7] <= 12.5) {
										if (x[2] <= 0.5) {
											return 77.0f;
										}
										else {
											return 42.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 212.0f;
										}
										else {
											return 267.0f;
										}

									}

								}
								else {
									if (x[2] <= 0.5) {
										if (x[7] <= 14.5) {
											return 52.0f;
										}
										else {
											if (x[7] <= 15.5) {
												return 23.0f;
											}
											else {
												return 187.0f;
											}

										}

									}
									else {
										if (x[7] <= 14.5) {
											return 261.0f;
										}
										else {
											if (x[7] <= 15.5) {
												return 359.0f;
											}
											else {
												return 264.0f;
											}

										}

									}

								}

							}

						}
						else {
							if (x[7] <= 11.5) {
								if (x[7] <= 9.5) {
									if (x[7] <= 8.5) {
										if (x[2] <= 0.5) {
											return 147.0f;
										}
										else {
											return 148.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 160.0f;
										}
										else {
											return 41.0f;
										}

									}

								}
								else {
									if (x[7] <= 10.5) {
										if (x[2] <= 0.5) {
											return 44.0f;
										}
										else {
											return 280.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 73.0f;
										}
										else {
											return 231.0f;
										}

									}

								}

							}
							else {
								if (x[7] <= 13.5) {
									if (x[7] <= 12.5) {
										if (x[2] <= 0.5) {
											return 75.0f;
										}
										else {
											return 307.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 50.0f;
										}
										else {
											return 341.0f;
										}

									}

								}
								else {
									if (x[2] <= 0.5) {
										if (x[7] <= 14.5) {
											return 161.0f;
										}
										else {
											if (x[7] <= 15.5) {
												return 289.0f;
											}
											else {
												return 177.0f;
											}

										}

									}
									else {
										if (x[7] <= 14.5) {
											return 345.0f;
										}
										else {
											if (x[7] <= 15.5) {
												return 288.0f;
											}
											else {
												return 331.0f;
											}

										}

									}

								}

							}

						}

					}
					else {
						if (x[6] <= 7.5) {
							if (x[7] <= 11.5) {
								if (x[7] <= 9.5) {
									if (x[7] <= 8.5) {
										if (x[2] <= 0.5) {
											if (x[3] <= 0.5) {
												return 36.0f;
											}
											else {
												if (x[5] <= 0.5) {
													return 36.0f;
												}
												else {
													return 278.0f;
												}

											}

										}
										else {
											return 60.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 127.0f;
										}
										else {
											return 22.0f;
										}

									}

								}
								else {
									if (x[7] <= 10.5) {
										if (x[2] <= 0.5) {
											return 96.0f;
										}
										else {
											return 132.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 71.0f;
										}
										else {
											return 316.0f;
										}

									}

								}

							}
							else {
								if (x[7] <= 13.5) {
									if (x[7] <= 12.5) {
										if (x[2] <= 0.5) {
											return 49.0f;
										}
										else {
											return 47.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 270.0f;
										}
										else {
											return 294.0f;
										}

									}

								}
								else {
									if (x[2] <= 0.5) {
										if (x[7] <= 14.5) {
											return 290.0f;
										}
										else {
											if (x[7] <= 15.5) {
												return 229.0f;
											}
											else {
												return 158.0f;
											}

										}

									}
									else {
										if (x[7] <= 14.5) {
											return 281.0f;
										}
										else {
											if (x[7] <= 15.5) {
												return 327.0f;
											}
											else {
												return 357.0f;
											}

										}

									}

								}

							}

						}
						else {
							if (x[7] <= 11.5) {
								if (x[7] <= 9.5) {
									if (x[2] <= 0.5) {
										if (x[7] <= 8.5) {
											if (x[3] <= 0.5) {
												return 262.0f;
											}
											else {
												return 89.0f;
											}

										}
										else {
											return 69.0f;
										}

									}
									else {
										if (x[7] <= 8.5) {
											return 121.0f;
										}
										else {
											return 159.0f;
										}

									}

								}
								else {
									if (x[7] <= 10.5) {
										if (x[2] <= 0.5) {
											return 48.0f;
										}
										else {
											return 25.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 150.0f;
										}
										else {
											return 65.0f;
										}

									}

								}

							}
							else {
								if (x[7] <= 14.5) {
									if (x[2] <= 0.5) {
										if (x[7] <= 12.5) {
											return 35.0f;
										}
										else {
											if (x[7] <= 13.5) {
												return 138.0f;
											}
											else {
												return 213.0f;
											}

										}

									}
									else {
										if (x[7] <= 12.5) {
											return 301.0f;
										}
										else {
											if (x[7] <= 13.5) {
												return 248.0f;
											}
											else {
												return 243.0f;
											}

										}

									}

								}
								else {
									if (x[7] <= 15.5) {
										if (x[2] <= 0.5) {
											return 163.0f;
										}
										else {
											return 227.0f;
										}

									}
									else {
										if (x[2] <= 0.5) {
											return 247.0f;
										}
										else {
											return 124.0f;
										}

									}

								}

							}

						}

					}

				}

			}
			else {
				if (x[2] <= 0.5) {
					if (x[6] <= 6.5) {
						if (x[7] <= 8.5) {
							return 3.0f;
						}
						else {
							return 33.0f;
						}

					}
					else {
						if (x[7] <= 8.5) {
							if (x[6] <= 7.5) {
								return 3.0f;
							}
							else {
								return 196.0f;
							}

						}
						else {
							if (x[7] <= 13.5) {
								return 0.0f;
							}
							else {
								if (x[6] <= 7.5) {
									return 0.0f;
								}
								else {
									if (x[7] <= 14.5) {
										return 311.0f;
									}
									else {
										if (x[7] <= 15.5) {
											return 256.0f;
										}
										else {
											return 348.0f;
										}

									}

								}

							}

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
		if (x[6] <= 11.5) {
			if (x[2] <= 0.5) {
				if (x[7] <= 8.5) {
					if (x[7] <= 4.5) {
						if (x[7] <= 2.5) {
							if (x[4] <= 0.5) {
								if (x[6] <= 9.5) {
									if (x[7] <= 0.5) {
										return 72.0f;
									}
									else {
										if (x[7] <= 1.5) {
											return 110.0f;
										}
										else {
											return 238.0f;
										}

									}

								}
								else {
									if (x[6] <= 10.5) {
										if (x[7] <= 0.5) {
											return 246.0f;
										}
										else {
											if (x[7] <= 1.5) {
												if (x[3] <= 0.5) {
													if (x[5] <= 0.5) {
														return 203.0f;
													}
													else {
														return 275.0f;
													}

												}
												else {
													if (x[5] <= 0.5) {
														return 275.0f;
													}
													else {
														return 203.0f;
													}

												}

											}
											else {
												return 193.0f;
											}

										}

									}
									else {
										if (x[7] <= 0.5) {
											return 153.0f;
										}
										else {
											if (x[7] <= 1.5) {
												if (x[3] <= 0.5) {
													if (x[5] <= 0.5) {
														return 282.0f;
													}
													else {
														return 134.0f;
													}

												}
												else {
													return 134.0f;
												}

											}
											else {
												return 26.0f;
											}

										}

									}

								}

							}
							else {
								if (x[6] <= 9.5) {
									if (x[7] <= 0.5) {
										return 352.0f;
									}
									else {
										if (x[7] <= 1.5) {
											return 168.0f;
										}
										else {
											return 346.0f;
										}

									}

								}
								else {
									if (x[6] <= 10.5) {
										if (x[7] <= 0.5) {
											return 221.0f;
										}
										else {
											if (x[7] <= 1.5) {
												return 299.0f;
											}
											else {
												return 347.0f;
											}

										}

									}
									else {
										if (x[7] <= 0.5) {
											return 170.0f;
										}
										else {
											if (x[7] <= 1.5) {
												return 156.0f;
											}
											else {
												return 322.0f;
											}

										}

									}

								}

							}

						}
						else {
							if (x[7] <= 3.5) {
								if (x[4] <= 0.5) {
									if (x[6] <= 9.5) {
										return 258.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 70.0f;
										}
										else {
											return 178.0f;
										}

									}

								}
								else {
									if (x[6] <= 9.5) {
										return 269.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 335.0f;
										}
										else {
											return 232.0f;
										}

									}

								}

							}
							else {
								if (x[4] <= 0.5) {
									if (x[6] <= 9.5) {
										return 165.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 189.0f;
										}
										else {
											return 141.0f;
										}

									}

								}
								else {
									if (x[6] <= 9.5) {
										return 142.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 201.0f;
										}
										else {
											return 137.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[7] <= 6.5) {
							if (x[7] <= 5.5) {
								if (x[4] <= 0.5) {
									if (x[6] <= 9.5) {
										return 228.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 56.0f;
										}
										else {
											return 116.0f;
										}

									}

								}
								else {
									if (x[6] <= 9.5) {
										return 293.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 312.0f;
										}
										else {
											return 325.0f;
										}

									}

								}

							}
							else {
								if (x[4] <= 0.5) {
									if (x[6] <= 9.5) {
										return 98.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 118.0f;
										}
										else {
											return 88.0f;
										}

									}

								}
								else {
									if (x[6] <= 9.5) {
										return 173.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 234.0f;
										}
										else {
											return 313.0f;
										}

									}

								}

							}

						}
						else {
							if (x[7] <= 7.5) {
								if (x[4] <= 0.5) {
									if (x[6] <= 9.5) {
										return 144.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 191.0f;
										}
										else {
											return 18.0f;
										}

									}

								}
								else {
									if (x[6] <= 9.5) {
										return 38.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 136.0f;
										}
										else {
											return 218.0f;
										}

									}

								}

							}
							else {
								if (x[6] <= 10.5) {
									if (x[4] <= 0.5) {
										return 21.0f;
									}
									else {
										if (x[6] <= 9.5) {
											return 21.0f;
										}
										else {
											return 31.0f;
										}

									}

								}
								else {
									if (x[4] <= 0.5) {
										return 20.0f;
									}
									else {
										return 92.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (x[7] <= 12.5) {
						if (x[7] <= 10.5) {
							if (x[7] <= 9.5) {
								if (x[4] <= 0.5) {
									if (x[6] <= 9.5) {
										return 68.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 79.0f;
										}
										else {
											return 57.0f;
										}

									}

								}
								else {
									if (x[6] <= 9.5) {
										return 34.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 32.0f;
										}
										else {
											return 265.0f;
										}

									}

								}

							}
							else {
								if (x[4] <= 0.5) {
									if (x[6] <= 9.5) {
										return 46.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 45.0f;
										}
										else {
											return 291.0f;
										}

									}

								}
								else {
									if (x[6] <= 9.5) {
										return 43.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 296.0f;
										}
										else {
											return 285.0f;
										}

									}

								}

							}

						}
						else {
							if (x[7] <= 11.5) {
								if (x[4] <= 0.5) {
									if (x[6] <= 9.5) {
										return 273.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 292.0f;
										}
										else {
											return 133.0f;
										}

									}

								}
								else {
									if (x[6] <= 9.5) {
										return 295.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 66.0f;
										}
										else {
											return 337.0f;
										}

									}

								}

							}
							else {
								if (x[4] <= 0.5) {
									if (x[6] <= 9.5) {
										return 283.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 230.0f;
										}
										else {
											return 302.0f;
										}

									}

								}
								else {
									if (x[6] <= 9.5) {
										return 314.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 140.0f;
										}
										else {
											return 215.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[7] <= 14.5) {
							if (x[7] <= 13.5) {
								if (x[6] <= 9.5) {
									if (x[4] <= 0.5) {
										return 306.0f;
									}
									else {
										return 51.0f;
									}

								}
								else {
									if (x[6] <= 10.5) {
										if (x[4] <= 0.5) {
											if (x[3] <= 0.5) {
												if (x[5] <= 0.5) {
													return 222.0f;
												}
												else {
													return 253.0f;
												}

											}
											else {
												return 253.0f;
											}

										}
										else {
											return 107.0f;
										}

									}
									else {
										if (x[4] <= 0.5) {
											return 16.0f;
										}
										else {
											return 350.0f;
										}

									}

								}

							}
							else {
								if (x[4] <= 0.5) {
									if (x[6] <= 9.5) {
										return 323.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 333.0f;
										}
										else {
											return 224.0f;
										}

									}

								}
								else {
									if (x[6] <= 9.5) {
										return 27.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 174.0f;
										}
										else {
											return 355.0f;
										}

									}

								}

							}

						}
						else {
							if (x[7] <= 15.5) {
								if (x[4] <= 0.5) {
									if (x[6] <= 9.5) {
										return 80.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 126.0f;
										}
										else {
											return 114.0f;
										}

									}

								}
								else {
									if (x[6] <= 9.5) {
										return 349.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 354.0f;
										}
										else {
											return 167.0f;
										}

									}

								}

							}
							else {
								if (x[4] <= 0.5) {
									if (x[6] <= 9.5) {
										return 263.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 324.0f;
										}
										else {
											return 240.0f;
										}

									}

								}
								else {
									if (x[6] <= 9.5) {
										return 353.0f;
									}
									else {
										if (x[6] <= 10.5) {
											return 358.0f;
										}
										else {
											return 170.0f;
										}

									}

								}

							}

						}

					}

				}

			}
			else {
				if (x[6] <= 9.5) {
					if (x[4] <= 0.5) {
						if (x[7] <= 3.5) {
							return 3.0f;
						}
						else {
							if (x[7] <= 12.5) {
								if (x[7] <= 5.5) {
									if (x[7] <= 4.5) {
										return 210.0f;
									}
									else {
										return 276.0f;
									}

								}
								else {
									if (x[7] <= 10.5) {
										if (x[7] <= 6.5) {
											return 28.0f;
										}
										else {
											if (x[7] <= 9.5) {
												if (x[7] <= 7.5) {
													return 62.0f;
												}
												else {
													if (x[7] <= 8.5) {
														return 251.0f;
													}
													else {
														return 62.0f;
													}

												}

											}
											else {
												return 28.0f;
											}

										}

									}
									else {
										if (x[7] <= 11.5) {
											return 276.0f;
										}
										else {
											return 210.0f;
										}

									}

								}

							}
							else {
								return 3.0f;
							}

						}

					}
					else {
						return 3.0f;
					}

				}
				else {
					return 3.0f;
				}

			}

		}
		else {
			if (x[6] <= 15.5) {
				if (x[6] <= 12.5) {
					if (x[2] <= 0.5) {
						if (x[4] <= 0.5) {
							if (x[7] <= 7.5) {
								if (x[7] <= 3.5) {
									if (x[7] <= 1.5) {
										if (x[7] <= 0.5) {
											return 11.0f;
										}
										else {
											return 143.0f;
										}

									}
									else {
										if (x[7] <= 2.5) {
											return 164.0f;
										}
										else {
											return 113.0f;
										}

									}

								}
								else {
									if (x[7] <= 5.5) {
										if (x[7] <= 4.5) {
											return 86.0f;
										}
										else {
											return 59.0f;
										}

									}
									else {
										if (x[7] <= 6.5) {
											return 211.0f;
										}
										else {
											return 17.0f;
										}

									}

								}

							}
							else {
								if (x[7] <= 11.5) {
									if (x[7] <= 9.5) {
										if (x[7] <= 8.5) {
											return 19.0f;
										}
										else {
											return 24.0f;
										}

									}
									else {
										if (x[7] <= 10.5) {
											return 279.0f;
										}
										else {
											return 214.0f;
										}

									}

								}
								else {
									if (x[7] <= 13.5) {
										if (x[7] <= 12.5) {
											return 271.0f;
										}
										else {
											return 64.0f;
										}

									}
									else {
										if (x[7] <= 14.5) {
											return 257.0f;
										}
										else {
											if (x[7] <= 15.5) {
												return 143.0f;
											}
											else {
												return 11.0f;
											}

										}

									}

								}

							}

						}
						else {
							if (x[7] <= 7.5) {
								if (x[7] <= 3.5) {
									if (x[7] <= 2.5) {
										return 3.0f;
									}
									else {
										return 154.0f;
									}

								}
								else {
									if (x[7] <= 5.5) {
										if (x[7] <= 4.5) {
											return 254.0f;
										}
										else {
											return 249.0f;
										}

									}
									else {
										if (x[7] <= 6.5) {
											return 268.0f;
										}
										else {
											return 169.0f;
										}

									}

								}

							}
							else {
								if (x[7] <= 12.5) {
									if (x[7] <= 9.5) {
										if (x[7] <= 8.5) {
											return 304.0f;
										}
										else {
											return 81.0f;
										}

									}
									else {
										if (x[7] <= 10.5) {
											return 245.0f;
										}
										else {
											if (x[7] <= 11.5) {
												return 190.0f;
											}
											else {
												return 321.0f;
											}

										}

									}

								}
								else {
									if (x[7] <= 13.5) {
										return 154.0f;
									}
									else {
										return 3.0f;
									}

								}

							}

						}

					}
					else {
						return 3.0f;
					}

				}
				else {
					if (x[6] <= 13.5) {
						if (x[4] <= 0.5) {
							if (x[2] <= 0.5) {
								if (x[7] <= 2.5) {
									return 3.0f;
								}
								else {
									if (x[7] <= 13.5) {
										if (x[7] <= 7.5) {
											if (x[7] <= 4.5) {
												if (x[7] <= 3.5) {
													return 85.0f;
												}
												else {
													return 58.0f;
												}

											}
											else {
												if (x[7] <= 5.5) {
													return 135.0f;
												}
												else {
													if (x[7] <= 6.5) {
														return 151.0f;
													}
													else {
														return 61.0f;
													}

												}

											}

										}
										else {
											if (x[7] <= 10.5) {
												if (x[7] <= 8.5) {
													return 217.0f;
												}
												else {
													if (x[7] <= 9.5) {
														return 103.0f;
													}
													else {
														return 250.0f;
													}

												}

											}
											else {
												if (x[7] <= 11.5) {
													return 135.0f;
												}
												else {
													if (x[7] <= 12.5) {
														return 58.0f;
													}
													else {
														return 85.0f;
													}

												}

											}

										}

									}
									else {
										return 3.0f;
									}

								}

							}
							else {
								return 3.0f;
							}

						}
						else {
							if (x[7] <= 5.5) {
								return 3.0f;
							}
							else {
								if (x[7] <= 10.5) {
									if (x[2] <= 0.5) {
										if (x[7] <= 6.5) {
											return 223.0f;
										}
										else {
											if (x[7] <= 9.5) {
												if (x[7] <= 7.5) {
													return 303.0f;
												}
												else {
													if (x[7] <= 8.5) {
														return 241.0f;
													}
													else {
														return 303.0f;
													}

												}

											}
											else {
												return 223.0f;
											}

										}

									}
									else {
										return 3.0f;
									}

								}
								else {
									return 3.0f;
								}

							}

						}

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

	}

}