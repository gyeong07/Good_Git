#include <stdio.h>

int main() {

	int C, c, S, s, i, j;  //C=�׽�Ʈ���̽� , c=���̽���ȣ(0~C-1)?? , S=��Ʃ~��Ʈ~ , s=�л���ȣ(0~S-1) , i,j=�ܼ�����
	int student[] = { 0 };
	int sum;
	float aver, per;


	printf("�׽�Ʈ ���̽� ����: ");
	scanf_s("%d", &C);

	for (c = 0; c < C; c++) //�׽�Ʈ ���̽� ��
	{
		sum = 0;
		aver = 0;
		per = 0;

		printf("�׽�Ʈ ���̽�: %d\n", c + 1);
		printf("�л��� �� ��?(1~1000): ");
		scanf_s("%d", &S);

		for (s = 0; s < S; s++) //�л� ����ŭ ���� �ޱ�
		{
			printf("�л� %d�� ����(0~100): ", s + 1);
			scanf_s("%d", &student[s]); //�л�[s]�� ���� �ޱ�

			sum += student[s]; //sum = sum+student[s]
			//���б� ������ ũ��:4����Ʈ , ���� �бⰡ���� ũ��:8����Ʈ => OS��Ʈ ���̶�µ� �����ϱ� => �����~��
		}

		aver = sum / (float)S;
		j = 0;

		for (i = 0; i < S; i++) //��հ� ���� ��
		{
			(aver < student[i]) ? printf("%d��° ��: ���<�л�[%d]=%d\n", i + 1,i,student[i]) : printf("%d��° ��: ���>�л�[%d]=%d\n", i + 1,i, student[i]); //Ȯ�ο�
			//�ƴ� ��� 70>80 �� ���̶���ؤ̤̤̤̤̤̤�
			//�񱳰� �߸��Ƴ�?
			if (aver < student[i]) {
				printf("j����\n");
				j = j + 1;
			}
		}

		per = (j / (float)S) * 100;
		printf("sum:%d  //  aver:%f  //  j: %d  //  S:%d  //  per:%f  //", sum,aver, j, S, per); //������ Ȯ�ο� ���;; j~~��ġì��~~~~!!!
		printf("���̽�[%d]�� ��� �Ѵ� ����: %0.3f %% \n", c + 1, per);

	}

	return 0;
}