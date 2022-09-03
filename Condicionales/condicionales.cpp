#include "condicionales.h"
#include "AGK.h"

void ejercicio1(int edad)
{
	if (edad > 18)
	{
		agk::Print("Es mayor de edad");
	}
	else if (edad == 17)
	{
		agk::Print("Te falta poco para ser mayor");
	}
	else if (edad > 70)
	{
		agk::Print("Eres demasiado viejo :(");
	}
	else 
	{
		agk::Print("No es mayor de edad");
	}
}