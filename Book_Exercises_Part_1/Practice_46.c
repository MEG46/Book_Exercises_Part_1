#include <stdio.h>
int IsPrime(int a){
	while(a>=2){
	int i;
	int flag=0;
	if(a<2){
		printf("Please enter a prime number!\n");
	}else{
		for(i=2;i<a;i++){
			if(a%i==0){
			flag=1;
				break;
			}
		}
		if(flag==0){
			printf("%d ",a);
		}
	}
	a--;
	}	
	return a;
}
void main(){
	int num;
	int result;
	printf("Enter a number : ");
	scanf("%d",&num);
	result=IsPrime(num);
	printf("\n",result);
	return;
	
	
}