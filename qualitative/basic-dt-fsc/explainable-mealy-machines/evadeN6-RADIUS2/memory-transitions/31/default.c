#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {31.f,0.f,0.f,1.f,0.f,-1.f,-1.f,1.f,1.f,0.f,5.f,1.f,0.f,-1.f,-1.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[10] <= 3.5) {
		if (x[10] <= 2.5) {
			if (x[11] <= 0.5) {
				if (x[10] <= 0.5) {
					if (x[14] <= 2.5) {
						if (x[13] <= 2.5) {
							if (x[13] <= -0.5) {
								return 21.0f;
							}
							else {
								return 1.0f;
							}

						}
						else {
							if (x[13] <= 3.5) {
								if (x[16] <= 0.5) {
									return 22.0f;
								}
								else {
									return 21.0f;
								}

							}
							else {
								return 21.0f;
							}

						}

					}
					else {
						if (x[13] <= 3.5) {
							return 21.0f;
						}
						else {
							if (x[16] <= 0.5) {
								if (x[14] <= 3.5) {
									return 21.0f;
								}
								else {
									if (x[14] <= 4.5) {
										return 22.0f;
									}
									else {
										return 21.0f;
									}

								}

							}
							else {
								return 21.0f;
							}

						}

					}

				}
				else {
					if (x[10] <= 1.5) {
						if (x[16] <= 0.5) {
							if (x[14] <= 2.5) {
								if (x[14] <= 1.5) {
									return 21.0f;
								}
								else {
									return 24.0f;
								}

							}
							else {
								if (x[13] <= 4.5) {
									if (x[14] <= 3.5) {
										if (x[13] <= 1.0) {
											return 23.0f;
										}
										else {
											if (x[13] <= 3.0) {
												return 28.0f;
											}
											else {
												return 23.0f;
											}

										}

									}
									else {
										if (x[13] <= 3.5) {
											if (x[14] <= 4.5) {
												return 23.0f;
											}
											else {
												return 21.0f;
											}

										}
										else {
											return 21.0f;
										}

									}

								}
								else {
									return 21.0f;
								}

							}

						}
						else {
							if (x[14] <= 2.5) {
								return 23.0f;
							}
							else {
								if (x[13] <= 4.5) {
									return 22.0f;
								}
								else {
									if (x[14] <= 3.5) {
										return 23.0f;
									}
									else {
										return 22.0f;
									}

								}

							}

						}

					}
					else {
						if (x[16] <= 0.5) {
							if (x[13] <= 3.5) {
								if (x[13] <= 1.5) {
									if (x[13] <= 0.5) {
										if (x[14] <= 4.0) {
											return 28.0f;
										}
										else {
											return 22.0f;
										}

									}
									else {
										return 23.0f;
									}

								}
								else {
									if (x[14] <= 2.5) {
										return 25.0f;
									}
									else {
										return 21.0f;
									}

								}

							}
							else {
								if (x[14] <= 4.5) {
									if (x[13] <= 4.5) {
										return 22.0f;
									}
									else {
										if (x[14] <= 2.0) {
											return 22.0f;
										}
										else {
											if (x[14] <= 3.5) {
												return 21.0f;
											}
											else {
												return 22.0f;
											}

										}

									}

								}
								else {
									if (x[13] <= 4.5) {
										return 22.0f;
									}
									else {
										return 23.0f;
									}

								}

							}

						}
						else {
							if (x[14] <= 2.5) {
								if (x[13] <= 3.0) {
									if (x[13] <= -0.5) {
										return 21.0f;
									}
									else {
										if (x[13] <= 0.5) {
											return 25.0f;
										}
										else {
											if (x[13] <= 1.5) {
												return 23.0f;
											}
											else {
												return 25.0f;
											}

										}

									}

								}
								else {
									if (x[13] <= 4.5) {
										return 28.0f;
									}
									else {
										return 21.0f;
									}

								}

							}
							else {
								if (x[13] <= 3.5) {
									if (x[14] <= 4.5) {
										if (x[13] <= 0.5) {
											return 21.0f;
										}
										else {
											if (x[14] <= 3.5) {
												if (x[13] <= 1.5) {
													return 21.0f;
												}
												else {
													return 16.0f;
												}

											}
											else {
												if (x[13] <= 1.5) {
													return 16.0f;
												}
												else {
													return 21.0f;
												}

											}

										}

									}
									else {
										return 21.0f;
									}

								}
								else {
									return 21.0f;
								}

							}

						}

					}

				}

			}
			else {
				if (x[11] <= 3.0) {
					if (x[14] <= 3.5) {
						if (x[13] <= 1.5) {
							if (x[13] <= -0.5) {
								if (x[10] <= 1.0) {
									return 31.0f;
								}
								else {
									if (x[16] <= 0.5) {
										return 2.0f;
									}
									else {
										return 21.0f;
									}

								}

							}
							else {
								return 31.0f;
							}

						}
						else {
							if (x[16] <= 0.5) {
								if (x[13] <= 4.5) {
									return 21.0f;
								}
								else {
									if (x[14] <= 2.5) {
										return 21.0f;
									}
									else {
										return 31.0f;
									}

								}

							}
							else {
								if (x[10] <= 1.5) {
									if (x[14] <= 2.5) {
										return 23.0f;
									}
									else {
										if (x[10] <= 0.5) {
											return 22.0f;
										}
										else {
											return 30.0f;
										}

									}

								}
								else {
									if (x[13] <= 4.5) {
										return 1.0f;
									}
									else {
										return 22.0f;
									}

								}

							}

						}

					}
					else {
						if (x[14] <= 4.5) {
							if (x[13] <= 4.5) {
								if (x[13] <= 0.5) {
									if (x[10] <= 1.0) {
										return 22.0f;
									}
									else {
										return 31.0f;
									}

								}
								else {
									if (x[13] <= 1.5) {
										if (x[10] <= 0.5) {
											return 22.0f;
										}
										else {
											if (x[10] <= 1.5) {
												if (x[16] <= 0.5) {
													return 22.0f;
												}
												else {
													return 27.0f;
												}

											}
											else {
												return 22.0f;
											}

										}

									}
									else {
										return 22.0f;
									}

								}

							}
							else {
								return 28.0f;
							}

						}
						else {
							if (x[10] <= 0.5) {
								if (x[13] <= 2.5) {
									if (x[13] <= 1.5) {
										return 21.0f;
									}
									else {
										return 22.0f;
									}

								}
								else {
									return 21.0f;
								}

							}
							else {
								if (x[16] <= 0.5) {
									if (x[13] <= 4.5) {
										if (x[13] <= 0.5) {
											return 21.0f;
										}
										else {
											if (x[13] <= 3.5) {
												return 22.0f;
											}
											else {
												return 21.0f;
											}

										}

									}
									else {
										return 23.0f;
									}

								}
								else {
									if (x[10] <= 1.5) {
										return 23.0f;
									}
									else {
										if (x[11] <= 1.5) {
											return 22.0f;
										}
										else {
											return 23.0f;
										}

									}

								}

							}

						}

					}

				}
				else {
					if (x[10] <= 1.5) {
						if (x[13] <= 0.5) {
							return 10.0f;
						}
						else {
							return 4.0f;
						}

					}
					else {
						if (x[11] <= 4.5) {
							if (x[14] <= 1.5) {
								return 3.0f;
							}
							else {
								return 4.0f;
							}

						}
						else {
							if (x[13] <= 0.5) {
								return 6.0f;
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
			if (x[11] <= 0.5) {
				if (x[16] <= 0.5) {
					if (x[13] <= 3.5) {
						if (x[14] <= 1.5) {
							if (x[13] <= 0.5) {
								return 25.0f;
							}
							else {
								if (x[13] <= 1.5) {
									return 16.0f;
								}
								else {
									return 27.0f;
								}

							}

						}
						else {
							if (x[13] <= 1.5) {
								if (x[14] <= 3.5) {
									return 21.0f;
								}
								else {
									if (x[13] <= 0.5) {
										return 21.0f;
									}
									else {
										return 13.0f;
									}

								}

							}
							else {
								if (x[14] <= 3.5) {
									return 16.0f;
								}
								else {
									if (x[13] <= 2.5) {
										if (x[14] <= 4.5) {
											return 25.0f;
										}
										else {
											return 21.0f;
										}

									}
									else {
										return 21.0f;
									}

								}

							}

						}

					}
					else {
						if (x[14] <= 3.0) {
							return 29.0f;
						}
						else {
							return 23.0f;
						}

					}

				}
				else {
					if (x[14] <= 1.5) {
						if (x[13] <= 0.5) {
							return 6.0f;
						}
						else {
							if (x[13] <= 1.5) {
								return 13.0f;
							}
							else {
								return 6.0f;
							}

						}

					}
					else {
						if (x[14] <= 3.5) {
							if (x[13] <= 3.5) {
								if (x[13] <= 0.5) {
									if (x[14] <= 2.5) {
										return 11.0f;
									}
									else {
										return 10.0f;
									}

								}
								else {
									if (x[14] <= 2.5) {
										return 16.0f;
									}
									else {
										return 11.0f;
									}

								}

							}
							else {
								if (x[14] <= 2.5) {
									return 10.0f;
								}
								else {
									return 12.0f;
								}

							}

						}
						else {
							if (x[14] <= 4.5) {
								if (x[13] <= 4.5) {
									return 11.0f;
								}
								else {
									return 10.0f;
								}

							}
							else {
								if (x[13] <= 3.5) {
									return 10.0f;
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
				if (x[11] <= 2.5) {
					if (x[13] <= 3.5) {
						if (x[14] <= 3.5) {
							if (x[16] <= 0.5) {
								if (x[13] <= -0.5) {
									return 31.0f;
								}
								else {
									return 22.0f;
								}

							}
							else {
								if (x[11] <= 1.5) {
									if (x[13] <= -0.5) {
										return 22.0f;
									}
									else {
										if (x[14] <= 1.5) {
											if (x[13] <= 0.5) {
												return 11.0f;
											}
											else {
												return 20.0f;
											}

										}
										else {
											if (x[14] <= 2.5) {
												return 21.0f;
											}
											else {
												return 20.0f;
											}

										}

									}

								}
								else {
									return 22.0f;
								}

							}

						}
						else {
							if (x[13] <= 0.5) {
								if (x[14] <= 4.5) {
									if (x[11] <= 1.5) {
										return 10.0f;
									}
									else {
										return 22.0f;
									}

								}
								else {
									if (x[16] <= 0.5) {
										return 21.0f;
									}
									else {
										return 11.0f;
									}

								}

							}
							else {
								if (x[14] <= 4.5) {
									if (x[13] <= 1.5) {
										return 21.0f;
									}
									else {
										if (x[13] <= 2.5) {
											return 15.0f;
										}
										else {
											return 21.0f;
										}

									}

								}
								else {
									if (x[11] <= 1.5) {
										if (x[16] <= 0.5) {
											return 22.0f;
										}
										else {
											return 7.0f;
										}

									}
									else {
										return 10.0f;
									}

								}

							}

						}

					}
					else {
						if (x[13] <= 4.5) {
							if (x[11] <= 1.5) {
								if (x[16] <= 0.5) {
									return 24.0f;
								}
								else {
									return 22.0f;
								}

							}
							else {
								return 24.0f;
							}

						}
						else {
							if (x[14] <= 4.5) {
								return 17.0f;
							}
							else {
								return 22.0f;
							}

						}

					}

				}
				else {
					if (x[13] <= 0.5) {
						if (x[16] <= 0.5) {
							if (x[14] <= 1.5) {
								return 3.0f;
							}
							else {
								return 1.0f;
							}

						}
						else {
							return 1.0f;
						}

					}
					else {
						if (x[14] <= 1.5) {
							if (x[11] <= 3.5) {
								return 13.0f;
							}
							else {
								return 1.0f;
							}

						}
						else {
							return 0.0f;
						}

					}

				}

			}

		}

	}
	else {
		if (x[11] <= 0.5) {
			if (x[16] <= 0.5) {
				if (x[10] <= 4.5) {
					if (x[13] <= 3.5) {
						if (x[14] <= 2.5) {
							if (x[13] <= 1.5) {
								if (x[13] <= 0.5) {
									return 6.0f;
								}
								else {
									if (x[14] <= 1.5) {
										return 7.0f;
									}
									else {
										return 6.0f;
									}

								}

							}
							else {
								if (x[14] <= 1.5) {
									return 6.0f;
								}
								else {
									return 12.0f;
								}

							}

						}
						else {
							if (x[14] <= 3.5) {
								if (x[13] <= 0.5) {
									return 7.0f;
								}
								else {
									if (x[13] <= 2.5) {
										return 11.0f;
									}
									else {
										return 7.0f;
									}

								}

							}
							else {
								if (x[13] <= 0.5) {
									if (x[14] <= 4.5) {
										return 10.0f;
									}
									else {
										return 7.0f;
									}

								}
								else {
									if (x[14] <= 4.5) {
										if (x[13] <= 1.5) {
											return 6.0f;
										}
										else {
											return 7.0f;
										}

									}
									else {
										if (x[13] <= 1.5) {
											return 7.0f;
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
						if (x[14] <= 1.5) {
							return 29.0f;
						}
						else {
							if (x[13] <= 4.5) {
								if (x[14] <= 3.5) {
									if (x[14] <= 2.5) {
										return 6.0f;
									}
									else {
										return 10.0f;
									}

								}
								else {
									if (x[14] <= 4.5) {
										return 11.0f;
									}
									else {
										return 9.0f;
									}

								}

							}
							else {
								if (x[14] <= 3.5) {
									return 9.0f;
								}
								else {
									return 6.0f;
								}

							}

						}

					}

				}
				else {
					if (x[14] <= 2.5) {
						if (x[13] <= 3.5) {
							if (x[13] <= 2.5) {
								return 6.0f;
							}
							else {
								return 7.0f;
							}

						}
						else {
							if (x[13] <= 4.5) {
								return 12.0f;
							}
							else {
								if (x[14] <= 1.5) {
									return 6.0f;
								}
								else {
									return 11.0f;
								}

							}

						}

					}
					else {
						if (x[13] <= 4.5) {
							return 6.0f;
						}
						else {
							if (x[14] <= 4.5) {
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
				if (x[14] <= 2.5) {
					if (x[13] <= 2.5) {
						if (x[13] <= -0.5) {
							if (x[10] <= 4.5) {
								return 6.0f;
							}
							else {
								return 4.0f;
							}

						}
						else {
							if (x[13] <= 0.5) {
								if (x[10] <= 4.5) {
									return 6.0f;
								}
								else {
									if (x[14] <= 1.5) {
										return 7.0f;
									}
									else {
										return 6.0f;
									}

								}

							}
							else {
								if (x[10] <= 4.5) {
									if (x[13] <= 1.5) {
										return 6.0f;
									}
									else {
										if (x[14] <= 1.5) {
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

						}

					}
					else {
						if (x[10] <= 4.5) {
							return 13.0f;
						}
						else {
							if (x[13] <= 4.5) {
								if (x[14] <= 1.5) {
									return 28.0f;
								}
								else {
									return 20.0f;
								}

							}
							else {
								if (x[14] <= 1.5) {
									return 17.0f;
								}
								else {
									return 1.0f;
								}

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
			if (x[13] <= 1.5) {
				if (x[11] <= 1.5) {
					if (x[14] <= 2.5) {
						if (x[13] <= -0.5) {
							return 14.0f;
						}
						else {
							if (x[16] <= 0.5) {
								if (x[13] <= 0.5) {
									if (x[10] <= 4.5) {
										if (x[14] <= 1.5) {
											return 7.0f;
										}
										else {
											return 12.0f;
										}

									}
									else {
										return 7.0f;
									}

								}
								else {
									if (x[10] <= 4.5) {
										if (x[14] <= 1.5) {
											return 6.0f;
										}
										else {
											return 10.0f;
										}

									}
									else {
										return 6.0f;
									}

								}

							}
							else {
								if (x[10] <= 4.5) {
									return 6.0f;
								}
								else {
									if (x[13] <= 0.5) {
										return 6.0f;
									}
									else {
										if (x[14] <= 1.5) {
											return 5.0f;
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
						if (x[14] <= 4.5) {
							if (x[10] <= 4.5) {
								return 6.0f;
							}
							else {
								if (x[13] <= 0.5) {
									return 6.0f;
								}
								else {
									if (x[14] <= 3.5) {
										return 6.0f;
									}
									else {
										if (x[16] <= 0.5) {
											return 20.0f;
										}
										else {
											return 6.0f;
										}

									}

								}

							}

						}
						else {
							if (x[10] <= 4.5) {
								if (x[13] <= 0.5) {
									if (x[16] <= 0.5) {
										return 6.0f;
									}
									else {
										return 10.0f;
									}

								}
								else {
									return 6.0f;
								}

							}
							else {
								if (x[16] <= 0.5) {
									return 15.0f;
								}
								else {
									return 6.0f;
								}

							}

						}

					}

				}
				else {
					if (x[14] <= 2.5) {
						if (x[10] <= 4.5) {
							if (x[11] <= 2.5) {
								if (x[14] <= 1.5) {
									return 4.0f;
								}
								else {
									if (x[13] <= 0.5) {
										return 1.0f;
									}
									else {
										return 18.0f;
									}

								}

							}
							else {
								return 1.0f;
							}

						}
						else {
							if (x[13] <= 0.5) {
								return 6.0f;
							}
							else {
								if (x[14] <= 1.5) {
									return 5.0f;
								}
								else {
									return 20.0f;
								}

							}

						}

					}
					else {
						if (x[10] <= 4.5) {
							if (x[16] <= 0.5) {
								if (x[14] <= 4.5) {
									return 22.0f;
								}
								else {
									if (x[13] <= 0.5) {
										return 7.0f;
									}
									else {
										return 6.0f;
									}

								}

							}
							else {
								if (x[11] <= 2.5) {
									return 6.0f;
								}
								else {
									return 14.0f;
								}

							}

						}
						else {
							if (x[11] <= 2.5) {
								if (x[14] <= 3.5) {
									return 20.0f;
								}
								else {
									return 17.0f;
								}

							}
							else {
								return 14.0f;
							}

						}

					}

				}

			}
			else {
				if (x[11] <= 1.5) {
					if (x[16] <= 0.5) {
						if (x[10] <= 4.5) {
							if (x[14] <= 4.5) {
								if (x[13] <= 3.5) {
									if (x[14] <= 3.0) {
										return 1.0f;
									}
									else {
										return 10.0f;
									}

								}
								else {
									return 13.0f;
								}

							}
							else {
								if (x[13] <= 4.0) {
									return 6.0f;
								}
								else {
									return 22.0f;
								}

							}

						}
						else {
							if (x[14] <= 2.5) {
								if (x[14] <= 1.5) {
									return 6.0f;
								}
								else {
									return 21.0f;
								}

							}
							else {
								if (x[14] <= 4.5) {
									if (x[13] <= 2.5) {
										if (x[14] <= 3.5) {
											return 17.0f;
										}
										else {
											return 15.0f;
										}

									}
									else {
										if (x[13] <= 4.5) {
											if (x[13] <= 3.5) {
												if (x[14] <= 3.5) {
													return 13.0f;
												}
												else {
													return 18.0f;
												}

											}
											else {
												return 13.0f;
											}

										}
										else {
											return 15.0f;
										}

									}

								}
								else {
									if (x[13] <= 3.5) {
										if (x[13] <= 2.5) {
											return 18.0f;
										}
										else {
											return 27.0f;
										}

									}
									else {
										if (x[13] <= 4.5) {
											return 17.0f;
										}
										else {
											return 8.0f;
										}

									}

								}

							}

						}

					}
					else {
						if (x[14] <= 4.5) {
							if (x[13] <= 4.5) {
								if (x[13] <= 2.5) {
									if (x[10] <= 4.5) {
										if (x[14] <= 2.5) {
											return 20.0f;
										}
										else {
											return 12.0f;
										}

									}
									else {
										return 6.0f;
									}

								}
								else {
									if (x[14] <= 3.5) {
										if (x[14] <= 2.5) {
											if (x[10] <= 4.5) {
												return 6.0f;
											}
											else {
												return 12.0f;
											}

										}
										else {
											if (x[10] <= 4.5) {
												return 13.0f;
											}
											else {
												if (x[13] <= 3.5) {
													return 1.0f;
												}
												else {
													return 13.0f;
												}

											}

										}

									}
									else {
										if (x[10] <= 4.5) {
											return 12.0f;
										}
										else {
											return 6.0f;
										}

									}

								}

							}
							else {
								if (x[10] <= 4.5) {
									return 6.0f;
								}
								else {
									return 10.0f;
								}

							}

						}
						else {
							if (x[10] <= 4.5) {
								if (x[13] <= 3.5) {
									return 6.0f;
								}
								else {
									if (x[13] <= 4.5) {
										return 10.0f;
									}
									else {
										return 6.0f;
									}

								}

							}
							else {
								if (x[13] <= 3.5) {
									if (x[13] <= 2.5) {
										return 15.0f;
									}
									else {
										return 6.0f;
									}

								}
								else {
									if (x[13] <= 4.5) {
										return 18.0f;
									}
									else {
										return 7.0f;
									}

								}

							}

						}

					}

				}
				else {
					if (x[10] <= 4.5) {
						if (x[14] <= 4.5) {
							return 19.0f;
						}
						else {
							if (x[13] <= 4.0) {
								if (x[16] <= 0.5) {
									return 24.0f;
								}
								else {
									return 6.0f;
								}

							}
							else {
								return 27.0f;
							}

						}

					}
					else {
						if (x[14] <= 3.5) {
							if (x[13] <= 2.5) {
								if (x[16] <= 0.5) {
									return 15.0f;
								}
								else {
									return 16.0f;
								}

							}
							else {
								return 13.0f;
							}

						}
						else {
							if (x[14] <= 4.5) {
								if (x[13] <= 3.0) {
									return 20.0f;
								}
								else {
									if (x[13] <= 4.5) {
										return 21.0f;
									}
									else {
										return 20.0f;
									}

								}

							}
							else {
								if (x[13] <= 4.5) {
									return 21.0f;
								}
								else {
									return 11.0f;
								}

							}

						}

					}

				}

			}

		}

	}

}