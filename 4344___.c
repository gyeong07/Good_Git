#include <stdio.h>

int main() {

	int test_Case, std_Num, std_cnt, i, j = 0;  
	int score[10000];
	
	printf("테스트 케이스 개수: ");
	scanf_s("%d", &test_Case);

	for(j = 0; j < test_Case; j++){	
		int sum = 0;
		double avg = 0;
		
		printf("테스트 케이스: %d\n", j + 1);
		printf("학생은 몇 명?(1~1000): ");
		scanf_s("%d", &std_Num);
		
		if (std_Num > 1000){
			printf("1000초과의 범위를 입력하였습니다");
			return 0; 
		}
		else if(std_Num < 1){
			printf("1미만의 범위를 입력하였습니다");
			return 0;
		}
		else{
			for (i = 0; i < std_Num; i++) {
					printf("학생 점수(0~100): ");
					scanf_s("%d", &score[i]);
	
					sum += score[i];
			}
			
			avg = (double)sum / std_Num;
			std_cnt = 0;
			
			for(i = 0; i < std_Num; i++){
				if(avg < score[i]){
					std_cnt++;
				}
			}	
			printf(" 평균 넘는 비율: %.3f %%\n\n", (double)std_cnt * 100 / std_Num);
		}
	}
	return 0;
}
