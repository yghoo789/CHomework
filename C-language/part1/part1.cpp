#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, j;
	double k;
	printf("다음 단위에서 [변환할 단위] --> [변환결과 단위]로 연산합니다.\n");
	printf("[1] 미터(m)     [2]인치(in)     [3]피트(ft)      [4]야드(yd)     [5]종료(stop)\n");
	printf("[이전단위] --> [변환단위], 두 개의 메뉴 번호를 선택하세요. >>");
	scanf("%d %d", &i, &j);
	do {
		printf("[변환할 단위]의 길이를 입력하세요. >> ");
		scanf("%lf", &k);
		switch (i) {
		case 1:
			switch (j) {
			case 1:
				printf("%f[미터] -->%f[미터]\n", k, k * 1);
				break;

			case 2:
				printf("%f[미터] -->%f[인치]\n", k, k * 39.370079);
				break;

			case 3:
				printf("%f[미터] -->%f[피트]\n", k, k * 3.28084);
				break;

			case 4:
				printf("%f[미터] -->%f[야드]\n", k, k * 1.093613);
				break;
			default:
				printf("종료합니다.");
				break;
			}break;
		case 2:
			switch (j) {
			case 1:
				printf("%f[인치] -->%f[미터]\n", k, k * 0.0254);
				break;

			case 2:
				printf("%f[인치] -->%f[인치]\n", k, k * 1);
				break;

			case 3:
				printf("%f[인치] -->%f[피트]\n", k, k * 0.083333);
				break;

			case 4:
				printf("%f[인치] -->%f[야드]\n", k, k * 0.027778);
				break;
			default:
				printf("종료합니다.");
				break;
			}break;
		case 3:
			switch (j) {
			case 1:
				printf("%f[피트] -->%f[미터]\n", k, k * 0.3048);
				break;

			case 2:
				printf("%f[피트] -->%f[인치]\n", k, k * 12);
				break;

			case 3:
				printf("%f[피트] -->%f[피트]\n", k, k * 1);
				break;

			case 4:
				printf("%f[피트] -->%f[야드]\n", k, k * 0.333333);
				break;
			default:
				printf("종료합니다.");
				break;
			}break;
		case 4:
			switch (j) {
			case 1:
				printf("%f[야드] -->%f[미터]\n", k, k * 0.9144);
				break;

			case 2:
				printf("%f[야드] -->%f[인치]\n", k, k * 36);
				break;

			case 3:
				printf("%f[야드] -->%f[피트]\n", k, k * 3);
				break;

			case 4:
				printf("%f[야드] -->%f[야드]\n", k, k * 1);
				break;
			default:
				printf("종료합니다.");
				break;
			}break;
		default:
			printf("종료");
		}
	} while (k != 0);
	puts("종료합니다.");
	return 0;
}