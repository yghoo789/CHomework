#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a;
	int n;
	char binary[32];
	while (1)
	{
		for (a = 0; a < 32; a++)
			binary[a] = '0';
			printf("정수를하나입력하세요.>>");
		scanf("%d", &n);

		if (n == 0)
			break;
		printf("팔진수: %o\n", n);
		printf("십육진수: %x\n", n);
		a = 0;
		printf("이진수: ");
		while (n > 0)
		{
			if (n % 2 == 1)
				binary[a] = '1';
			n = n / 2;
			a++;
		}
		for (a = 31; a >= 0; a--)
		{
			printf("%c", binary[a]);
			if (a % 8 == 0)
				printf(" ");
		}
		printf("\n\n");
	}
	puts("종료합니다.");
	return 0;
}