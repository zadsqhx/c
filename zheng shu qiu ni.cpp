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
//��һ��������%10�Ĳ��� �Ϳ��Եõ����ĸ�λ��;
//��һ��������/10�Ĳ��� ��ȥ�������ĸ�λ��;
//Ȼ���2�Ľ����%10 �Ϳ��Եõ�ԭ������ʮλ���ˡ� 
