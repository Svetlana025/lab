#include <stdio.h>
#include <math.h>

int main()
{
float a, x, G, Y, F;
	
printf ("Введите число a \n");
scanf ("%f", &a);
printf ("Введите число x \n");
scanf ("%f", &x);

G = -(3*(14*(a*2)+23*a*x-30*(x*2)))/(-9*(a*2))+37*a*x+40*(x*2));
F = -tan(18*(a*2)-a*x-4*(x*2));
Y = (log(35*(a*2)-27*a*x+4*(x*2)+1))/(log(2));

printf("G=%f\n",G);
printf("F=%f\n",F);
printf("Y=%f\n",Y);
	
return 0;
}
