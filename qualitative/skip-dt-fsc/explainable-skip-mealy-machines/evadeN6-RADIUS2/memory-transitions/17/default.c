#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {17.f,0.f,5.f,0.f,0.f,-1.f,-1.f,1.f,1.f,0.f,5.f,1.f,0.f,-1.f,-1.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[13] <= -0.5) {
		if (x[11] <= 2.5) {
			if (x[10] <= 3.5) {
				if (x[16] <= 0.5) {
					return 17.0f;
				}
				else {
					return 3.0f;
				}

			}
			else {
				if (x[10] <= 4.5) {
					if (x[11] <= 0.5) {
						return 16.0f;
					}
					else {
						return 2.0f;
					}

				}
				else {
					if (x[11] <= 0.5) {
						return 17.0f;
					}
					else {
						if (x[11] <= 1.5) {
							return 16.0f;
						}
						else {
							return 17.0f;
						}

					}

				}

			}

		}
		else {
			if (x[10] <= 4.5) {
				return 1.0f;
			}
			else {
				return 0.0f;
			}

		}

	}
	else {
		if (x[13] <= 1.5) {
			if (x[11] <= 1.5) {
				return 16.0f;
			}
			else {
				if (x[10] <= 4.5) {
					if (x[11] <= 3.5) {
						return 16.0f;
					}
					else {
						if (x[10] <= 2.5) {
							return 16.0f;
						}
						else {
							if (x[16] <= 0.5) {
								return 16.0f;
							}
							else {
								return 0.0f;
							}

						}

					}

				}
				else {
					if (x[16] <= 0.5) {
						return 16.0f;
					}
					else {
						return 17.0f;
					}

				}

			}

		}
		else {
			if (x[11] <= 2.5) {
				if (x[14] <= 2.5) {
					if (x[16] <= 0.5) {
						if (x[10] <= 4.5) {
							if (x[13] <= 2.5) {
								return 16.0f;
							}
							else {
								if (x[13] <= 3.5) {
									return 17.0f;
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
					else {
						if (x[13] <= 4.5) {
							if (x[10] <= 4.5) {
								if (x[11] <= 0.5) {
									if (x[14] <= 1.5) {
										if (x[13] <= 2.5) {
											return 16.0f;
										}
										else {
											if (x[13] <= 3.5) {
												return 1.0f;
											}
											else {
												return 16.0f;
											}

										}

									}
									else {
										if (x[10] <= 3.5) {
											if (x[13] <= 3.0) {
												return 1.0f;
											}
											else {
												return 16.0f;
											}

										}
										else {
											return 1.0f;
										}

									}

								}
								else {
									if (x[13] <= 3.5) {
										return 17.0f;
									}
									else {
										return 16.0f;
									}

								}

							}
							else {
								if (x[13] <= 2.5) {
									return 16.0f;
								}
								else {
									if (x[2] <= 3.5) {
										if (x[3] <= 0.5) {
											if (x[13] <= 3.5) {
												if (x[14] <= 1.5) {
													return 1.0f;
												}
												else {
													return 16.0f;
												}

											}
											else {
												if (x[14] <= 1.5) {
													return 16.0f;
												}
												else {
													return 1.0f;
												}

											}

										}
										else {
											if (x[13] <= 3.5) {
												if (x[14] <= 1.5) {
													return 1.0f;
												}
												else {
													return 16.0f;
												}

											}
											else {
												if (x[14] <= 1.5) {
													return 16.0f;
												}
												else {
													return 1.0f;
												}

											}

										}

									}
									else {
										if (x[2] <= 4.5) {
											if (x[3] <= 0.5) {
												if (x[13] <= 3.5) {
													if (x[14] <= 1.5) {
														return 1.0f;
													}
													else {
														return 16.0f;
													}

												}
												else {
													if (x[14] <= 1.5) {
														return 16.0f;
													}
													else {
														return 1.0f;
													}

												}

											}
											else {
												if (x[13] <= 3.5) {
													if (x[14] <= 1.5) {
														return 1.0f;
													}
													else {
														return 16.0f;
													}

												}
												else {
													if (x[14] <= 1.5) {
														return 16.0f;
													}
													else {
														return 1.0f;
													}

												}

											}

										}
										else {
											if (x[3] <= 0.5) {
												if (x[5] <= 2.0) {
													if (x[13] <= 3.5) {
														if (x[14] <= 1.5) {
															return 1.0f;
														}
														else {
															return 16.0f;
														}

													}
													else {
														if (x[14] <= 1.5) {
															return 16.0f;
														}
														else {
															return 1.0f;
														}

													}

												}
												else {
													if (x[13] <= 3.5) {
														if (x[14] <= 1.5) {
															return 1.0f;
														}
														else {
															return 16.0f;
														}

													}
													else {
														if (x[14] <= 1.5) {
															return 16.0f;
														}
														else {
															return 1.0f;
														}

													}

												}

											}
											else {
												if (x[3] <= 1.5) {
													if (x[5] <= 3.0) {
														if (x[13] <= 3.5) {
															if (x[14] <= 1.5) {
																return 1.0f;
															}
															else {
																return 16.0f;
															}

														}
														else {
															if (x[14] <= 1.5) {
																return 16.0f;
															}
															else {
																return 1.0f;
															}

														}

													}
													else {
														if (x[13] <= 3.5) {
															if (x[14] <= 1.5) {
																return 1.0f;
															}
															else {
																return 16.0f;
															}

														}
														else {
															if (x[14] <= 1.5) {
																return 16.0f;
															}
															else {
																return 1.0f;
															}

														}

													}

												}
												else {
													if (x[5] <= 0.0) {
														if (x[13] <= 3.5) {
															if (x[14] <= 1.5) {
																return 1.0f;
															}
															else {
																return 16.0f;
															}

														}
														else {
															if (x[14] <= 1.5) {
																return 16.0f;
															}
															else {
																return 1.0f;
															}

														}

													}
													else {
														if (x[13] <= 3.5) {
															if (x[14] <= 1.5) {
																return 1.0f;
															}
															else {
																return 16.0f;
															}

														}
														else {
															if (x[14] <= 1.5) {
																return 16.0f;
															}
															else {
																return 1.0f;
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
						else {
							if (x[10] <= 4.5) {
								return 16.0f;
							}
							else {
								return 17.0f;
							}

						}

					}

				}
				else {
					if (x[11] <= 0.5) {
						return 16.0f;
					}
					else {
						if (x[14] <= 3.5) {
							if (x[16] <= 0.5) {
								if (x[11] <= 1.5) {
									if (x[13] <= 2.5) {
										return 17.0f;
									}
									else {
										return 16.0f;
									}

								}
								else {
									return 16.0f;
								}

							}
							else {
								if (x[11] <= 1.5) {
									if (x[13] <= 3.5) {
										if (x[2] <= 3.5) {
											if (x[3] <= 0.5) {
												if (x[10] <= 4.5) {
													if (x[13] <= 2.5) {
														return 1.0f;
													}
													else {
														return 16.0f;
													}

												}
												else {
													if (x[13] <= 2.5) {
														return 16.0f;
													}
													else {
														return 1.0f;
													}

												}

											}
											else {
												if (x[10] <= 4.5) {
													if (x[13] <= 2.5) {
														return 1.0f;
													}
													else {
														return 16.0f;
													}

												}
												else {
													if (x[13] <= 2.5) {
														return 16.0f;
													}
													else {
														return 1.0f;
													}

												}

											}

										}
										else {
											if (x[2] <= 4.5) {
												if (x[3] <= 0.5) {
													if (x[10] <= 4.5) {
														if (x[13] <= 2.5) {
															return 1.0f;
														}
														else {
															return 16.0f;
														}

													}
													else {
														if (x[13] <= 2.5) {
															return 16.0f;
														}
														else {
															return 1.0f;
														}

													}

												}
												else {
													if (x[10] <= 4.5) {
														if (x[13] <= 2.5) {
															return 1.0f;
														}
														else {
															return 16.0f;
														}

													}
													else {
														if (x[13] <= 2.5) {
															return 16.0f;
														}
														else {
															return 1.0f;
														}

													}

												}

											}
											else {
												if (x[3] <= 0.5) {
													if (x[5] <= 2.0) {
														if (x[10] <= 4.5) {
															if (x[13] <= 2.5) {
																return 1.0f;
															}
															else {
																return 16.0f;
															}

														}
														else {
															if (x[13] <= 2.5) {
																return 16.0f;
															}
															else {
																return 1.0f;
															}

														}

													}
													else {
														if (x[10] <= 4.5) {
															if (x[13] <= 2.5) {
																return 1.0f;
															}
															else {
																return 16.0f;
															}

														}
														else {
															if (x[13] <= 2.5) {
																return 16.0f;
															}
															else {
																return 1.0f;
															}

														}

													}

												}
												else {
													if (x[3] <= 1.5) {
														if (x[5] <= 3.0) {
															if (x[10] <= 4.5) {
																if (x[13] <= 2.5) {
																	return 1.0f;
																}
																else {
																	return 16.0f;
																}

															}
															else {
																if (x[13] <= 2.5) {
																	return 16.0f;
																}
																else {
																	return 1.0f;
																}

															}

														}
														else {
															if (x[10] <= 4.5) {
																if (x[13] <= 2.5) {
																	return 1.0f;
																}
																else {
																	return 16.0f;
																}

															}
															else {
																if (x[13] <= 2.5) {
																	return 16.0f;
																}
																else {
																	return 1.0f;
																}

															}

														}

													}
													else {
														if (x[5] <= 0.0) {
															if (x[10] <= 4.5) {
																if (x[13] <= 2.5) {
																	return 1.0f;
																}
																else {
																	return 16.0f;
																}

															}
															else {
																if (x[13] <= 2.5) {
																	return 16.0f;
																}
																else {
																	return 1.0f;
																}

															}

														}
														else {
															if (x[10] <= 4.5) {
																if (x[13] <= 2.5) {
																	return 1.0f;
																}
																else {
																	return 16.0f;
																}

															}
															else {
																if (x[13] <= 2.5) {
																	return 16.0f;
																}
																else {
																	return 1.0f;
																}

															}

														}

													}

												}

											}

										}

									}
									else {
										return 16.0f;
									}

								}
								else {
									return 16.0f;
								}

							}

						}
						else {
							if (x[13] <= 3.5) {
								return 16.0f;
							}
							else {
								if (x[10] <= 3.5) {
									return 17.0f;
								}
								else {
									if (x[13] <= 4.5) {
										if (x[14] <= 4.5) {
											return 16.0f;
										}
										else {
											if (x[10] <= 4.5) {
												return 16.0f;
											}
											else {
												return 17.0f;
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

			}
			else {
				if (x[10] <= 4.5) {
					return 0.0f;
				}
				else {
					return 1.0f;
				}

			}

		}

	}

}