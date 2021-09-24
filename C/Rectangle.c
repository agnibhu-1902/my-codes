#include<stdio.h>
void main()
{
	float l,b;
	printf("Enter length and breadth of rectangle : ");
	scanf("%f %f",&l,&b);
	printf("Area : %.2f",(l*b));
	printf("\nPerimeter : %.2f",(2*(l+b)));
}
