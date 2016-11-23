#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b, c, dump;
	printf("교환할두정수를입력하세요. >>");
	scanf("%d %d", &a, &b);
	printf("입력한두수: x = %d and y = %d\n", a, b);
	printf("임시저장장소    이용방법[1]\n");
	printf("덧셈과뺄셈으로   교환방법[2]\n");
	printf("곱셈과나눗셈으로 교환방법[3]\n");
	printf("XOR 연산자^       이용방법[4]\n");
	printf("위교환방법중한번호를선택하세요. >>");
	scanf("%d", &c);
	switch (c) {
	case 1:
		dump = a;
		a = b;
		b = dump;
		break;
	case 2:
		a = a + b;
		b = a - b;
		a = a - b;
		break;
	case 3:
		a = a*b;
		b = a / b;
		a = a / b;
		break;
	case 4:
		a = a^b;
		b = a^b;
		a = a^b;
		break;
	}
	printf("교환한두수: x = %d and y = %d", a, b);
	return 0;
}