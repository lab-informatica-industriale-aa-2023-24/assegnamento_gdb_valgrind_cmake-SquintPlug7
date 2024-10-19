// valgrind2.c

#include <stdio.h>
#include <stdlib.h>


int main()
{
	char *p;

	p = (char *) malloc(19);
	if (p == NULL) return 1;  // Verifica che malloc non fallisca

	free(p);  // Libera la memoria allocata precedentemente

	p = (char *) malloc(12);
	if (p == NULL) return 1;

	free(p);  // Libera la memoria allocata precedentemente

	p = (char *) malloc(16);
	if (p == NULL) return 1;

	free(p);  // Libera l'ultima memoria allocata

	return 0;
}
