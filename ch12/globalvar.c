#include <stdio.h>

double getArea(double);
double getCircum(double);

//전역변수 선언
double PI = 3.14;
int gi;

int main(void)
{
	//지역변수 선언
	double r = 5.87;
	//전역변수 PI와 같은 이름의 지역변수 선언
	const double PI = 3.141592;

	printf("면적: %.2f\n", getArea(r));
	printf("둘레1: %.2f\n", 2 * PI*r);
	printf("둘레2: %.2f\n", getCircum(r));
	printf("PI: %f\n", PI);	//지역변수 PI 참조
	printf("gi: %d\n", gi);	//전역변수 gi 기본 값

	return 0;
}

double getArea(double r)
{
	return r*r*PI;		//전역변수 PI 참조
}
