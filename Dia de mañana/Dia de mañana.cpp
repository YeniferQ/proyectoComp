
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
}
