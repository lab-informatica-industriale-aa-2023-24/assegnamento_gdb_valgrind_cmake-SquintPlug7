// valgrind1.c
// In questo file ci sono due problemi

#include <stdlib.h>


int main(void)
{
	int* x = malloc(10 * sizeof(int)); // Allocazione di un array di 10 elementi
	if (x == NULL) {
		// Gestione dell'errore se malloc fallisce
		return;
	}

	x[9] = 0; // Accesso all'indice 9, che è l'ultimo elemento valido
	free(x);  // Libera la memoria allocata
	return 0;
}