#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {1.f,0.f,1.f,0.f,0.f,1.f,0.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[6] <= 6.5) {
		if (x[7] <= 5.5) {
			if (x[4] <= 0.5) {
				if (x[6] <= 3.5) {
					if (x[6] <= 2.5) {
						if (x[6] <= 1.5) {
							if (x[0] <= 0.5) {
								return 138.0f;
							}
							else {
								return 0.0f;
							}

						}
						else {
							if (x[7] <= 0.5) {
								if (x[2] <= 0.5) {
									return 120.0f;
								}
								else {
									return 4.0f;
								}

							}
							else {
								if (x[7] <= 4.5) {
									return 0.0f;
								}
								else {
									if (x[2] <= 0.5) {
										return 110.0f;
									}
									else {
										return 214.0f;
									}

								}

							}

						}

					}
					else {
						if (x[7] <= 2.5) {
							if (x[2] <= 0.5) {
								if (x[7] <= 0.5) {
									return 147.0f;
								}
								else {
									if (x[7] <= 1.5) {
										return 98.0f;
									}
									else {
										return 123.0f;
									}

								}

							}
							else {
								if (x[7] <= 0.5) {
									return 136.0f;
								}
								else {
									if (x[7] <= 1.5) {
										return 0.0f;
									}
									else {
										return 18.0f;
									}

								}

							}

						}
						else {
							if (x[2] <= 0.5) {
								if (x[7] <= 3.5) {
									return 40.0f;
								}
								else {
									if (x[7] <= 4.5) {
										return 109.0f;
									}
									else {
										return 59.0f;
									}

								}

							}
							else {
								if (x[7] <= 3.5) {
									return 31.0f;
								}
								else {
									if (x[7] <= 4.5) {
										return 198.0f;
									}
									else {
										return 113.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (x[7] <= 2.5) {
						if (x[2] <= 0.5) {
							if (x[6] <= 4.5) {
								if (x[7] <= 0.5) {
									return 115.0f;
								}
								else {
									if (x[7] <= 1.5) {
										return 143.0f;
									}
									else {
										return 35.0f;
									}

								}

							}
							else {
								if (x[6] <= 5.5) {
									if (x[7] <= 0.5) {
										return 148.0f;
									}
									else {
										if (x[7] <= 1.5) {
											return 116.0f;
										}
										else {
											return 75.0f;
										}

									}

								}
								else {
									if (x[7] <= 0.5) {
										if (x[3] <= 0.5) {
											if (x[5] <= 0.5) {
												return 189.0f;
											}
											else {
												return 54.0f;
											}

										}
										else {
											return 54.0f;
										}

									}
									else {
										if (x[7] <= 1.5) {
											return 80.0f;
										}
										else {
											return 88.0f;
										}

									}

								}

							}

						}
						else {
							if (x[6] <= 4.5) {
								if (x[7] <= 0.5) {
									return 20.0f;
								}
								else {
									if (x[7] <= 1.5) {
										return 166.0f;
									}
									else {
										return 82.0f;
									}

								}

							}
							else {
								if (x[6] <= 5.5) {
									if (x[7] <= 0.5) {
										return 19.0f;
									}
									else {
										if (x[7] <= 1.5) {
											return 162.0f;
										}
										else {
											return 181.0f;
										}

									}

								}
								else {
									if (x[7] <= 0.5) {
										return 121.0f;
									}
									else {
										if (x[7] <= 1.5) {
											return 172.0f;
										}
										else {
											return 171.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[2] <= 0.5) {
							if (x[6] <= 4.5) {
								if (x[7] <= 3.5) {
									return 137.0f;
								}
								else {
									if (x[7] <= 4.5) {
										return 154.0f;
									}
									else {
										return 127.0f;
									}

								}

							}
							else {
								if (x[6] <= 5.5) {
									if (x[7] <= 3.5) {
										return 149.0f;
									}
									else {
										if (x[7] <= 4.5) {
											return 101.0f;
										}
										else {
											return 102.0f;
										}

									}

								}
								else {
									if (x[7] <= 3.5) {
										return 119.0f;
									}
									else {
										if (x[7] <= 4.5) {
											return 157.0f;
										}
										else {
											return 81.0f;
										}

									}

								}

							}

						}
						else {
							if (x[6] <= 4.5) {
								if (x[7] <= 3.5) {
									return 112.0f;
								}
								else {
									if (x[7] <= 4.5) {
										return 210.0f;
									}
									else {
										return 165.0f;
									}

								}

							}
							else {
								if (x[6] <= 5.5) {
									if (x[7] <= 3.5) {
										return 203.0f;
									}
									else {
										if (x[7] <= 4.5) {
											if (x[5] <= 0.5) {
												return 196.0f;
											}
											else {
												return 91.0f;
											}

										}
										else {
											return 175.0f;
										}

									}

								}
								else {
									if (x[7] <= 3.5) {
										return 195.0f;
									}
									else {
										if (x[7] <= 4.5) {
											return 194.0f;
										}
										else {
											return 45.0f;
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
					if (x[6] <= 5.5) {
						return 44.0f;
					}
					else {
						if (x[7] <= 2.5) {
							if (x[7] <= 0.5) {
								return 221.0f;
							}
							else {
								if (x[7] <= 1.5) {
									return 182.0f;
								}
								else {
									return 173.0f;
								}

							}

						}
						else {
							if (x[7] <= 3.5) {
								return 158.0f;
							}
							else {
								if (x[7] <= 4.5) {
									return 155.0f;
								}
								else {
									return 0.0f;
								}

							}

						}

					}

				}
				else {
					return 1.0f;
				}

			}

		}
		else {
			if (x[4] <= 0.5) {
				if (x[6] <= 3.5) {
					if (x[6] <= 2.5) {
						if (x[7] <= 6.5) {
							if (x[6] <= 0.5) {
								return 1.0f;
							}
							else {
								if (x[6] <= 1.5) {
									return 106.0f;
								}
								else {
									return 67.0f;
								}

							}

						}
						else {
							if (x[6] <= 1.5) {
								return 3.0f;
							}
							else {
								if (x[7] <= 7.5) {
									if (x[2] <= 0.5) {
										return 99.0f;
									}
									else {
										return 150.0f;
									}

								}
								else {
									if (x[7] <= 11.5) {
										return 3.0f;
									}
									else {
										if (x[2] <= 0.5) {
											return 51.0f;
										}
										else {
											return 5.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[7] <= 8.5) {
							if (x[7] <= 6.5) {
								return 67.0f;
							}
							else {
								if (x[7] <= 7.5) {
									if (x[2] <= 0.5) {
										return 74.0f;
									}
									else {
										return 128.0f;
									}

								}
								else {
									if (x[2] <= 0.5) {
										return 94.0f;
									}
									else {
										return 220.0f;
									}

								}

							}

						}
						else {
							if (x[7] <= 10.5) {
								if (x[7] <= 9.5) {
									if (x[2] <= 0.5) {
										return 77.0f;
									}
									else {
										return 28.0f;
									}

								}
								else {
									if (x[2] <= 0.5) {
										return 142.0f;
									}
									else {
										return 95.0f;
									}

								}

							}
							else {
								if (x[7] <= 11.5) {
									if (x[2] <= 0.5) {
										return 118.0f;
									}
									else {
										return 3.0f;
									}

								}
								else {
									if (x[2] <= 0.5) {
										return 163.0f;
									}
									else {
										return 17.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (x[7] <= 8.5) {
						if (x[2] <= 0.5) {
							if (x[6] <= 4.5) {
								if (x[7] <= 6.5) {
									return 78.0f;
								}
								else {
									if (x[7] <= 7.5) {
										return 96.0f;
									}
									else {
										return 50.0f;
									}

								}

							}
							else {
								if (x[6] <= 5.5) {
									if (x[7] <= 6.5) {
										return 126.0f;
									}
									else {
										if (x[7] <= 7.5) {
											return 72.0f;
										}
										else {
											return 73.0f;
										}

									}

								}
								else {
									if (x[7] <= 6.5) {
										if (x[3] <= 0.5) {
											return 104.0f;
										}
										else {
											return 68.0f;
										}

									}
									else {
										if (x[7] <= 7.5) {
											return 49.0f;
										}
										else {
											return 69.0f;
										}

									}

								}

							}

						}
						else {
							if (x[6] <= 5.5) {
								if (x[6] <= 4.5) {
									if (x[7] <= 6.5) {
										return 177.0f;
									}
									else {
										if (x[7] <= 7.5) {
											return 199.0f;
										}
										else {
											return 197.0f;
										}

									}

								}
								else {
									if (x[7] <= 6.5) {
										return 42.0f;
									}
									else {
										if (x[7] <= 7.5) {
											return 176.0f;
										}
										else {
											if (x[5] <= 0.5) {
												return 170.0f;
											}
											else {
												return 212.0f;
											}

										}

									}

								}

							}
							else {
								if (x[7] <= 6.5) {
									return 41.0f;
								}
								else {
									if (x[7] <= 7.5) {
										return 43.0f;
									}
									else {
										return 145.0f;
									}

								}

							}

						}

					}
					else {
						if (x[7] <= 10.5) {
							if (x[7] <= 9.5) {
								if (x[2] <= 0.5) {
									if (x[6] <= 4.5) {
										return 52.0f;
									}
									else {
										if (x[6] <= 5.5) {
											return 56.0f;
										}
										else {
											return 168.0f;
										}

									}

								}
								else {
									if (x[6] <= 4.5) {
										return 191.0f;
									}
									else {
										if (x[6] <= 5.5) {
											return 125.0f;
										}
										else {
											return 190.0f;
										}

									}

								}

							}
							else {
								if (x[2] <= 0.5) {
									if (x[6] <= 4.5) {
										return 38.0f;
									}
									else {
										if (x[6] <= 5.5) {
											return 167.0f;
										}
										else {
											return 192.0f;
										}

									}

								}
								else {
									if (x[6] <= 4.5) {
										return 29.0f;
									}
									else {
										if (x[6] <= 5.5) {
											return 100.0f;
										}
										else {
											return 211.0f;
										}

									}

								}

							}

						}
						else {
							if (x[7] <= 11.5) {
								if (x[2] <= 0.5) {
									if (x[6] <= 4.5) {
										return 131.0f;
									}
									else {
										if (x[6] <= 5.5) {
											return 129.0f;
										}
										else {
											return 34.0f;
										}

									}

								}
								else {
									if (x[6] <= 4.5) {
										return 16.0f;
									}
									else {
										if (x[6] <= 5.5) {
											return 179.0f;
										}
										else {
											return 107.0f;
										}

									}

								}

							}
							else {
								if (x[2] <= 0.5) {
									if (x[6] <= 4.5) {
										return 202.0f;
									}
									else {
										if (x[6] <= 5.5) {
											return 156.0f;
										}
										else {
											return 130.0f;
										}

									}

								}
								else {
									if (x[6] <= 4.5) {
										return 9.0f;
									}
									else {
										if (x[6] <= 5.5) {
											return 30.0f;
										}
										else {
											return 169.0f;
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
					if (x[7] <= 6.5) {
						if (x[6] <= 5.5) {
							return 1.0f;
						}
						else {
							return 46.0f;
						}

					}
					else {
						if (x[6] <= 5.5) {
							return 47.0f;
						}
						else {
							if (x[7] <= 9.5) {
								if (x[7] <= 7.5) {
									return 3.0f;
								}
								else {
									if (x[7] <= 8.5) {
										return 144.0f;
									}
									else {
										return 188.0f;
									}

								}

							}
							else {
								if (x[7] <= 10.5) {
									return 76.0f;
								}
								else {
									if (x[7] <= 11.5) {
										return 213.0f;
									}
									else {
										return 159.0f;
									}

								}

							}

						}

					}

				}
				else {
					return 1.0f;
				}

			}

		}

	}
	else {
		if (x[6] <= 11.5) {
			if (x[6] <= 8.5) {
				if (x[2] <= 0.5) {
					if (x[6] <= 7.5) {
						if (x[7] <= 6.5) {
							if (x[7] <= 2.5) {
								if (x[4] <= 0.5) {
									if (x[7] <= 0.5) {
										return 114.0f;
									}
									else {
										if (x[7] <= 1.5) {
											if (x[3] <= 0.5) {
												if (x[5] <= 0.5) {
													return 134.0f;
												}
												else {
													return 146.0f;
												}

											}
											else {
												if (x[5] <= 0.5) {
													return 146.0f;
												}
												else {
													return 134.0f;
												}

											}

										}
										else {
											return 92.0f;
										}

									}

								}
								else {
									if (x[7] <= 0.5) {
										return 103.0f;
									}
									else {
										if (x[7] <= 1.5) {
											return 62.0f;
										}
										else {
											return 97.0f;
										}

									}

								}

							}
							else {
								if (x[7] <= 4.5) {
									if (x[7] <= 3.5) {
										if (x[4] <= 0.5) {
											return 85.0f;
										}
										else {
											return 215.0f;
										}

									}
									else {
										if (x[4] <= 0.5) {
											return 84.0f;
										}
										else {
											return 186.0f;
										}

									}

								}
								else {
									if (x[7] <= 5.5) {
										if (x[4] <= 0.5) {
											return 57.0f;
										}
										else {
											return 124.0f;
										}

									}
									else {
										if (x[4] <= 0.5) {
											return 67.0f;
										}
										else {
											return 108.0f;
										}

									}

								}

							}

						}
						else {
							if (x[7] <= 9.5) {
								if (x[4] <= 0.5) {
									if (x[7] <= 7.5) {
										return 135.0f;
									}
									else {
										if (x[7] <= 8.5) {
											return 58.0f;
										}
										else {
											return 117.0f;
										}

									}

								}
								else {
									if (x[7] <= 7.5) {
										return 174.0f;
									}
									else {
										if (x[7] <= 8.5) {
											return 141.0f;
										}
										else {
											return 208.0f;
										}

									}

								}

							}
							else {
								if (x[4] <= 0.5) {
									if (x[7] <= 10.5) {
										return 160.0f;
									}
									else {
										if (x[7] <= 11.5) {
											return 164.0f;
										}
										else {
											return 90.0f;
										}

									}

								}
								else {
									if (x[7] <= 10.5) {
										return 53.0f;
									}
									else {
										if (x[7] <= 11.5) {
											return 223.0f;
										}
										else {
											return 23.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[7] <= 5.5) {
							if (x[7] <= 2.5) {
								if (x[4] <= 0.5) {
									if (x[7] <= 0.5) {
										return 139.0f;
									}
									else {
										if (x[7] <= 1.5) {
											return 161.0f;
										}
										else {
											return 83.0f;
										}

									}

								}
								else {
									if (x[7] <= 0.5) {
										return 12.0f;
									}
									else {
										if (x[7] <= 1.5) {
											return 25.0f;
										}
										else {
											return 183.0f;
										}

									}

								}

							}
							else {
								if (x[4] <= 0.5) {
									if (x[7] <= 3.5) {
										return 63.0f;
									}
									else {
										if (x[7] <= 4.5) {
											return 65.0f;
										}
										else {
											return 66.0f;
										}

									}

								}
								else {
									if (x[7] <= 3.5) {
										return 216.0f;
									}
									else {
										if (x[7] <= 4.5) {
											return 206.0f;
										}
										else {
											return 187.0f;
										}

									}

								}

							}

						}
						else {
							if (x[7] <= 8.5) {
								if (x[4] <= 0.5) {
									if (x[7] <= 6.5) {
										return 180.0f;
									}
									else {
										if (x[7] <= 7.5) {
											return 132.0f;
										}
										else {
											return 153.0f;
										}

									}

								}
								else {
									if (x[7] <= 6.5) {
										return 86.0f;
									}
									else {
										if (x[7] <= 7.5) {
											return 133.0f;
										}
										else {
											return 185.0f;
										}

									}

								}

							}
							else {
								if (x[7] <= 10.5) {
									if (x[7] <= 9.5) {
										if (x[4] <= 0.5) {
											return 204.0f;
										}
										else {
											return 218.0f;
										}

									}
									else {
										if (x[4] <= 0.5) {
											return 79.0f;
										}
										else {
											return 48.0f;
										}

									}

								}
								else {
									if (x[7] <= 11.5) {
										if (x[4] <= 0.5) {
											return 70.0f;
										}
										else {
											return 22.0f;
										}

									}
									else {
										if (x[4] <= 0.5) {
											return 15.0f;
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
				else {
					if (x[6] <= 7.5) {
						if (x[4] <= 0.5) {
							if (x[7] <= 2.5) {
								if (x[7] <= 0.5) {
									return 1.0f;
								}
								else {
									if (x[7] <= 1.5) {
										return 32.0f;
									}
									else {
										return 93.0f;
									}

								}

							}
							else {
								if (x[7] <= 9.5) {
									if (x[7] <= 3.5) {
										return 122.0f;
									}
									else {
										if (x[7] <= 8.5) {
											if (x[7] <= 4.5) {
												return 178.0f;
											}
											else {
												if (x[7] <= 7.5) {
													if (x[7] <= 5.5) {
														return 36.0f;
													}
													else {
														if (x[7] <= 6.5) {
															return 87.0f;
														}
														else {
															return 36.0f;
														}

													}

												}
												else {
													return 178.0f;
												}

											}

										}
										else {
											return 122.0f;
										}

									}

								}
								else {
									if (x[7] <= 10.5) {
										return 93.0f;
									}
									else {
										if (x[7] <= 11.5) {
											return 32.0f;
										}
										else {
											return 1.0f;
										}

									}

								}

							}

						}
						else {
							return 1.0f;
						}

					}
					else {
						return 1.0f;
					}

				}

			}
			else {
				if (x[6] <= 9.5) {
					if (x[2] <= 0.5) {
						if (x[4] <= 0.5) {
							if (x[7] <= 5.5) {
								if (x[7] <= 2.5) {
									if (x[7] <= 0.5) {
										return 8.0f;
									}
									else {
										if (x[7] <= 1.5) {
											return 14.0f;
										}
										else {
											return 27.0f;
										}

									}

								}
								else {
									if (x[7] <= 3.5) {
										if (x[3] <= 0.5) {
											if (x[5] <= 0.5) {
												return 39.0f;
											}
											else {
												return 61.0f;
											}

										}
										else {
											if (x[5] <= 0.5) {
												return 61.0f;
											}
											else {
												return 39.0f;
											}

										}

									}
									else {
										if (x[7] <= 4.5) {
											if (x[3] <= 0.5) {
												if (x[5] <= 0.5) {
													return 64.0f;
												}
												else {
													return 152.0f;
												}

											}
											else {
												if (x[5] <= 0.5) {
													return 152.0f;
												}
												else {
													return 64.0f;
												}

											}

										}
										else {
											return 37.0f;
										}

									}

								}

							}
							else {
								if (x[7] <= 8.5) {
									if (x[7] <= 6.5) {
										return 151.0f;
									}
									else {
										if (x[7] <= 7.5) {
											return 184.0f;
										}
										else {
											return 205.0f;
										}

									}

								}
								else {
									if (x[7] <= 10.5) {
										if (x[7] <= 9.5) {
											return 39.0f;
										}
										else {
											return 27.0f;
										}

									}
									else {
										if (x[7] <= 11.5) {
											return 14.0f;
										}
										else {
											return 8.0f;
										}

									}

								}

							}

						}
						else {
							if (x[7] <= 5.5) {
								if (x[7] <= 2.5) {
									if (x[7] <= 0.5) {
										return 1.0f;
									}
									else {
										if (x[7] <= 1.5) {
											return 11.0f;
										}
										else {
											return 24.0f;
										}

									}

								}
								else {
									if (x[7] <= 3.5) {
										return 140.0f;
									}
									else {
										if (x[7] <= 4.5) {
											return 200.0f;
										}
										else {
											return 207.0f;
										}

									}

								}

							}
							else {
								if (x[7] <= 8.5) {
									if (x[7] <= 6.5) {
										return 193.0f;
									}
									else {
										if (x[7] <= 7.5) {
											return 209.0f;
										}
										else {
											return 201.0f;
										}

									}

								}
								else {
									if (x[7] <= 10.5) {
										if (x[7] <= 9.5) {
											return 111.0f;
										}
										else {
											return 21.0f;
										}

									}
									else {
										if (x[7] <= 11.5) {
											return 11.0f;
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
						return 1.0f;
					}

				}
				else {
					if (x[6] <= 10.5) {
						if (x[2] <= 0.5) {
							if (x[4] <= 0.5) {
								if (x[7] <= 2.5) {
									if (x[7] <= 0.5) {
										return 7.0f;
									}
									else {
										if (x[7] <= 1.5) {
											return 71.0f;
										}
										else {
											return 13.0f;
										}

									}

								}
								else {
									if (x[7] <= 9.5) {
										if (x[7] <= 3.5) {
											return 26.0f;
										}
										else {
											if (x[7] <= 8.5) {
												if (x[7] <= 4.5) {
													return 89.0f;
												}
												else {
													if (x[7] <= 7.5) {
														if (x[7] <= 5.5) {
															return 55.0f;
														}
														else {
															if (x[7] <= 6.5) {
																return 60.0f;
															}
															else {
																return 55.0f;
															}

														}

													}
													else {
														return 89.0f;
													}

												}

											}
											else {
												return 26.0f;
											}

										}

									}
									else {
										if (x[7] <= 10.5) {
											return 13.0f;
										}
										else {
											if (x[7] <= 11.5) {
												return 6.0f;
											}
											else {
												return 7.0f;
											}

										}

									}

								}

							}
							else {
								if (x[7] <= 3.5) {
									return 1.0f;
								}
								else {
									if (x[7] <= 8.5) {
										if (x[7] <= 5.5) {
											if (x[7] <= 4.5) {
												return 33.0f;
											}
											else {
												if (x[3] <= 0.5) {
													return 217.0f;
												}
												else {
													return 222.0f;
												}

											}

										}
										else {
											if (x[7] <= 6.5) {
												return 105.0f;
											}
											else {
												if (x[7] <= 7.5) {
													if (x[3] <= 0.5) {
														return 219.0f;
													}
													else {
														return 224.0f;
													}

												}
												else {
													return 33.0f;
												}

											}

										}

									}
									else {
										return 1.0f;
									}

								}

							}

						}
						else {
							return 1.0f;
						}

					}
					else {
						return 1.0f;
					}

				}

			}

		}
		else {
			return 2.0f;
		}

	}

}