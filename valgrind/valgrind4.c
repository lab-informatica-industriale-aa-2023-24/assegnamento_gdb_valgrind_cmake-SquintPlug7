#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
	// Allocare spazio per la stringa nello heap (incluso il carattere di terminazione)
	char* s = malloc(strlen("Hello World!") + 1);
	if (s == NULL) return 1;  // Controllo che malloc non fallisca

	// Copiare la stringa "Hello World!" nello spazio allocato
	strcpy(s, "Hello World!");

	// Stampa la stringa
	printf("%s\n", s);

	// Liberare la memoria allocata
	free(s);

	return 0;
}