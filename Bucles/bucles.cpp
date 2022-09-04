#include "bucles.h"
#include "agk.h"

void ejercicio1b(int limite)
{
	agk::Print("Bucle while");
	int i = 2;
	while (i <= limite)
	{
		agk::PrintC(i);
		agk::PrintC(" ");
		i += 2;
	}
	agk::Print("\n");

	agk::Print("Bucle do-while");
	int j = 4;
	do
	{
		agk::PrintC(j);
		agk::PrintC(" ");
		j += 2;
	} while (j <= limite);
	agk::Print("\n");

	agk::Print("Bucle for");
	for (int i = 6; i <= limite; i += 2)
	{
		agk::PrintC(i);
		agk::PrintC(" ");
	}
	agk::Print("\n");
}

void ejercicio2b(int arreglo[10])
{
	for (int i = 0; i < 10; i++)
	{
		agk::PrintC(arreglo[i]);
		agk::PrintC(" ");
	}
	agk::Print("\n");
}

void ejercicio3b(int arreglo[10])
{
	for (int i = 0; i < 10; i++)
	{
		if (arreglo[i] % 2 == 0) {
			agk::PrintC(arreglo[i]);
			agk::PrintC(" ");
		}
	}
}