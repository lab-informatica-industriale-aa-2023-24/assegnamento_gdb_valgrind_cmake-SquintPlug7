// gdb2.c
// programma che stampa la somma da 1 a 1000

#include <stdio.h>

int main()
{
	int sum = 0;

	// Inizializza i a 1 e controlla che sia minore o uguale a 1000
	for(int i = 1; i <= 1000; i++) {
		sum += i;
	}

	printf("%d\n", sum);
	return 0;
}