#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, j;
	double k;
	printf("���� �������� [��ȯ�� ����] --> [��ȯ��� ����]�� �����մϴ�.\n");
	printf("[1] ����(m)     [2]��ġ(in)     [3]��Ʈ(ft)      [4]�ߵ�(yd)     [5]����(stop)\n");
	printf("[��������] --> [��ȯ����], �� ���� �޴� ��ȣ�� �����ϼ���. >>");
	scanf("%d %d", &i, &j);
	do {
		printf("[��ȯ�� ����]�� ���̸� �Է��ϼ���. >> ");
		scanf("%lf", &k);
		switch (i) {
		case 1:
			switch (j) {
			case 1:
				printf("%f[����] -->%f[����]\n", k, k * 1);
				break;

			case 2:
				printf("%f[����] -->%f[��ġ]\n", k, k * 39.370079);
				break;

			case 3:
				printf("%f[����] -->%f[��Ʈ]\n", k, k * 3.28084);
				break;

			case 4:
				printf("%f[����] -->%f[�ߵ�]\n", k, k * 1.093613);
				break;
			default:
				printf("�����մϴ�.");
				break;
			}break;
		case 2:
			switch (j) {
			case 1:
				printf("%f[��ġ] -->%f[����]\n", k, k * 0.0254);
				break;

			case 2:
				printf("%f[��ġ] -->%f[��ġ]\n", k, k * 1);
				break;

			case 3:
				printf("%f[��ġ] -->%f[��Ʈ]\n", k, k * 0.083333);
				break;

			case 4:
				printf("%f[��ġ] -->%f[�ߵ�]\n", k, k * 0.027778);
				break;
			default:
				printf("�����մϴ�.");
				break;
			}break;
		case 3:
			switch (j) {
			case 1:
				printf("%f[��Ʈ] -->%f[����]\n", k, k * 0.3048);
				break;

			case 2:
				printf("%f[��Ʈ] -->%f[��ġ]\n", k, k * 12);
				break;

			case 3:
				printf("%f[��Ʈ] -->%f[��Ʈ]\n", k, k * 1);
				break;

			case 4:
				printf("%f[��Ʈ] -->%f[�ߵ�]\n", k, k * 0.333333);
				break;
			default:
				printf("�����մϴ�.");
				break;
			}break;
		case 4:
			switch (j) {
			case 1:
				printf("%f[�ߵ�] -->%f[����]\n", k, k * 0.9144);
				break;

			case 2:
				printf("%f[�ߵ�] -->%f[��ġ]\n", k, k * 36);
				break;

			case 3:
				printf("%f[�ߵ�] -->%f[��Ʈ]\n", k, k * 3);
				break;

			case 4:
				printf("%f[�ߵ�] -->%f[�ߵ�]\n", k, k * 1);
				break;
			default:
				printf("�����մϴ�.");
				break;
			}break;
		default:
			printf("����");
		}
	} while (k != 0);
	puts("�����մϴ�.");
	return 0;
}