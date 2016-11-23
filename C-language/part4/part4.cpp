#include <stdio.h>
int IsPrime(int num) {
	int i, tmp = num / 2;
	for (i = 2; i <= tmp; i++) {
		if (num % i == 0)
			return 0;
	}
	return 1;
}
void main() {
	int i, j, count, num = 2;
	for (i = 0; i<10; i++) {
		for (j = i; j<9; j++)
			printf("%c ", ' ');
		for (count = 0; count <= i; num++) {
			if (IsPrime(num)) {
				printf("%3d ", num);
				count++;
			}
		}
		printf("\n");
	}
}