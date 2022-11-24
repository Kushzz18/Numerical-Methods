#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) 1/(1+x*x)
int main()
{
 	float lower, upper, integration=0.0, stepSize, k;
 	int i, subInterval;
 	/* Input */
 	printf("Enter lower limit of integration: ");
 	scanf("%f", &lower);
 	printf("\nEnter upper limit of integration: ");
	 scanf("%f", &upper);
	 printf("\nEnter number of sub intervals: ");
 	scanf("%d", &subInterval);
 	/* Calculation */
 	/* Finding step size */
 	stepSize = (upper - lower)/subInterval;
	/* Finding Integration Value */
 	integration = f(lower) + f(upper);
 	for(i=1; i<= subInterval-1; i++)
 	{
  		k = lower + i*stepSize;
  		integration = integration + 2 * f(k);
 	}
 	integration = integration * stepSize/2;
 	printf("\nRequired value of integration is: %.3f", integration);
 	return 0;
}