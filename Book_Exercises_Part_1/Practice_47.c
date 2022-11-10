#include <stdio.h>
int sumAll(int a,int b[]){
	int i;
	int sum = 0;
	for(i=0;i<a;i++){
		sum = sum + b[i];
	}
	return sum;
}
void main(){
	int num,i;
	int sum1;
	printf("Enter a number : ");
	scanf("%d",&num);
	int ar[num];
	for(i=0;i<num;i++){
		printf("Enter a number : ");
		scanf("%d",&ar[i]);
		fflush(stdin);
	}
	sum1 = sumAll(num,ar);
	printf("Sum : %d\n",sum1);
	return;
	}