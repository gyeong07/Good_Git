#include <stdio.h>

int main() {

	int C,c,s,i;
	int student[] = { 0 };

	printf("테스트 케이스 개수: ");
	scanf_s("%d", &C);

	for (c = 0; c < 5; c++) //테스트 케이스 수
	{
		printf("학생은 몇 명?(1~1000)");
		scanf_s("%d", &s);

		for (i = 0; i < s; i++) //학생 수만큼 점수 받기
		{
			printf("케이스 %d - 학생 %d의 점수(0~100):", c + 1, i + 1);
			scanf_s("%d", &student[i]);
		}
	}
}