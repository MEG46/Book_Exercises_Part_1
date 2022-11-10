#include <stdio.h>
double findS(double a){
	double result=1.00;
	result = a * a;
}
void main(){
	double num,result1;
	printf("Enter a length of the square : ");
	scanf("%lf",&num);
	result1=findS(num);
	printf("Area of the square : %.2lf\n",result1);
	return;
}