#include <stdio.h>
#include <math.h>

int main(){
	
	int num_of_program;
	float a, x, G, Y, F;
	int range1, range2;
	int answer;
	int num_of_iterations;
	int i = 0;
	
	printf("How much operations this program should to do?\n");
	scanf("%d", &num_of_iterations);
	for (i; i != num_of_iterations; i++) {
	
		printf("1 is G, 2 is F, 3 is Y\n");
		printf("Enter a number to choose program\n");
		scanf("%d", &num_of_program);
		switch (num_of_program) {
		case 1:
			//  G
		
			printf("\nGive a range to 'x', that it can't across:\n");
			scanf("%d %d", &range1, &range2);
			printf("\nEnter a and x\n");
			scanf("%f %f",&a,&x);
			if (x < range1 || x > range2) {
				printf("\nYou entered the range of 'x'between %d and %d. \n'x' can't be used in this range!", range1, range2);
				continue;
			}
			if (a==0 && x==0) {
				printf("\nCan't divine on zero.\nDo not enter 0 and 0\n");
				continue;
			}
			else{
				G = 0 - (3* (14*pow(a,2) + 23*a*i - 30*pow(i,2)))/( (0-(9*pow(a,2))) + 37*a*i + 40*pow(i,2));
				printf("G = %f\n",G);
				printf("\nDo you want to stop the calculations? (1/0)\n");
				scanf("%d",&answer);
				if (answer == 1) {
					printf("\n You answered '1'. Stopping the calculations...zzzz");
					break;
				}
				else {
					continue;
				}
			}
		case 2:
			//  F
			
			printf("\nGive a range to 'x', that it can't across:\n");
			scanf("%d %d", &range1, &range2);
			printf("Enter a and x\n");
			scanf("%f %f",&a,&x);
			if (x < range1 || x > range2) {
				printf("\nYou entered the range of 'x'between %d and %d. \n'x' can't be used in this range!", range1, range2);
				continue;
			}
			if ((-4<a<4) && (-4<x<4)) {
				F = 0 - tan(18*pow(a,2) - a*i - 4*pow(i,2));
				printf("\nF = %f\n",F); 
				printf("\nDo you want to stop the calculations? (1/0)\n");
				scanf("%d",&answer);
				if (answer == 1) {
					printf("\n You answered '1'. Stopping the calculations...zzzz");
					break;
				}
				else {
					continue;
				}
			}
			else{
				printf("\nResult is too big.Error: 1#INF00 \nDo not enter any number that more than 4 and less than -4\n");
				continue;
			}
			
		case 3:
			// Y
			
			printf("\nGive a range to 'x', that it can't across:\n");
			scanf("%d %d", &range1, &range2);
			printf("Enter a and x\n");
			scanf("%f %f",&a,&x);
			if (x < range1 || x > range2) {
				printf("\nYou entered the range of 'x'between %d and %d. \n'x' can't be used in this range!", range1, range2);
				continue;
			}
			if (a!=0 && x!=0) {
				printf("\nImpossible to count. Error: -1#IND00\n Enter 0 and 0 to get possible result");
				continue;
			}	
			else {
				Y = (log(35*pow(a,2)- 27*a*i + 4*pow(i,2) +1))/log(2);
				printf("\nY = %f\n",Y);
				printf("\nDo you want to stop the calculations? (1/0)\n");
				scanf("%d",&answer);
				if (answer == 1) {
					printf("\n You answered '1'. Stopping the calculations...zzzz");
					break;
				}
				else {
					continue;
				}
			}
	
		default:
			printf("\nCan't find instruction to do");
			continue;
		}
	}
	printf("\nThe end");
	return 0;
}
