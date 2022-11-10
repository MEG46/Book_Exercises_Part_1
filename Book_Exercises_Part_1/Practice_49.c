#include <stdio.h>
int smAll(int a,int d,int b[]){
	int smlnum=b[0];
	int sum = 0;
	int i;
	for(i=0;i<d;i++){
		if(smlnum>b[i]){
 		  smlnum=b[i]; 
		}
}
return smlnum;
}
void main(){
	int num,i;
	int sml,bgn;
	printf("Enter the length of array : ");
	scanf("%d",&num);
	int ar[num];
	for(i=0;i<num;i++){
		printf("Enter a number : ");
		scanf("%d",&ar[i]);
		fflush(stdin);
	}
	printf("Enter a number for array : ");
	scanf("%d",&bgn);
	fflush(stdin);
	sml = smAll(num,bgn,ar);
	printf("Smallest Number : %d\n",sml);
	return;
}