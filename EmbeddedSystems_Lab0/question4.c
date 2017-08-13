#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
	int array[] = {1,2,3,4,5,6,7,8,9,10};

	for(int a = 0; a < 10; a = a + 1 ){

      if((array[a] % 2) == 0){
      	printf("Number is even: %d\n", array[a]);
      }
      else{
      	printf("Number is odd: %d\n", array[a]);
      }
   }

}