#include<stdio.h>
int main() 
/*{
	int x;
    for(x=1;x<=100;x++){
    	int i;
    	int isPrime=1;
    	for(i=2;i<x;i++){
    		if(x%i==0){
    			isPrime=0;
    			break;
			}
		}
		if(isPrime==1){
			printf("%d ",x);
		}
	} 
	return 0;
}*/
{
	int x;
	int cnt=0;
	//for(x=1;cnt<50;x++){
	x=1;
	while(cnt<50){
    	int i;
    	int isPrime=1;
    	for(i=2;i<x;i++){
    		if(x%i==0){
    			isPrime=0;
    			break;
			}
		}
		if(isPrime==1){
			cnt++;
			printf("%d\t",x);
			if(cnt%5==0){
				printf("\n");//每五个换行 
			}
		}
		x++;
	} 
	return 0;
}
