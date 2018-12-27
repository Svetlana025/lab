#include <stdio.h>
#include <math.h>

int main(){
	
	float a, x, G, Y, F;
	
	// result of G
	printf("Enter a and x\n");
	scanf("%f %f",&a,&x);
	G = 0 - (3* (14*pow(a,2) + 23*a*x - 30*pow(x,2)))/( (0-(9*pow(a,2))) + 37*a*x + 40*pow(x,2)); 
	printf("G = %f\n",G);
	
	// result of F
	printf("Enter a and x\n");
	scanf("%f %f",&a,&x);
	F = 0 - tan(18*pow(a,2) - a*x - 4*pow(x,2));
	printf("\nF = %f\n",F); 
	
	// result of Y
	printf("Enter a and x\n");
	scanf("%f %f",&a,&x);
	Y = (log(35*pow(a,2) - 27*a*x + 4*pow(x,2) +1))/log(2);
	printf("\nY = %f\n",Y);
	
	return 0;
}
