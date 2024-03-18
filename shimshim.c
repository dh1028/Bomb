#include <stdio.h>
#include <stdlib.h>

int main(){
	srand((unsigned)time(NULL));
	int user, i, j, bomb[5];
	char direction;
	
	for(i=0;i<=4;i++)		bomb[i]=rand()%2;
	
	printf("확률은 1/2! 5회동안 무작위로 터지는 폭탄을 피하세요!!\n\n");
	
	for(j=1;j<=5;j++){		
		printf("어느 방향으로 피할 건가요? (R/L)   ");
		scanf("%s", &direction);
		
		if(direction=='L')		user=0;
		else		user=1;
		
		if(bomb[j]==user) {
			printf("뻥!!!  폭탄이 터져버렸어요");
			break; 
		}
		else		printf("%d번 피하기 성공!\n\n", j);
	}
	
	if(j==6)		printf("\n축하합니다! 폭탄을 모두 피했어요!!");
}
