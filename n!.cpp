#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int fact=1;
	int i=1;
	/*while(i<=n){
		fact*=i;
		i++;*/
	for(i=1;i<=n;i++){
		fact*= i;
	}
		
	
	printf("%d!=%d\n",n,fact);
	
}
//求和记录的初始变量为0 求积记录的初始变量为1 
