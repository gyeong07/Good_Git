#include <stdio.h>

int main() {

	int test_Case, std_Num, std_cnt, i, j = 0;  
	int score[10000];
	
	printf("�׽�Ʈ ���̽� ����: ");
	scanf_s("%d", &test_Case);

	for(j = 0; j < test_Case; j++){	
		int sum = 0;
		double avg = 0;
		
		printf("�׽�Ʈ ���̽�: %d\n", j + 1);
		printf("�л��� �� ��?(1~1000): ");
		scanf_s("%d", &std_Num);
		
		if (std_Num > 1000){
			printf("1000�ʰ��� ������ �Է��Ͽ����ϴ�");
			return 0; 
		}
		else if(std_Num < 1){
			printf("1�̸��� ������ �Է��Ͽ����ϴ�");
			return 0;
		}
		else{
			for (i = 0; i < std_Num; i++) {
					printf("�л� ����(0~100): ");
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
			printf(" ��� �Ѵ� ����: %.3f %%\n\n", (double)std_cnt * 100 / std_Num);
		}
	}
	return 0;
}
