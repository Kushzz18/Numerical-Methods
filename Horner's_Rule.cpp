#include<stdio.h>
#include<conio.h>
int main() {
	int n,x,A[10],i,Bn = 0;
	printf("\nEnter the degree of the polynomial: ");
	scanf("%d",&n);
	printf("\nEnter the Coefficients from lower to higher order: ");
	for(i=0; i<=n; i++) {
		scanf("%d",&A[i]);
	}
	printf("\nEnter the value of x: ");
	scanf("%d",&x);
	Bn = A[n];
	for(i=n-1; i>=0; i--) {
		Bn = A[i] + Bn*x;
	}
	printf("\nValue of the polynomial is : %d",Bn);
	return 0;
}
