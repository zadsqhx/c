#include<stdio.h>
int main()
{
 int a;
 int n;
 double sum=0.0;
 // int sign=1
 scanf("%d",&n);
 for(a=1;a<n;a++){
 	sum +=/*sign*1.0*/ 1.0/a;    //����������һ���Ǹ����� ��������Ǹ�����
	//sign =-sign  1+1/2-1/3......
 }
 printf("f(%d)=%f\n",n,sum);
 return 0;
} 
