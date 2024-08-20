#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {251.f,0.f,1.f,0.f,0.f,5.f,0.f,0.f,3.f,2.f,5.f,0.f,1.f,0.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[13] <= 0.5) {
		if (x[8] <= 0.5) {
			if (x[7] <= 0.5) {
				if (x[5] <= 1.5) {
					if (x[3] <= -0.5) {
						if (x[4] <= 4.5) {
							return 1.0f;
						}
						else {
							if (x[5] <= 0.5) {
								return 6.0f;
							}
							else {
								return 1.0f;
							}

						}

					}
					else {
						return 6.0f;
					}

				}
				else {
					return 1.0f;
				}

			}
			else {
				if (x[3] <= 0.0) {
					if (x[5] <= 2.5) {
						if (x[7] <= 2.5) {
							if (x[4] <= 0.5) {
								if (x[5] <= 0.5) {
									return 1.0f;
								}
								else {
									return 6.0f;
								}

							}
							else {
								if (x[5] <= 1.0) {
									return 6.0f;
								}
								else {
									return 1.0f;
								}

							}

						}
						else {
							if (x[2] <= 0.5) {
								if (x[5] <= 0.5) {
									if (x[4] <= 3.5) {
										return 1.0f;
									}
									else {
										return 6.0f;
									}

								}
								else {
									return 6.0f;
								}

							}
							else {
								if (x[4] <= 3.5) {
									if (x[4] <= 0.5) {
										return 1.0f;
									}
									else {
										if (x[7] <= 4.0) {
											return 6.0f;
										}
										else {
											return 1.0f;
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
						if (x[4] <= 0.5) {
							return 1.0f;
						}
						else {
							if (x[7] <= 1.5) {
								return 1.0f;
							}
							else {
								return 6.0f;
							}

						}

					}

				}
				else {
					return 6.0f;
				}

			}

		}
		else {
			if (x[2] <= -0.5) {
				if (x[5] <= 1.5) {
					if (x[8] <= 2.5) {
						return 6.0f;
					}
					else {
						if (x[8] <= 5.5) {
							if (x[8] <= 4.5) {
								if (x[3] <= 0.5) {
									if (x[4] <= 3.0) {
										return 1.0f;
									}
									else {
										return 6.0f;
									}

								}
								else {
									return 6.0f;
								}

							}
							else {
								return 1.0f;
							}

						}
						else {
							return 6.0f;
						}

					}

				}
				else {
					return 1.0f;
				}

			}
			else {
				return 6.0f;
			}

		}

	}
	else {
		if (x[8] <= 2.5) {
			if (x[5] <= 0.5) {
				if (x[7] <= 2.5) {
					if (x[4] <= 0.5) {
						return 3.0f;
					}
					else {
						if (x[2] <= 0.5) {
							if (x[4] <= 2.0) {
								return 2.0f;
							}
							else {
								return 3.0f;
							}

						}
						else {
							if (x[4] <= 3.5) {
								return 6.0f;
							}
							else {
								return 5.0f;
							}

						}

					}

				}
				else {
					if (x[2] <= 0.5) {
						if (x[4] <= 0.5) {
							return 5.0f;
						}
						else {
							return 6.0f;
						}

					}
					else {
						return 6.0f;
					}

				}

			}
			else {
				if (x[4] <= 0.5) {
					if (x[7] <= 1.5) {
						if (x[2] <= 0.5) {
							if (x[3] <= -0.5) {
								if (x[5] <= 5.5) {
									if (x[5] <= 2.5) {
										return 0.0f;
									}
									else {
										if (x[5] <= 4.5) {
											return 3.0f;
										}
										else {
											if (x[7] <= 0.5) {
												return 3.0f;
											}
											else {
												return 0.0f;
											}

										}

									}

								}
								else {
									return 0.0f;
								}

							}
							else {
								if (x[5] <= 1.5) {
									return 3.0f;
								}
								else {
									if (x[3] <= 0.5) {
										return 0.0f;
									}
									else {
										if (x[5] <= 2.5) {
											return 6.0f;
										}
										else {
											return 0.0f;
										}

									}

								}

							}

						}
						else {
							return 5.0f;
						}

					}
					else {
						if (x[5] <= 4.5) {
							if (x[2] <= 0.5) {
								if (x[7] <= 3.5) {
									return 6.0f;
								}
								else {
									if (x[5] <= 3.5) {
										return 6.0f;
									}
									else {
										return 0.0f;
									}

								}

							}
							else {
								return 0.0f;
							}

						}
						else {
							return 0.0f;
						}

					}

				}
				else {
					if (x[7] <= 0.5) {
						if (x[5] <= 2.5) {
							if (x[4] <= 5.5) {
								return 6.0f;
							}
							else {
								if (x[3] <= -0.5) {
									return 0.0f;
								}
								else {
									return 6.0f;
								}

							}

						}
						else {
							return 0.0f;
						}

					}
					else {
						if (x[5] <= 5.5) {
							if (x[5] <= 1.5) {
								if (x[2] <= 0.5) {
									return 0.0f;
								}
								else {
									return 2.0f;
								}

							}
							else {
								if (x[4] <= 3.5) {
									if (x[7] <= 1.5) {
										if (x[5] <= 4.5) {
											return 6.0f;
										}
										else {
											return 2.0f;
										}

									}
									else {
										return 2.0f;
									}

								}
								else {
									return 6.0f;
								}

							}

						}
						else {
							return 0.0f;
						}

					}

				}

			}

		}
		else {
			if (x[2] <= -0.5) {
				if (x[5] <= 2.5) {
					if (x[8] <= 5.0) {
						if (x[8] <= 3.5) {
							if (x[3] <= 0.5) {
								if (x[5] <= 1.5) {
									return 6.0f;
								}
								else {
									return 0.0f;
								}

							}
							else {
								return 6.0f;
							}

						}
						else {
							return 6.0f;
						}

					}
					else {
						return 0.0f;
					}

				}
				else {
					return 0.0f;
				}

			}
			else {
				return 6.0f;
			}

		}

	}

}