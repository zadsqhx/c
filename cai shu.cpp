#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	int a;
	printf("����������õ�����\n");
	do{
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("��\n");
		}else if(a<number){
			printf("С\n");
		}
		}while(a!=number);

	 printf("�����%d��",count);
	 return 0;
}

	
//x%n�Ľ����[0,n-1]��һ������ 
