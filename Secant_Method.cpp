#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) (pow(x,3)-2*x-5)

int main()
{
	 float x0=0,x1=0,x2=0,f0=0,f1=0,f2=0,error=0;
	 int s=1, n;
	 top:
	 printf("\nEnter initial guesses(x0 & x1) : ");
	 scanf("%f %f", &x0, &x1);
	 printf("\nEnter tolerable error : ");
	 scanf("%f", &error);
	 printf("\nEnter maximum iteration : ");
	 scanf("%d", &n);
	 printf("\nStep \t\t x0 \t\t x1 \t\t x2 \t\t f(x2) \n");
	 do
	 {
		  f0 = f(x0);
		  f1 = f(x1);
		  if(f0 == f1)
		  {
			   printf("\nInvalid Process !!! Division by Zero condition. \n Please Try Again");
			   goto top;
		  }
		  
		  x2 = x1 - (x1 - x0) * f1/(f1-f0);
		  f2 = f(x2);
		  printf("%d \t \t %f \t %f \t %f \t %f \n",s,x0,x1,x2, f2);
		  x0 = x1;
		  f0 = f1;
		  x1 = x2;
		  f1 = f2;
		  s = s + 1;
		  if(s > n)
		  {
			   printf("\n No Concurrent Solution.");
			   exit(0);
		  }
	 }while(fabs(f2)>error);
	 
	 printf("\nRoot is: %f", x2);
	 return 0;
}
