// gdb1.c
// Calcola la media dei numeri dati in ingresso
// premete enter dopo ogni numero
// CTRL-D per terminare l'input
// Esempio
// 1 <enter>
// 2 <enter>
// 2 <enter>
// <CTRL>-D


#include <stdio.h>

int main()
{
	int somma = 0;
	int val;
	int numeri = 0;

	printf("Inserisci i numeri (inserisci -1 per terminare):\n");

	while (scanf("%d", &val) == 1 && val != -1) {
		somma += val;
		numeri++;
	}

	double media;
	if (numeri > 0) {
		media = (double)somma / numeri;  // Conversione a double per la divisione
		printf("La media è %f\n", media);
	} else {
		printf("Nessun numero inserito.\n");
	}

	return 0;
}