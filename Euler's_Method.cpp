#include<stdio.h>
#include<conio.h>
#define f(x,y) x+y
int main()
{
 	float x0, y0, xn, h, yn, slope;
 	int i, n;
 	printf("Enter Initial Condition\n");
 	printf("x0 = ");
 	scanf("%f", &x0);
 	printf("\ny0 = ");
 	scanf("%f", &y0);
 	printf("\nEnter calculation point xn = ");
 	scanf("%f", &xn);
 	printf("\nEnter number of steps: ");
	 scanf("%d", &n);	
	/* Calculating step size (h) */
 	h = (xn-x0)/n;
	 /* Euler's Method */
 	printf("\nx0\ty0\tslope\tyn\n");
 	printf("------------------------------\n");
 	for(i=0; i < n; i++)
	{
  		slope = f(x0, y0);
  		yn = y0 + h * slope;
  		printf("%.4f\t%.4f\t%0.4f\t%.4f\n",x0,y0,slope,yn);
  		y0 = yn;
  		x0 = x0+h;
 	}
 	printf("\nValue of y at x = %0.2f is %0.3f",xn, yn);
 	return 0;
}

