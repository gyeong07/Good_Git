#include <stdio.h>

int main() {

	int testCase, caseCnt, student, studentCnt, sum;
	int i, j;
	int arrStudent[] = { 0 };
	float fAver, fPer;


	printf("테스트 케이스 개수: ");
	scanf_s("%d", &testCase);

	for (caseCnt = 0; caseCnt < testCase; caseCnt++) //테스트 케이스 수
	{
		sum = 0;
		fAver = 0;
		fPer = 0;

		printf("테스트 케이스: %d\n", caseCnt + 1);
		printf("학생은 몇 명?(1~1000): ");
		scanf_s("%d", &student);

		for (studentCnt = 0; studentCnt < student; studentCnt++) //학생 수만큼 점수 받기
		{
			printf("학생 %d의 점수(0~100): ", studentCnt + 1);
			scanf_s("%d", &arrStudent[studentCnt]);

			sum += arrStudent[studentCnt];
			//※읽기 가능한 크기:4바이트 , 실제 읽기가능한 크기:8바이트 => OS비트 차이라는데 뭔뜻일까 => 물어보기~※
			//왠진 모르겠는데 노트북으로 실행하니까...경고도 없다...		
		}

		fAver = sum / (float)student;
		j = 0;

		for (i = 0; i < student; i++) //평균과 점수 비교
		{
			(fAver < arrStudent[studentCnt]) ? printf("%d번째 비교: 평균<학생[%d]=%d\n", i + 1, i, arrStudent[studentCnt]) : printf("%d번째 비교: 평균>학생[%d]=%d\n", i + 1, i, arrStudent[studentCnt]); //확인용
			//아니 어떻게 70>80 을 참이라고해ㅜㅜㅜㅜㅜㅜㅜ
			//비교가 잘못됐나?
			if (fAver < arrStudent[studentCnt])
			{
				printf("j증가\n");
				j += 1;
			}
		}

		fPer = (j / (float)student) * 100;
		printf("sum:%d  //  aver:%f  //  j: %d  //  student:%d  //  per:%f  //", sum, fAver, j, student, fPer); //변수들 확인용 출력;; j~~눈치챙겨~~~~!!!
		printf("케이스[%d]의 평균 넘는 비율: %0.3f %% \n", caseCnt + 1, fPer);

	}

	return 0;
}