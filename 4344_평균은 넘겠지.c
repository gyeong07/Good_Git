#include <stdio.h>

int main() {

	int C,c,s,i;
	int student[] = { 0 };

	printf("�׽�Ʈ ���̽� ����: ");
	scanf_s("%d", &C);

	for (c = 0; c < 5; c++) //�׽�Ʈ ���̽� ��
	{
		printf("�л��� �� ��?(1~1000)");
		scanf_s("%d", &s);

		for (i = 0; i < s; i++) //�л� ����ŭ ���� �ޱ�
		{
			printf("���̽� %d - �л� %d�� ����(0~100):", c + 1, i + 1);
			scanf_s("%d", &student[i]);
		}
	}
}