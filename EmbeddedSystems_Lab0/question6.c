#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(void){

   char name[20];
   char age[20];
   char height[20];

   printf ("Please enter your Name: ");
   scanf("%s", name);
   printf ("Please enter your Age: ");
   scanf("%s", age);
   printf ("Please enter your Height: ");
   scanf("%s", height);
   printf("Your Name/Age/Height is: %s/%s/%s", name, age, height);

}