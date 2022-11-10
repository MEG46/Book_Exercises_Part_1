#include <stdio.h>
#define pi 3.14
double areaC(double a){
	double result=1.00;
	result=pi*2*a;
	return result;
}
double periC(double a){
	double result=1.00;
	result=pi*a*a;
	return result;
}
void main(){
	double area,peri=0.00;
	double num;
	printf("Enter the radius of circle : ");
	scanf("%lf",&num);
	area=areaC(num);
	peri=periC(num);
	printf("Area of circle : %.2lf\n",area);
	printf("Perimeter of Circle : %.2lf\n",peri);
	return;
	
}