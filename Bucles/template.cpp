// Includes
#include "template.h"
#include "bucles.h"

app App;

void app::Begin(void)
{
	agk::SetVirtualResolution (1024, 768);
	agk::SetClearColor( 151,170,204 ); // light blue
	agk::SetSyncRate(60,0);
	agk::SetScissor(0,0,0,0);
}

int app::Loop (void)
{
	agk::Sync();

	/*Crear un programa donde se utilicen los 3 bucles para imprimir una secuencia de números de 2 en 2, el limite es a gusto.*/
	agk::Print("Ejercicio 1");
	ejercicio1b(27);

	/*Crear un programa que recorra por completo un arreglo e imprima los valores almacenados.*/
	agk::Print("Ejercicio 2");
	int arreglo[10] = { 22, 23, 43, 54, 85, 96, 77, 8, 9, 10 };
	ejercicio2b(arreglo);

	/*Crear un programa que recorra por completo un arreglo e imprima solo los valores pares.*/
	agk::Print("Ejercicio 3");
	int arreglo2[10] = { 22, 23, 43, 54, 85, 96, 77, 5, 9, 10 };
	ejercicio3b(arreglo2);

	return 0; // return 1 to close app
}


void app::End (void)
{

}
