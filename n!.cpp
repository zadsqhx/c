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
//��ͼ�¼�ĳ�ʼ����Ϊ0 �����¼�ĳ�ʼ����Ϊ1 
