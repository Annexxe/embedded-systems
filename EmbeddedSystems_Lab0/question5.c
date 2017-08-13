#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double euclid_dist(int x1, int y1, int x2, int y2){

		/* local variable declaration */
   		int initial1 = (x2 - x1);
   		int initial2 = (y2 - y1);
   		int initial3 = (initial1*initial1) + (initial2*initial2);
   		double final = sqrt(initial3);

 		return final;

}

int main(void){

	for(int a = 0; a < 10; a = a + 1 ){
      int x1 = rand() % 100;
      int y1 = rand() % 100;
      int x2 = rand() % 100;
      int y2 = rand() % 100;

      double result = euclid_dist(x1,y1,x2,y2);

      printf("Result: %lf\n", result);
   }

}
