#include <stdio.h>

int main() {

	int C, c, S, s, i, j;  //C=테스트케이스 , c=케이스번호(0~C-1)?? , S=스튜~던트~ , s=학생번호(0~S-1) , i,j=단순증감
	int student[] = { 0 };
	int sum;
	float aver, per;


	printf("테스트 케이스 개수: ");
	scanf_s("%d", &C);

	for (c = 0; c < C; c++) //테스트 케이스 수
	{
		sum = 0;
		aver = 0;
		per = 0;

		printf("테스트 케이스: %d\n", c + 1);
		printf("학생은 몇 명?(1~1000): ");
		scanf_s("%d", &S);

		for (s = 0; s < S; s++) //학생 수만큼 점수 받기
		{
			printf("학생 %d의 점수(0~100): ", s + 1);
			scanf_s("%d", &student[s]); //학생[s]의 점수 받기

			sum += student[s]; //sum = sum+student[s]
			//※읽기 가능한 크기:4바이트 , 실제 읽기가능한 크기:8바이트 => OS비트 차이라는데 뭔뜻일까 => 물어보기~※
		}

		aver = sum / (float)S;
		j = 0;

		for (i = 0; i < S; i++) //평균과 점수 비교
		{
			(aver < student[i]) ? printf("%d번째 비교: 평균<학생[%d]=%d\n", i + 1,i,student[i]) : printf("%d번째 비교: 평균>학생[%d]=%d\n", i + 1,i, student[i]); //확인용
			//아니 어떻게 70>80 을 참이라고해ㅜㅜㅜㅜㅜㅜㅜ
			//비교가 잘못됐나?
			if (aver < student[i]) {
				printf("j증가\n");
				j = j + 1;
			}
		}

		per = (j / (float)S) * 100;
		printf("sum:%d  //  aver:%f  //  j: %d  //  S:%d  //  per:%f  //", sum,aver, j, S, per); //변수들 확인용 출력;; j~~눈치챙겨~~~~!!!
		printf("케이스[%d]의 평균 넘는 비율: %0.3f %% \n", c + 1, per);

	}

	return 0;
}