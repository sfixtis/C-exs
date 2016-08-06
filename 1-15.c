#include <stdio.h>

int fahr_to_cel(int fahr);

int main() {
	int i;
	for (i = 0; i <= 300; i = i + 20) {
		printf("%d %d\n", i, fahr_to_cel(i));
	}
	return 0;
}

int fahr_to_cel(int fahr) {
	
	int celsius;
	celsius = 5.0 * (fahr - 32.0) / 9.0;
	return celsius;
}