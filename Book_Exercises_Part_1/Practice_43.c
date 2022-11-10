#include <stdio.h>
double takePow(double a,double b){
	double result=1.00;
	int i;
	for(b;b>0;b--){
	   result= result * a;	
	}	
	return result;
}
void main(){
	double num,exp;
	double result1=1.00;
	printf("Enter a number : ");
	scanf("%lf",&num);
	printf("Enter an exponent : ");
	scanf("%lf",&exp);
	result1=takePow(num,exp);
	printf("%.0lf.power of %.2lf = %.2lf\n",exp,num,result1);
	return;
}