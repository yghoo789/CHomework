#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int xToBinary(unsigned int dec, char *bptr) {
	int ix = 32;
	do {
		bptr[--ix] = '0' + dec % 2;
		dec /= 2;
	} while (dec);
	return  (ix);
}

int main(void) {
	int aa, bb, cc;
	int a, b, c;
	int i, sel;
	int n;
	int bin[32];
	n = sizeof(bin) / sizeof(int);

	while (1) {
		printf("[1] ��ƮAND(&)\n");
		printf("\n");
		printf("[2] ��ƮOR(|)\n");
		printf("\n");
		printf("[3] ��ƮXOR(^)\n");
		printf("\n");
		printf("[4] ��ƮCOMPLEMENT(~)\n");
		printf("\n");
		printf("[0] ����(stop)\n");
		printf("\n");
		printf("���������ϳ��������ϼ���. >>");

		scanf_s("%d", &sel);
		printf("\n");

		if (sel == 1) {
			printf("��Ʈ�����ҵ������Է�>>");
			scanf_s("%d %d", &a, &b);
			printf("a =\t");
			aa = a;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = a % 2;
				a /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", aa);

			printf("a =\t");
			bb = b;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = b % 2;
				b /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", bb);

			printf("a & b =\t");
			c = aa & bb;
			cc = aa & bb;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = c % 2;
				c /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", cc);
		}
		else if (sel == 2) {
			printf("��Ʈ�����ҵ������Է�>>");
			scanf_s("%d %d", &a, &b);

			printf("a =\t");
			aa = a;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = a % 2;
				a /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", aa);

			printf("a =\t");
			bb = b;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = b % 2;
				b /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", bb);

			printf("a | b =\t");
			c = aa | bb;
			cc = aa | bb;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = c % 2;
				c /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", cc);
		}
		else if (sel == 3) {

			printf("��Ʈ�����ҵ������Է�>>");
			scanf_s("%d %d", &a, &b);

			printf("a =\t");
			aa = a;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = a % 2;
				a /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", aa);

			printf("a =\t");
			bb = b;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = b % 2;
				b /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", bb);
			printf("a ^ b =\t");
			c = aa ^ bb;
			cc = aa ^ bb;
			for (i = n - 1; i >= 0; i--) {
				bin[i] = c % 2;
				c /= 2;
			}
			for (i = 0; i < n; i++)
				printf("%d", bin[i]);
			printf("\t%d\n", cc);
		}
		else if (sel == 4) {
			int  index;
			char binary[33] = { 0 };
			printf("��Ʈ����(~) �������ϳ��������Է�>>");
			scanf_s("%d", &a, 4);
			if (a == 0)
				break;
			else {
				index = xToBinary(a, binary);
				printf("a =\t");
				aa = a;
				for (i = n - 1; i >= 0; i--) {
					bin[i] = a % 2;
					a /= 2;
				}
				for (i = 0; i < n; i++)
					printf("%d", bin[i]);
				printf("\n");
			}
			if (aa > 0) {
				for (i = 0; i < 32; i++) {
					if ((binary[i] == NULL) || (binary[i] == '0'))
						binary[i] = '1';

					else
						binary[i] = '0';
				}
				printf("~a =\t%s\t-%d \n", binary, aa + 1);
			}
		}
		else if (sel == 0) break;
			printf("\n\n");
	}
	return 0;
}