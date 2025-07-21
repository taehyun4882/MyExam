#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	//int a = 1;
	//for (int i = 0; i < 3; i++);
	//a *= 2;
	//printf("a : %d\n", a);
	//Q3) 1~100사이의 3의 배수만 출력하세요. for문으로 하세요.
	//Q4) for문을 이용해서 홀수만 찍거나 짝수만 출력하세요.

	for (int i = 1; i <= 100; i++) {
		if(i % 3 == 0)
		printf("%d\n", i);
	}
	printf("\n");
	return 0;
}
