// Includes
#include "template.h"
#include "condicionales.h"

// Namespace
using namespace AGK;

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

	/*Crear un programa donde se ingrese un numero e imprima el mensaje de “Es mayor de edad” si el numero ingresado es mayor a 18*/
	ejercicio1(22);
	/*Añadirle un else al programa anterior, para que imprima el mensaje “No es mayor de 18” */
	ejercicio1(11);
	/*Añadirle otra condición al programa anterior, donde la condición sea que si el numero ingresado es mayor a 70 imprima el mensaje “Ya eres algo viejo”*/
	ejercicio1(78);
	/*Anadir una ultima condición donde la condición sea que si el numero ingresado es igual a 17 imprima el mensaje “Te falta poco para ser mayor”*/
	ejercicio1(1);

	return 0; // return 1 to close app
}


void app::End (void)
{

}
