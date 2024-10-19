// valgrind3.c

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// Alloca abbastanza memoria per 20 byte
	char *p = (char *) malloc(20);
	if (p == NULL) return 1;  // Verifica che malloc non fallisca

	char *s = p;

	// Inizializza i primi 20 byte a '\0'
	for (int n = 0; n < 20; n++) {
		*s = '\0';
		s++;
	}

	// Libera la memoria allocata
	free(p);

	// Riassegna memoria sufficiente per 30 byte
	p = (char *) malloc(30);
	if (p == NULL) return 1;  // Verifica che malloc non fallisca

	// Reimposta `s` al nuovo blocco di memoria
	s = p;

	// Scrivi 30 caratteri 'A'
	for (int n = 0; n < 30; n++) {
		*s = 'A';
		s++;
	}

	// Libera la memoria allocata
	free(p);

	return 0;
}