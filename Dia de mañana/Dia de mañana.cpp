
#include <stdio.h>

int main()
{
	int Dia1;
	int Mes1;
	int anio;

	scanf_s("%i", &Dia1);
	scanf_s("%i", &Mes1);
	scanf_s("%i", &anio);

	if (!((Dia1 >= 4 && Dia1 < 15) && Mes1 == 10 && anio == 1582)) {
		if (Mes1 == 1 && Dia1 < 31) { printf("%2i %2i %4i", Dia1 + 1, Mes1, anio); }
		else {
			if (Mes1 == 1 && Dia1 == 31) { printf("%2i %2i %4i", Dia1 / Dia1, Mes1 + 1, anio); }
			else {
				if (Mes1 == 2 && Dia1 < 28 && anio % 4) { printf("%2i %2i %4i", Dia1 + 1, Mes1, anio); }
				else {
					if (Mes1 == 2 && Dia1 == 28 && anio % 4) { printf("%2i %2i %4i", Dia1 / Dia1, Mes1 + 1, anio); }
					else {
						if (Mes1 == 2 && Dia1 < 29 && !(anio % 4)) { printf("%2i %2i %4i", Dia1 + 1, Mes1, anio); }
						else {
							if (Mes1 == 2 && Dia1 == 29 && !(anio % 4)) { printf("%2i %2i %4i", Dia1 / Dia1, Mes1 + 1, anio); }
							else {
								if (Mes1 == 3 && Dia1 < 31) { printf("%2i %2i %4i", Dia1 + 1, Mes1, anio); }
								else {
									if (Mes1 == 3 && Dia1 == 31) { printf("%2i %2i %4i", Dia1 / Dia1, Mes1 + 1, anio); }
									else {
										if (Mes1 == 4 && Dia1 < 30) { printf("%2i %2i %4i", Dia1 + 1, Mes1, anio); }
										else {
											if (Mes1 == 4 && Dia1 == 30) { printf("%2i %2i %4i", Dia1 / Dia1, Mes1 + 1, anio); }
											else {
												if (Mes1 == 5 && Dia1 < 31) { printf("%2i %2i %4i", Dia1 + 1, Mes1, anio); }
												else {
													if (Mes1 == 5 && Dia1 == 31) { printf("%2i %2i %4i", Dia1 / Dia1, Mes1 + 1, anio); }
													else {
														if (Mes1 == 6 && Dia1 < 30) { printf("%2i %2i %4i", Dia1 + 1, Mes1, anio); }
														else {
															if (Mes1 == 6 && Dia1 == 30) { printf("%2d %2d %4d", Dia1 / Dia1, Mes1 + 1, anio); }
															else {
																if (Mes1 == 7 && Dia1 < 31) { printf("%2i %2i %4i", Dia1 + 1, Mes1, anio); }
																else {
																	if (Mes1 == 7 && Dia1 == 31) { printf("%2i %2i %4i", Dia1 / Dia1, Mes1 + 1, anio); }
																	else {
																		if (Mes1 == 8 && Dia1 < 31) { printf("%2i %2i %4i", Dia1 + 1, Mes1, anio); }
																		else {
																			if (Mes1 == 8 && Dia1 == 31) { printf("%2i %2i %4i", Dia1 / Dia1, Mes1 + 1, anio); }
																			else {
																				if (Mes1 == 9 && Dia1 < 30) { printf("%2i %2i %4i", Dia1 + 1, Mes1, anio); }
																				else {
																					if (Mes1 == 9 && Dia1 == 30) { printf("%2i %2i %4i", Dia1 / Dia1, Mes1 + 1, anio); }
																					else {
																						if (Mes1 == 10 && Dia1 < 31) { printf("%2i %2i %4i", Dia1 + 1, Mes1, anio); }
																						else {
																							if (Mes1 == 10 && Dia1 == 31) { printf("%2i %2i %4i", Dia1 / Dia1, Mes1 + 1, anio); }
																							else {
																								if (Mes1 == 11 && Dia1 < 30) { printf("%2i %2i %4i", Dia1 + 1, Mes1, anio); }
																								else {
																									if (Mes1 == 11 && Dia1 == 30) { printf("%2i %2i %4i", Dia1 / Dia1, Mes1 + 1, anio); }
																									else {
																										if (Mes1 == 12 && Dia1 < 31) { printf("%2i %2i %4i", Dia1 + 1, Mes1, anio); }
																										else {
																											if (Mes1 == 12 && Dia1 == 31) { printf("%2i %2i %4i", Dia1 / Dia1, Mes1 / Mes1, anio + 1); }
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
