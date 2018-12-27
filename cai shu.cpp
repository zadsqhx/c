#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	int a;
	printf("请输入你想好的数字\n");
	do{
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("大\n");
		}else if(a<number){
			printf("小\n");
		}
		}while(a!=number);

	 printf("你猜了%d次",count);
	 return 0;
}

	
//x%n的结果是[0,n-1]的一个整数 
