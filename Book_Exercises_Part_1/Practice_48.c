#include <stdio.h>
int smAll(int a,int b[]){
	int smlnum=b[0];
	int sum = 0;
	int i;
	for(i=1;i<a;i++){
		if(smlnum>b[i]){
 		  smlnum=b[i]; 
		}
}
	return smlnum;
}
int bgAll(int a,int b[]){
	int i;
	int bgnum=b[0];
	int sum = 0;
	for(i=1;i<a;i++){
		if(bgnum<b[i]){
		  bgnum=b[i]; 
		}	
}
	return bgnum;
}
void main(){
	int num,i;
	int sml,bgn;
	printf("Enter a number : ");
	scanf("%d",&num);
	int ar[num];
	for(i=0;i<num;i++){
		printf("Enter a number : ");
		scanf("%d",&ar[i]);
		fflush(stdin);
	}
	sml = smAll(num,ar);
	bgn = bgAll(num,ar);
	printf("Smallest Number : %d\n",sml);
	printf("Biggest Number : %d\n",bgn);
	return;
	}