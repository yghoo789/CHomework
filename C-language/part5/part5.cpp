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
			printf("�������ϳ��Է��ϼ���.>>");
		scanf("%d", &n);

		if (n == 0)
			break;
		printf("������: %o\n", n);
		printf("��������: %x\n", n);
		a = 0;
		printf("������: ");
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
	puts("�����մϴ�.");
	return 0;
}