#include <stdio.h>

float classify(const float x[]);

int main() {
    float x[] = {24.f,0.f,5.f,1.f,0.f,-1.f,-1.f,1.f,1.f,0.f,5.f,1.f,0.f,-1.f,-1.f,1.f,1.f};
    float result = classify(x);
    return 0;
}

float classify(const float x[]) {
	if (x[11] <= 2.5) {
		if (x[11] <= 1.5) {
			if (x[13] <= 1.5) {
				if (x[10] <= 5.5) {
					return 24.0f;
				}
				else {
					if (x[14] <= 2.5) {
						if (x[13] <= -0.5) {
							return 24.0f;
						}
						else {
							if (x[2] <= 2.5) {
								if (x[3] <= 3.5) {
									if (x[5] <= -0.5) {
										if (x[13] <= 0.5) {
											if (x[14] <= 1.5) {
												return 24.0f;
											}
											else {
												return 23.0f;
											}

										}
										else {
											if (x[14] <= 1.5) {
												return 23.0f;
											}
											else {
												return 24.0f;
											}

										}

									}
									else {
										if (x[13] <= 0.5) {
											if (x[14] <= 1.5) {
												return 24.0f;
											}
											else {
												return 23.0f;
											}

										}
										else {
											if (x[14] <= 1.5) {
												return 23.0f;
											}
											else {
												return 24.0f;
											}

										}

									}

								}
								else {
									if (x[3] <= 5.5) {
										if (x[13] <= 0.5) {
											if (x[14] <= 1.5) {
												return 24.0f;
											}
											else {
												return 23.0f;
											}

										}
										else {
											if (x[14] <= 1.5) {
												return 23.0f;
											}
											else {
												return 24.0f;
											}

										}

									}
									else {
										if (x[13] <= 0.5) {
											if (x[14] <= 1.5) {
												return 24.0f;
											}
											else {
												return 23.0f;
											}

										}
										else {
											if (x[14] <= 1.5) {
												return 23.0f;
											}
											else {
												return 24.0f;
											}

										}

									}

								}

							}
							else {
								if (x[2] <= 3.5) {
									if (x[3] <= 1.5) {
										if (x[5] <= 2.5) {
											if (x[13] <= 0.5) {
												if (x[14] <= 1.5) {
													return 24.0f;
												}
												else {
													return 23.0f;
												}

											}
											else {
												if (x[14] <= 1.5) {
													return 23.0f;
												}
												else {
													return 24.0f;
												}

											}

										}
										else {
											if (x[13] <= 0.5) {
												if (x[14] <= 1.5) {
													return 24.0f;
												}
												else {
													return 23.0f;
												}

											}
											else {
												if (x[14] <= 1.5) {
													return 23.0f;
												}
												else {
													return 24.0f;
												}

											}

										}

									}
									else {
										if (x[3] <= 2.5) {
											if (x[5] <= -0.5) {
												if (x[13] <= 0.5) {
													if (x[14] <= 1.5) {
														return 24.0f;
													}
													else {
														return 23.0f;
													}

												}
												else {
													if (x[14] <= 1.5) {
														return 23.0f;
													}
													else {
														return 24.0f;
													}

												}

											}
											else {
												if (x[5] <= 0.5) {
													if (x[13] <= 0.5) {
														if (x[14] <= 1.5) {
															return 24.0f;
														}
														else {
															return 23.0f;
														}

													}
													else {
														if (x[14] <= 1.5) {
															return 23.0f;
														}
														else {
															return 24.0f;
														}

													}

												}
												else {
													if (x[13] <= 0.5) {
														if (x[14] <= 1.5) {
															return 24.0f;
														}
														else {
															return 23.0f;
														}

													}
													else {
														if (x[14] <= 1.5) {
															return 23.0f;
														}
														else {
															return 24.0f;
														}

													}

												}

											}

										}
										else {
											if (x[5] <= -0.5) {
												if (x[13] <= 0.5) {
													if (x[14] <= 1.5) {
														return 24.0f;
													}
													else {
														return 23.0f;
													}

												}
												else {
													if (x[14] <= 1.5) {
														return 23.0f;
													}
													else {
														return 24.0f;
													}

												}

											}
											else {
												if (x[5] <= 0.5) {
													if (x[13] <= 0.5) {
														if (x[14] <= 1.5) {
															return 24.0f;
														}
														else {
															return 23.0f;
														}

													}
													else {
														if (x[14] <= 1.5) {
															return 23.0f;
														}
														else {
															return 24.0f;
														}

													}

												}
												else {
													if (x[13] <= 0.5) {
														if (x[14] <= 1.5) {
															return 24.0f;
														}
														else {
															return 23.0f;
														}

													}
													else {
														if (x[14] <= 1.5) {
															return 23.0f;
														}
														else {
															return 24.0f;
														}

													}

												}

											}

										}

									}

								}
								else {
									if (x[2] <= 4.5) {
										if (x[3] <= 0.5) {
											if (x[5] <= -0.5) {
												if (x[8] <= 0.5) {
													if (x[13] <= 0.5) {
														if (x[14] <= 1.5) {
															return 24.0f;
														}
														else {
															return 23.0f;
														}

													}
													else {
														if (x[14] <= 1.5) {
															return 23.0f;
														}
														else {
															return 24.0f;
														}

													}

												}
												else {
													if (x[13] <= 0.5) {
														if (x[14] <= 1.5) {
															return 24.0f;
														}
														else {
															return 23.0f;
														}

													}
													else {
														if (x[14] <= 1.5) {
															return 23.0f;
														}
														else {
															return 24.0f;
														}

													}

												}

											}
											else {
												if (x[5] <= 0.5) {
													if (x[6] <= 4.0) {
														if (x[13] <= 0.5) {
															if (x[14] <= 1.5) {
																return 24.0f;
															}
															else {
																return 23.0f;
															}

														}
														else {
															if (x[14] <= 1.5) {
																return 23.0f;
															}
															else {
																return 24.0f;
															}

														}

													}
													else {
														if (x[13] <= 0.5) {
															if (x[14] <= 1.5) {
																return 24.0f;
															}
															else {
																return 23.0f;
															}

														}
														else {
															if (x[14] <= 1.5) {
																return 23.0f;
															}
															else {
																return 24.0f;
															}

														}

													}

												}
												else {
													if (x[5] <= 1.5) {
														if (x[6] <= 3.5) {
															if (x[13] <= 0.5) {
																if (x[14] <= 1.5) {
																	return 24.0f;
																}
																else {
																	return 23.0f;
																}

															}
															else {
																if (x[14] <= 1.5) {
																	return 23.0f;
																}
																else {
																	return 24.0f;
																}

															}

														}
														else {
															if (x[13] <= 0.5) {
																if (x[14] <= 1.5) {
																	return 24.0f;
																}
																else {
																	return 23.0f;
																}

															}
															else {
																if (x[14] <= 1.5) {
																	return 23.0f;
																}
																else {
																	return 24.0f;
																}

															}

														}

													}
													else {
														if (x[5] <= 2.5) {
															if (x[6] <= 1.5) {
																if (x[8] <= 0.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}

															}
															else {
																if (x[8] <= 0.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[5] <= 3.5) {
																if (x[6] <= 1.5) {
																	if (x[8] <= 0.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[6] <= 3.0) {
																		if (x[8] <= 0.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[5] <= 4.5) {
																	if (x[6] <= 1.5) {
																		if (x[8] <= 0.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[6] <= 3.0) {
																			if (x[8] <= 0.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}

																		}
																		else {
																			if (x[6] <= 4.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[6] <= 5.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}

																		}

																	}

																}
																else {
																	if (x[5] <= 5.5) {
																		if (x[6] <= 1.5) {
																			if (x[8] <= 0.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}

																		}
																		else {
																			if (x[6] <= 3.0) {
																				if (x[8] <= 0.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}
																			else {
																				if (x[6] <= 4.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[6] <= 5.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}

																				}

																			}

																		}

																	}
																	else {
																		if (x[6] <= 1.5) {
																			if (x[8] <= 0.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}

																		}
																		else {
																			if (x[6] <= 3.0) {
																				if (x[8] <= 0.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}
																			else {
																				if (x[6] <= 5.0) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
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

												}

											}

										}
										else {
											if (x[3] <= 1.5) {
												if (x[5] <= -0.5) {
													if (x[8] <= 0.5) {
														if (x[13] <= 0.5) {
															if (x[14] <= 1.5) {
																return 24.0f;
															}
															else {
																return 23.0f;
															}

														}
														else {
															if (x[14] <= 1.5) {
																return 23.0f;
															}
															else {
																return 24.0f;
															}

														}

													}
													else {
														if (x[13] <= 0.5) {
															if (x[14] <= 1.5) {
																return 24.0f;
															}
															else {
																return 23.0f;
															}

														}
														else {
															if (x[14] <= 1.5) {
																return 23.0f;
															}
															else {
																return 24.0f;
															}

														}

													}

												}
												else {
													if (x[5] <= 0.5) {
														if (x[6] <= 1.5) {
															if (x[13] <= 0.5) {
																if (x[14] <= 1.5) {
																	return 24.0f;
																}
																else {
																	return 23.0f;
																}

															}
															else {
																if (x[14] <= 1.5) {
																	return 23.0f;
																}
																else {
																	return 24.0f;
																}

															}

														}
														else {
															if (x[6] <= 2.5) {
																if (x[8] <= 0.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}

															}
															else {
																if (x[6] <= 3.5) {
																	if (x[8] <= 0.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[6] <= 4.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[6] <= 5.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[8] <= 0.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
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
														if (x[5] <= 1.5) {
															if (x[6] <= 2.5) {
																if (x[8] <= 0.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}

															}
															else {
																if (x[6] <= 3.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[6] <= 4.5) {
																		if (x[8] <= 0.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[6] <= 5.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[8] <= 0.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
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
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[6] <= 2.5) {
																		if (x[8] <= 0.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[6] <= 4.0) {
																			if (x[8] <= 0.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}

																		}
																		else {
																			if (x[6] <= 5.5) {
																				if (x[8] <= 0.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}

																		}

																	}

																}

															}
															else {
																if (x[5] <= 3.5) {
																	if (x[6] <= 1.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[6] <= 2.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[6] <= 3.5) {
																				if (x[8] <= 0.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}
																			else {
																				if (x[6] <= 4.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[6] <= 5.5) {
																						if (x[8] <= 0.5) {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}
																						else {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}

																					}
																					else {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}

																				}

																			}

																		}

																	}

																}
																else {
																	if (x[5] <= 4.5) {
																		if (x[6] <= 2.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[6] <= 3.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[6] <= 4.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[6] <= 5.5) {
																						if (x[8] <= 0.5) {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}
																						else {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}

																					}
																					else {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}

																				}

																			}

																		}

																	}
																	else {
																		if (x[5] <= 5.5) {
																			if (x[6] <= 3.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[6] <= 4.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[6] <= 5.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[8] <= 0.5) {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}
																						else {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}

																					}

																				}

																			}

																		}
																		else {
																			if (x[6] <= 2.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[6] <= 3.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[6] <= 4.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[6] <= 5.5) {
																							if (x[8] <= 0.5) {
																								if (x[13] <= 0.5) {
																									if (x[14] <= 1.5) {
																										return 24.0f;
																									}
																									else {
																										return 23.0f;
																									}

																								}
																								else {
																									if (x[14] <= 1.5) {
																										return 23.0f;
																									}
																									else {
																										return 24.0f;
																									}

																								}

																							}
																							else {
																								if (x[13] <= 0.5) {
																									if (x[14] <= 1.5) {
																										return 24.0f;
																									}
																									else {
																										return 23.0f;
																									}

																								}
																								else {
																									if (x[14] <= 1.5) {
																										return 23.0f;
																									}
																									else {
																										return 24.0f;
																									}

																								}

																							}

																						}
																						else {
																							if (x[8] <= 0.5) {
																								if (x[13] <= 0.5) {
																									if (x[14] <= 1.5) {
																										return 24.0f;
																									}
																									else {
																										return 23.0f;
																									}

																								}
																								else {
																									if (x[14] <= 1.5) {
																										return 23.0f;
																									}
																									else {
																										return 24.0f;
																									}

																								}

																							}
																							else {
																								if (x[13] <= 0.5) {
																									if (x[14] <= 1.5) {
																										return 24.0f;
																									}
																									else {
																										return 23.0f;
																									}

																								}
																								else {
																									if (x[14] <= 1.5) {
																										return 23.0f;
																									}
																									else {
																										return 24.0f;
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

															}

														}

													}

												}

											}
											else {
												if (x[3] <= 2.5) {
													if (x[5] <= -0.5) {
														if (x[8] <= 0.5) {
															if (x[13] <= 0.5) {
																if (x[14] <= 1.5) {
																	return 24.0f;
																}
																else {
																	return 23.0f;
																}

															}
															else {
																if (x[14] <= 1.5) {
																	return 23.0f;
																}
																else {
																	return 24.0f;
																}

															}

														}
														else {
															if (x[13] <= 0.5) {
																if (x[14] <= 1.5) {
																	return 24.0f;
																}
																else {
																	return 23.0f;
																}

															}
															else {
																if (x[14] <= 1.5) {
																	return 23.0f;
																}
																else {
																	return 24.0f;
																}

															}

														}

													}
													else {
														if (x[5] <= 0.5) {
															if (x[6] <= 2.5) {
																if (x[13] <= 0.5) {
																	if (x[14] <= 1.5) {
																		return 24.0f;
																	}
																	else {
																		return 23.0f;
																	}

																}
																else {
																	if (x[14] <= 1.5) {
																		return 23.0f;
																	}
																	else {
																		return 24.0f;
																	}

																}

															}
															else {
																if (x[6] <= 3.5) {
																	if (x[8] <= 0.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[6] <= 4.5) {
																		if (x[8] <= 0.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[6] <= 5.5) {
																			if (x[8] <= 0.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}

																	}

																}

															}

														}
														else {
															if (x[5] <= 1.5) {
																if (x[6] <= 2.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[6] <= 3.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[6] <= 4.5) {
																			if (x[8] <= 0.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}

																		}
																		else {
																			if (x[6] <= 5.5) {
																				if (x[8] <= 0.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}
																			else {
																				if (x[8] <= 0.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
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
																	if (x[6] <= 2.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[6] <= 3.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[6] <= 4.5) {
																				if (x[8] <= 0.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}
																			else {
																				if (x[6] <= 5.5) {
																					if (x[8] <= 0.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}

																		}

																	}

																}
																else {
																	if (x[5] <= 3.5) {
																		if (x[6] <= 3.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[6] <= 4.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[6] <= 5.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}

																		}

																	}
																	else {
																		if (x[5] <= 4.5) {
																			if (x[6] <= 4.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[6] <= 5.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[8] <= 0.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}

																				}

																			}

																		}
																		else {
																			if (x[5] <= 5.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[6] <= 4.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[6] <= 5.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
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

													}

												}
												else {
													if (x[3] <= 3.5) {
														if (x[5] <= -0.5) {
															if (x[8] <= 0.5) {
																if (x[13] <= 0.5) {
																	if (x[14] <= 1.5) {
																		return 24.0f;
																	}
																	else {
																		return 23.0f;
																	}

																}
																else {
																	if (x[14] <= 1.5) {
																		return 23.0f;
																	}
																	else {
																		return 24.0f;
																	}

																}

															}
															else {
																if (x[13] <= 0.5) {
																	if (x[14] <= 1.5) {
																		return 24.0f;
																	}
																	else {
																		return 23.0f;
																	}

																}
																else {
																	if (x[14] <= 1.5) {
																		return 23.0f;
																	}
																	else {
																		return 24.0f;
																	}

																}

															}

														}
														else {
															if (x[5] <= 0.5) {
																if (x[6] <= 3.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[6] <= 4.5) {
																		if (x[8] <= 0.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[6] <= 5.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}

																	}

																}

															}
															else {
																if (x[5] <= 1.5) {
																	if (x[6] <= 3.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[6] <= 4.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[6] <= 5.5) {
																				if (x[8] <= 0.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}
																			else {
																				if (x[8] <= 0.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}

																		}

																	}

																}
																else {
																	if (x[5] <= 2.5) {
																		if (x[6] <= 4.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[6] <= 5.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}

																		}

																	}
																	else {
																		if (x[5] <= 3.5) {
																			if (x[6] <= 5.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}

																	}

																}

															}

														}

													}
													else {
														if (x[13] <= 0.5) {
															if (x[14] <= 1.5) {
																return 24.0f;
															}
															else {
																return 23.0f;
															}

														}
														else {
															if (x[14] <= 1.5) {
																return 23.0f;
															}
															else {
																return 24.0f;
															}

														}

													}

												}

											}

										}

									}
									else {
										if (x[2] <= 5.5) {
											if (x[3] <= 0.5) {
												if (x[5] <= 1.0) {
													if (x[8] <= 0.5) {
														if (x[13] <= 0.5) {
															if (x[14] <= 1.5) {
																return 24.0f;
															}
															else {
																return 23.0f;
															}

														}
														else {
															if (x[14] <= 1.5) {
																return 23.0f;
															}
															else {
																return 24.0f;
															}

														}

													}
													else {
														if (x[13] <= 0.5) {
															if (x[14] <= 1.5) {
																return 24.0f;
															}
															else {
																return 23.0f;
															}

														}
														else {
															if (x[14] <= 1.5) {
																return 23.0f;
															}
															else {
																return 24.0f;
															}

														}

													}

												}
												else {
													if (x[5] <= 3.5) {
														if (x[6] <= 1.5) {
															if (x[8] <= 0.5) {
																if (x[13] <= 0.5) {
																	if (x[14] <= 1.5) {
																		return 24.0f;
																	}
																	else {
																		return 23.0f;
																	}

																}
																else {
																	if (x[14] <= 1.5) {
																		return 23.0f;
																	}
																	else {
																		return 24.0f;
																	}

																}

															}
															else {
																if (x[13] <= 0.5) {
																	if (x[14] <= 1.5) {
																		return 24.0f;
																	}
																	else {
																		return 23.0f;
																	}

																}
																else {
																	if (x[14] <= 1.5) {
																		return 23.0f;
																	}
																	else {
																		return 24.0f;
																	}

																}

															}

														}
														else {
															if (x[13] <= 0.5) {
																if (x[14] <= 1.5) {
																	return 24.0f;
																}
																else {
																	return 23.0f;
																}

															}
															else {
																if (x[14] <= 1.5) {
																	return 23.0f;
																}
																else {
																	return 24.0f;
																}

															}

														}

													}
													else {
														if (x[5] <= 4.5) {
															if (x[6] <= 1.5) {
																if (x[8] <= 0.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}

															}
															else {
																if (x[6] <= 2.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[6] <= 3.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[6] <= 4.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}

																	}

																}

															}

														}
														else {
															if (x[5] <= 5.5) {
																if (x[6] <= 1.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[6] <= 3.0) {
																		if (x[8] <= 0.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}

																}

															}
															else {
																if (x[6] <= 1.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[6] <= 2.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
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
												if (x[3] <= 1.5) {
													if (x[5] <= -0.5) {
														if (x[8] <= 0.5) {
															if (x[13] <= 0.5) {
																if (x[14] <= 1.5) {
																	return 24.0f;
																}
																else {
																	return 23.0f;
																}

															}
															else {
																if (x[14] <= 1.5) {
																	return 23.0f;
																}
																else {
																	return 24.0f;
																}

															}

														}
														else {
															if (x[13] <= 0.5) {
																if (x[14] <= 1.5) {
																	return 24.0f;
																}
																else {
																	return 23.0f;
																}

															}
															else {
																if (x[14] <= 1.5) {
																	return 23.0f;
																}
																else {
																	return 24.0f;
																}

															}

														}

													}
													else {
														if (x[5] <= 0.5) {
															if (x[6] <= 2.5) {
																if (x[13] <= 0.5) {
																	if (x[14] <= 1.5) {
																		return 24.0f;
																	}
																	else {
																		return 23.0f;
																	}

																}
																else {
																	if (x[14] <= 1.5) {
																		return 23.0f;
																	}
																	else {
																		return 24.0f;
																	}

																}

															}
															else {
																if (x[6] <= 4.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}

															}

														}
														else {
															if (x[5] <= 1.5) {
																if (x[13] <= 0.5) {
																	if (x[14] <= 1.5) {
																		return 24.0f;
																	}
																	else {
																		return 23.0f;
																	}

																}
																else {
																	if (x[14] <= 1.5) {
																		return 23.0f;
																	}
																	else {
																		return 24.0f;
																	}

																}

															}
															else {
																if (x[5] <= 2.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[5] <= 3.5) {
																		if (x[6] <= 1.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[6] <= 2.5) {
																				if (x[8] <= 0.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}
																			else {
																				if (x[6] <= 4.0) {
																					if (x[8] <= 0.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}

																		}

																	}
																	else {
																		if (x[5] <= 4.5) {
																			if (x[6] <= 1.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[6] <= 2.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[6] <= 3.5) {
																						if (x[8] <= 0.5) {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}
																						else {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}

																					}
																					else {
																						if (x[6] <= 5.0) {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}
																						else {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}

																					}

																				}

																			}

																		}
																		else {
																			if (x[5] <= 5.5) {
																				if (x[6] <= 2.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[6] <= 3.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[6] <= 4.5) {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}
																						else {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}

																					}

																				}

																			}
																			else {
																				if (x[6] <= 4.0) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[6] <= 5.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
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

													}

												}
												else {
													if (x[3] <= 2.5) {
														if (x[5] <= 0.0) {
															if (x[8] <= 0.5) {
																if (x[13] <= 0.5) {
																	if (x[14] <= 1.5) {
																		return 24.0f;
																	}
																	else {
																		return 23.0f;
																	}

																}
																else {
																	if (x[14] <= 1.5) {
																		return 23.0f;
																	}
																	else {
																		return 24.0f;
																	}

																}

															}
															else {
																if (x[13] <= 0.5) {
																	if (x[14] <= 1.5) {
																		return 24.0f;
																	}
																	else {
																		return 23.0f;
																	}

																}
																else {
																	if (x[14] <= 1.5) {
																		return 23.0f;
																	}
																	else {
																		return 24.0f;
																	}

																}

															}

														}
														else {
															if (x[5] <= 1.5) {
																if (x[6] <= 4.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}

															}
															else {
																if (x[5] <= 2.5) {
																	if (x[6] <= 3.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[6] <= 4.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[6] <= 5.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}

																		}

																	}

																}
																else {
																	if (x[5] <= 3.5) {
																		if (x[6] <= 2.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[6] <= 3.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[6] <= 4.5) {
																					if (x[8] <= 0.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}

																				}
																				else {
																					if (x[6] <= 5.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}

																				}

																			}

																		}

																	}
																	else {
																		if (x[5] <= 4.5) {
																			if (x[6] <= 3.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[6] <= 4.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[6] <= 5.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[8] <= 0.5) {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}
																						else {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}

																					}

																				}

																			}

																		}
																		else {
																			if (x[5] <= 5.5) {
																				if (x[6] <= 4.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[6] <= 5.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[8] <= 0.5) {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}
																						else {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}

																					}

																				}

																			}
																			else {
																				if (x[6] <= 5.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
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
														if (x[5] <= 0.0) {
															if (x[13] <= 0.5) {
																if (x[14] <= 1.5) {
																	return 24.0f;
																}
																else {
																	return 23.0f;
																}

															}
															else {
																if (x[14] <= 1.5) {
																	return 23.0f;
																}
																else {
																	return 24.0f;
																}

															}

														}
														else {
															if (x[5] <= 1.5) {
																if (x[13] <= 0.5) {
																	if (x[14] <= 1.5) {
																		return 24.0f;
																	}
																	else {
																		return 23.0f;
																	}

																}
																else {
																	if (x[14] <= 1.5) {
																		return 23.0f;
																	}
																	else {
																		return 24.0f;
																	}

																}

															}
															else {
																if (x[5] <= 2.5) {
																	if (x[6] <= 5.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[5] <= 3.5) {
																		if (x[6] <= 4.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[6] <= 5.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[8] <= 0.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}

																		}

																	}
																	else {
																		if (x[5] <= 4.5) {
																			if (x[6] <= 5.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
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

										}
										else {
											if (x[3] <= 0.5) {
												if (x[5] <= 0.5) {
													if (x[8] <= 0.5) {
														if (x[13] <= 0.5) {
															if (x[14] <= 1.5) {
																return 24.0f;
															}
															else {
																return 23.0f;
															}

														}
														else {
															if (x[14] <= 1.5) {
																return 23.0f;
															}
															else {
																return 24.0f;
															}

														}

													}
													else {
														if (x[13] <= 0.5) {
															if (x[14] <= 1.5) {
																return 24.0f;
															}
															else {
																return 23.0f;
															}

														}
														else {
															if (x[14] <= 1.5) {
																return 23.0f;
															}
															else {
																return 24.0f;
															}

														}

													}

												}
												else {
													if (x[5] <= 2.5) {
														if (x[13] <= 0.5) {
															if (x[14] <= 1.5) {
																return 24.0f;
															}
															else {
																return 23.0f;
															}

														}
														else {
															if (x[14] <= 1.5) {
																return 23.0f;
															}
															else {
																return 24.0f;
															}

														}

													}
													else {
														if (x[5] <= 3.5) {
															if (x[6] <= 1.5) {
																if (x[13] <= 0.5) {
																	if (x[14] <= 1.5) {
																		return 24.0f;
																	}
																	else {
																		return 23.0f;
																	}

																}
																else {
																	if (x[14] <= 1.5) {
																		return 23.0f;
																	}
																	else {
																		return 24.0f;
																	}

																}

															}
															else {
																if (x[6] <= 3.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[6] <= 5.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}

																}

															}

														}
														else {
															if (x[5] <= 4.5) {
																if (x[6] <= 1.5) {
																	if (x[8] <= 0.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[6] <= 2.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[6] <= 3.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[6] <= 4.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[6] <= 5.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}

																		}

																	}

																}

															}
															else {
																if (x[5] <= 5.5) {
																	if (x[6] <= 1.5) {
																		if (x[8] <= 0.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[6] <= 2.5) {
																			if (x[8] <= 0.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}

																		}
																		else {
																			if (x[6] <= 3.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[6] <= 4.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[6] <= 5.5) {
																						if (x[8] <= 0.5) {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}
																						else {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}

																					}
																					else {
																						if (x[8] <= 0.5) {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}
																						else {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
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
																	if (x[6] <= 1.5) {
																		if (x[8] <= 0.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[6] <= 2.5) {
																			if (x[8] <= 0.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}

																		}
																		else {
																			if (x[6] <= 3.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[6] <= 4.5) {
																					if (x[8] <= 0.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}

																				}
																				else {
																					if (x[6] <= 5.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[8] <= 0.5) {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}
																						else {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
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

														}

													}

												}

											}
											else {
												if (x[3] <= 1.5) {
													if (x[5] <= -0.5) {
														if (x[8] <= 0.5) {
															if (x[13] <= 0.5) {
																if (x[14] <= 1.5) {
																	return 24.0f;
																}
																else {
																	return 23.0f;
																}

															}
															else {
																if (x[14] <= 1.5) {
																	return 23.0f;
																}
																else {
																	return 24.0f;
																}

															}

														}
														else {
															if (x[13] <= 0.5) {
																if (x[14] <= 1.5) {
																	return 24.0f;
																}
																else {
																	return 23.0f;
																}

															}
															else {
																if (x[14] <= 1.5) {
																	return 23.0f;
																}
																else {
																	return 24.0f;
																}

															}

														}

													}
													else {
														if (x[5] <= 0.5) {
															if (x[6] <= 2.0) {
																if (x[13] <= 0.5) {
																	if (x[14] <= 1.5) {
																		return 24.0f;
																	}
																	else {
																		return 23.0f;
																	}

																}
																else {
																	if (x[14] <= 1.5) {
																		return 23.0f;
																	}
																	else {
																		return 24.0f;
																	}

																}

															}
															else {
																if (x[6] <= 3.5) {
																	if (x[8] <= 0.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}

																}
																else {
																	if (x[6] <= 4.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[6] <= 5.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[8] <= 0.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}

																		}

																	}

																}

															}

														}
														else {
															if (x[5] <= 1.5) {
																if (x[6] <= 2.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[6] <= 3.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[6] <= 4.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[6] <= 5.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
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
																		if (x[8] <= 0.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}

																	}
																	else {
																		if (x[6] <= 2.5) {
																			if (x[8] <= 0.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}

																		}
																		else {
																			if (x[6] <= 3.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[6] <= 4.5) {
																					if (x[8] <= 0.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}

																				}
																				else {
																					if (x[6] <= 5.5) {
																						if (x[8] <= 0.5) {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}
																						else {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}

																					}
																					else {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}

																				}

																			}

																		}

																	}

																}
																else {
																	if (x[5] <= 3.5) {
																		if (x[6] <= 1.5) {
																			if (x[8] <= 0.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}

																		}
																		else {
																			if (x[6] <= 2.5) {
																				if (x[8] <= 0.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}
																			else {
																				if (x[6] <= 3.5) {
																					if (x[8] <= 0.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}

																				}
																				else {
																					if (x[6] <= 4.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[6] <= 5.5) {
																							if (x[8] <= 0.5) {
																								if (x[13] <= 0.5) {
																									if (x[14] <= 1.5) {
																										return 24.0f;
																									}
																									else {
																										return 23.0f;
																									}

																								}
																								else {
																									if (x[14] <= 1.5) {
																										return 23.0f;
																									}
																									else {
																										return 24.0f;
																									}

																								}

																							}
																							else {
																								if (x[13] <= 0.5) {
																									if (x[14] <= 1.5) {
																										return 24.0f;
																									}
																									else {
																										return 23.0f;
																									}

																								}
																								else {
																									if (x[14] <= 1.5) {
																										return 23.0f;
																									}
																									else {
																										return 24.0f;
																									}

																								}

																							}

																						}
																						else {
																							if (x[8] <= 0.5) {
																								if (x[13] <= 0.5) {
																									if (x[14] <= 1.5) {
																										return 24.0f;
																									}
																									else {
																										return 23.0f;
																									}

																								}
																								else {
																									if (x[14] <= 1.5) {
																										return 23.0f;
																									}
																									else {
																										return 24.0f;
																									}

																								}

																							}
																							else {
																								if (x[13] <= 0.5) {
																									if (x[14] <= 1.5) {
																										return 24.0f;
																									}
																									else {
																										return 23.0f;
																									}

																								}
																								else {
																									if (x[14] <= 1.5) {
																										return 23.0f;
																									}
																									else {
																										return 24.0f;
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
																		if (x[5] <= 4.5) {
																			if (x[6] <= 1.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[6] <= 2.5) {
																					if (x[8] <= 0.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}

																				}
																				else {
																					if (x[6] <= 3.5) {
																						if (x[8] <= 0.5) {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}
																						else {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}

																					}
																					else {
																						if (x[6] <= 4.5) {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}
																						else {
																							if (x[6] <= 5.5) {
																								if (x[8] <= 0.5) {
																									if (x[13] <= 0.5) {
																										if (x[14] <= 1.5) {
																											return 24.0f;
																										}
																										else {
																											return 23.0f;
																										}

																									}
																									else {
																										if (x[14] <= 1.5) {
																											return 23.0f;
																										}
																										else {
																											return 24.0f;
																										}

																									}

																								}
																								else {
																									if (x[13] <= 0.5) {
																										if (x[14] <= 1.5) {
																											return 24.0f;
																										}
																										else {
																											return 23.0f;
																										}

																									}
																									else {
																										if (x[14] <= 1.5) {
																											return 23.0f;
																										}
																										else {
																											return 24.0f;
																										}

																									}

																								}

																							}
																							else {
																								if (x[8] <= 0.5) {
																									if (x[13] <= 0.5) {
																										if (x[14] <= 1.5) {
																											return 24.0f;
																										}
																										else {
																											return 23.0f;
																										}

																									}
																									else {
																										if (x[14] <= 1.5) {
																											return 23.0f;
																										}
																										else {
																											return 24.0f;
																										}

																									}

																								}
																								else {
																									if (x[13] <= 0.5) {
																										if (x[14] <= 1.5) {
																											return 24.0f;
																										}
																										else {
																											return 23.0f;
																										}

																									}
																									else {
																										if (x[14] <= 1.5) {
																											return 23.0f;
																										}
																										else {
																											return 24.0f;
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
																			if (x[5] <= 5.5) {
																				if (x[6] <= 1.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[6] <= 2.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[6] <= 3.5) {
																							if (x[8] <= 0.5) {
																								if (x[13] <= 0.5) {
																									if (x[14] <= 1.5) {
																										return 24.0f;
																									}
																									else {
																										return 23.0f;
																									}

																								}
																								else {
																									if (x[14] <= 1.5) {
																										return 23.0f;
																									}
																									else {
																										return 24.0f;
																									}

																								}

																							}
																							else {
																								if (x[13] <= 0.5) {
																									if (x[14] <= 1.5) {
																										return 24.0f;
																									}
																									else {
																										return 23.0f;
																									}

																								}
																								else {
																									if (x[14] <= 1.5) {
																										return 23.0f;
																									}
																									else {
																										return 24.0f;
																									}

																								}

																							}

																						}
																						else {
																							if (x[6] <= 4.5) {
																								if (x[13] <= 0.5) {
																									if (x[14] <= 1.5) {
																										return 24.0f;
																									}
																									else {
																										return 23.0f;
																									}

																								}
																								else {
																									if (x[14] <= 1.5) {
																										return 23.0f;
																									}
																									else {
																										return 24.0f;
																									}

																								}

																							}
																							else {
																								if (x[6] <= 5.5) {
																									if (x[13] <= 0.5) {
																										if (x[14] <= 1.5) {
																											return 24.0f;
																										}
																										else {
																											return 23.0f;
																										}

																									}
																									else {
																										if (x[14] <= 1.5) {
																											return 23.0f;
																										}
																										else {
																											return 24.0f;
																										}

																									}

																								}
																								else {
																									if (x[13] <= 0.5) {
																										if (x[14] <= 1.5) {
																											return 24.0f;
																										}
																										else {
																											return 23.0f;
																										}

																									}
																									else {
																										if (x[14] <= 1.5) {
																											return 23.0f;
																										}
																										else {
																											return 24.0f;
																										}

																									}

																								}

																							}

																						}

																					}

																				}

																			}
																			else {
																				if (x[6] <= 2.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[6] <= 3.5) {
																						if (x[13] <= 0.5) {
																							if (x[14] <= 1.5) {
																								return 24.0f;
																							}
																							else {
																								return 23.0f;
																							}

																						}
																						else {
																							if (x[14] <= 1.5) {
																								return 23.0f;
																							}
																							else {
																								return 24.0f;
																							}

																						}

																					}
																					else {
																						if (x[6] <= 4.5) {
																							if (x[13] <= 0.5) {
																								if (x[14] <= 1.5) {
																									return 24.0f;
																								}
																								else {
																									return 23.0f;
																								}

																							}
																							else {
																								if (x[14] <= 1.5) {
																									return 23.0f;
																								}
																								else {
																									return 24.0f;
																								}

																							}

																						}
																						else {
																							if (x[6] <= 5.5) {
																								if (x[8] <= 0.5) {
																									if (x[13] <= 0.5) {
																										if (x[14] <= 1.5) {
																											return 24.0f;
																										}
																										else {
																											return 23.0f;
																										}

																									}
																									else {
																										if (x[14] <= 1.5) {
																											return 23.0f;
																										}
																										else {
																											return 24.0f;
																										}

																									}

																								}
																								else {
																									if (x[13] <= 0.5) {
																										if (x[14] <= 1.5) {
																											return 24.0f;
																										}
																										else {
																											return 23.0f;
																										}

																									}
																									else {
																										if (x[14] <= 1.5) {
																											return 23.0f;
																										}
																										else {
																											return 24.0f;
																										}

																									}

																								}

																							}
																							else {
																								if (x[13] <= 0.5) {
																									if (x[14] <= 1.5) {
																										return 24.0f;
																									}
																									else {
																										return 23.0f;
																									}

																								}
																								else {
																									if (x[14] <= 1.5) {
																										return 23.0f;
																									}
																									else {
																										return 24.0f;
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

															}

														}

													}

												}
												else {
													if (x[3] <= 2.5) {
														if (x[5] <= 0.0) {
															if (x[8] <= 0.5) {
																if (x[13] <= 0.5) {
																	if (x[14] <= 1.5) {
																		return 24.0f;
																	}
																	else {
																		return 23.0f;
																	}

																}
																else {
																	if (x[14] <= 1.5) {
																		return 23.0f;
																	}
																	else {
																		return 24.0f;
																	}

																}

															}
															else {
																if (x[13] <= 0.5) {
																	if (x[14] <= 1.5) {
																		return 24.0f;
																	}
																	else {
																		return 23.0f;
																	}

																}
																else {
																	if (x[14] <= 1.5) {
																		return 23.0f;
																	}
																	else {
																		return 24.0f;
																	}

																}

															}

														}
														else {
															if (x[5] <= 1.5) {
																if (x[6] <= 2.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[6] <= 3.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[6] <= 4.5) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}

																	}

																}

															}
															else {
																if (x[5] <= 2.5) {
																	if (x[6] <= 3.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[6] <= 5.0) {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}
																		else {
																			if (x[13] <= 0.5) {
																				if (x[14] <= 1.5) {
																					return 24.0f;
																				}
																				else {
																					return 23.0f;
																				}

																			}
																			else {
																				if (x[14] <= 1.5) {
																					return 23.0f;
																				}
																				else {
																					return 24.0f;
																				}

																			}

																		}

																	}

																}
																else {
																	if (x[5] <= 3.5) {
																		if (x[13] <= 0.5) {
																			if (x[14] <= 1.5) {
																				return 24.0f;
																			}
																			else {
																				return 23.0f;
																			}

																		}
																		else {
																			if (x[14] <= 1.5) {
																				return 23.0f;
																			}
																			else {
																				return 24.0f;
																			}

																		}

																	}
																	else {
																		if (x[5] <= 4.5) {
																			if (x[6] <= 3.5) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[6] <= 4.5) {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}
																				else {
																					if (x[13] <= 0.5) {
																						if (x[14] <= 1.5) {
																							return 24.0f;
																						}
																						else {
																							return 23.0f;
																						}

																					}
																					else {
																						if (x[14] <= 1.5) {
																							return 23.0f;
																						}
																						else {
																							return 24.0f;
																						}

																					}

																				}

																			}

																		}
																		else {
																			if (x[6] <= 5.0) {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
																					}

																				}

																			}
																			else {
																				if (x[13] <= 0.5) {
																					if (x[14] <= 1.5) {
																						return 24.0f;
																					}
																					else {
																						return 23.0f;
																					}

																				}
																				else {
																					if (x[14] <= 1.5) {
																						return 23.0f;
																					}
																					else {
																						return 24.0f;
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
														if (x[5] <= 0.5) {
															if (x[13] <= 0.5) {
																if (x[14] <= 1.5) {
																	return 24.0f;
																}
																else {
																	return 23.0f;
																}

															}
															else {
																if (x[14] <= 1.5) {
																	return 23.0f;
																}
																else {
																	return 24.0f;
																}

															}

														}
														else {
															if (x[5] <= 2.5) {
																if (x[6] <= 5.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}

															}
															else {
																if (x[5] <= 3.5) {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
																		}

																	}

																}
																else {
																	if (x[13] <= 0.5) {
																		if (x[14] <= 1.5) {
																			return 24.0f;
																		}
																		else {
																			return 23.0f;
																		}

																	}
																	else {
																		if (x[14] <= 1.5) {
																			return 23.0f;
																		}
																		else {
																			return 24.0f;
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

								}

							}

						}

					}
					else {
						return 24.0f;
					}

				}

			}
			else {
				return 24.0f;
			}

		}
		else {
			if (x[10] <= 5.5) {
				if (x[14] <= 2.5) {
					if (x[10] <= 4.5) {
						return 24.0f;
					}
					else {
						if (x[13] <= -0.5) {
							return 24.0f;
						}
						else {
							if (x[13] <= 2.0) {
								return 23.0f;
							}
							else {
								return 24.0f;
							}

						}

					}

				}
				else {
					return 24.0f;
				}

			}
			else {
				if (x[16] <= 0.5) {
					if (x[14] <= 2.5) {
						if (x[13] <= -0.5) {
							return 24.0f;
						}
						else {
							if (x[13] <= 0.5) {
								return 23.0f;
							}
							else {
								if (x[14] <= 1.5) {
									return 23.0f;
								}
								else {
									return 24.0f;
								}

							}

						}

					}
					else {
						return 24.0f;
					}

				}
				else {
					if (x[13] <= 3.5) {
						if (x[13] <= -0.5) {
							return 6.0f;
						}
						else {
							return 23.0f;
						}

					}
					else {
						return 24.0f;
					}

				}

			}

		}

	}
	else {
		if (x[13] <= -0.5) {
			if (x[10] <= 5.5) {
				if (x[10] <= 3.5) {
					if (x[11] <= 5.5) {
						return 24.0f;
					}
					else {
						if (x[10] <= 2.5) {
							if (x[16] <= 0.5) {
								return 24.0f;
							}
							else {
								return 3.0f;
							}

						}
						else {
							return 1.0f;
						}

					}

				}
				else {
					if (x[11] <= 3.5) {
						if (x[10] <= 4.5) {
							return 24.0f;
						}
						else {
							return 3.0f;
						}

					}
					else {
						if (x[16] <= 0.5) {
							if (x[11] <= 4.5) {
								return 24.0f;
							}
							else {
								return 3.0f;
							}

						}
						else {
							if (x[10] <= 4.5) {
								if (x[11] <= 4.5) {
									return 3.0f;
								}
								else {
									return 7.0f;
								}

							}
							else {
								return 7.0f;
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
			if (x[14] <= 3.5) {
				if (x[13] <= 2.5) {
					if (x[14] <= 2.5) {
						return 23.0f;
					}
					else {
						if (x[13] <= 1.5) {
							if (x[11] <= 3.5) {
								if (x[10] <= 4.5) {
									return 24.0f;
								}
								else {
									return 23.0f;
								}

							}
							else {
								return 23.0f;
							}

						}
						else {
							return 0.0f;
						}

					}

				}
				else {
					if (x[14] <= 1.5) {
						if (x[13] <= 3.5) {
							return 23.0f;
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
				if (x[11] <= 3.5) {
					if (x[13] <= 0.5) {
						if (x[10] <= 4.5) {
							return 24.0f;
						}
						else {
							return 23.0f;
						}

					}
					else {
						return 24.0f;
					}

				}
				else {
					if (x[13] <= 0.5) {
						return 23.0f;
					}
					else {
						return 0.0f;
					}

				}

			}

		}

	}

}