#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int digit;
	int ret=0;
	while(x>0){
		digit=x%10;
		ret=ret*10+digit;
	//	printf("x=%d,digit=%d,ret=%d\n",digit,ret);
		x/=10;
	}
	printf("%d",ret);
	return 0;
	
}
//对一个整数做%10的操作 就可以得到它的个位数;
//对一个整数做/10的操作 就去掉了它的个位数;
//然后对2的结果做%10 就可以得到原来数的十位数了。 
