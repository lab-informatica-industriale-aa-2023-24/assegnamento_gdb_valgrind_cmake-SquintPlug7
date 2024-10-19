// gdb3.c
#include <stdio.h>

long fattoriale(int n)
{
	long result = 1;
	for (int i = n; i > 1; i--) {
		result *= i; // Moltiplica per i invece di n
	}
	return result;
}

int main()
{
	int n = 10;

	long val = fattoriale(n);

	printf("Fattoriale di %d è %ld\n", n, val);

	return 0;
}