#include <stdio.h>
#include <stdlib.h>

int main(){
	srand((unsigned)time(NULL));
	int user, i, j, bomb[5];
	char direction;
	
	for(i=0;i<=4;i++)		bomb[i]=rand()%2;
	
	printf("Ȯ���� 1/2! 5ȸ���� �������� ������ ��ź�� ���ϼ���!!\n\n");
	
	for(j=1;j<=5;j++){		
		printf("��� �������� ���� �ǰ���? (R/L)   ");
		scanf("%s", &direction);
		
		if(direction=='L')		user=0;
		else		user=1;
		
		if(bomb[j]==user) {
			printf("��!!!  ��ź�� �������Ⱦ��");
			break; 
		}
		else		printf("%d�� ���ϱ� ����!\n\n", j);
	}
	
	if(j==6)		printf("\n�����մϴ�! ��ź�� ��� ���߾��!!");
}
