#include <stdio.h>

int main() {

	int testCase, caseCnt, student, studentCnt, sum;
	int i, j;
	int arrStudent[] = { 0 };
	float fAver, fPer;


	printf("�׽�Ʈ ���̽� ����: ");
	scanf_s("%d", &testCase);

	for (caseCnt = 0; caseCnt < testCase; caseCnt++) //�׽�Ʈ ���̽� ��
	{
		sum = 0;
		fAver = 0;
		fPer = 0;

		printf("�׽�Ʈ ���̽�: %d\n", caseCnt + 1);
		printf("�л��� �� ��?(1~1000): ");
		scanf_s("%d", &student);

		for (studentCnt = 0; studentCnt < student; studentCnt++) //�л� ����ŭ ���� �ޱ�
		{
			printf("�л� %d�� ����(0~100): ", studentCnt + 1);
			scanf_s("%d", &arrStudent[studentCnt]);

			sum += arrStudent[studentCnt];
			//���б� ������ ũ��:4����Ʈ , ���� �бⰡ���� ũ��:8����Ʈ => OS��Ʈ ���̶�µ� �����ϱ� => �����~��
			//���� �𸣰ڴµ� ��Ʈ������ �����ϴϱ�...��� ����...		
		}

		fAver = sum / (float)student;
		j = 0;

		for (i = 0; i < student; i++) //��հ� ���� ��
		{
			(fAver < arrStudent[studentCnt]) ? printf("%d��° ��: ���<�л�[%d]=%d\n", i + 1, i, arrStudent[studentCnt]) : printf("%d��° ��: ���>�л�[%d]=%d\n", i + 1, i, arrStudent[studentCnt]); //Ȯ�ο�
			//�ƴ� ��� 70>80 �� ���̶���ؤ̤̤̤̤̤̤�
			//�񱳰� �߸��Ƴ�?
			if (fAver < arrStudent[studentCnt])
			{
				printf("j����\n");
				j += 1;
			}
		}

		fPer = (j / (float)student) * 100;
		printf("sum:%d  //  aver:%f  //  j: %d  //  student:%d  //  per:%f  //", sum, fAver, j, student, fPer); //������ Ȯ�ο� ���;; j~~��ġì��~~~~!!!
		printf("���̽�[%d]�� ��� �Ѵ� ����: %0.3f %% \n", caseCnt + 1, fPer);

	}

	return 0;
}