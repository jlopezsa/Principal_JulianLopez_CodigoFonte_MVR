/* Controlador de máquina de venda de refrigerantes
 * Discilplina: Programação de Sistemas Embarcados
 * Universidade Federal de Santa Catarina
 * Julián Jair López Salamanca
 * 28 de novembro de 2019
 */

#include <iostream>
using namespace std;

#define INTERFACE 1 // 1 = PC  || 2 = ATLYS

#if INTERFACE == 1 // Using PC (diretivas de compilação para processdor)
#include <pthread.h>
#else // Using Atlys
#endif

#include "MaquinaRefri.cpp"

//https://thispointer.com/c-how-to-pass-class-member-function-to-pthread_create/
// Usado para criar threads de métodos não estáticos que pertencem a uma classe X
typedef void * (*THREADFUNCPTR)(void *);

int main()
{
	MaquinaRefri objMaquina;

#if INTERFACE == 1 // Using PC (diretivas de compilação para processdor)
	//pthread_t th_input;
	//pthread_t th_password;
	//MaquinaRefri * pTh = new MaquinaRefri();
	//pthread_create(&th_input, NULL, (THREADFUNCPTR) &MaquinaRefri::inputOption, pTh);
	//pthread_create(&th_password, NULL, (THREADFUNCPTR)&MaquinaRefri::inputPassword, pTh);
#else // Using Atlys
#endif

	objMaquina.inicia();

	return 0;
}