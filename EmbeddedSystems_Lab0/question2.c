#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
	double array[] = {1.2,5.5,2.1,3.3,3.3};

	for(int a = 0; a < 5; a++ ){
		double b = 0;

		if(a >= 1){
			 b = array[a - 1];
		}

		if(a == 0){
			printf("First Value %lf\n", array[a]);
		}
		else if(b < array[a]){
			printf("Greather than %lf\n", array[a]);
		}
		else if (b > array[a]){
			printf("Less than %lf\n", array[a]);
		}
		else if (b == array[a]){
			printf("The same %lf\n", array[a]);		}
   }

}