#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main(void){

   FILE *fp;
   int buff[255];
   int a = 0;

   fp = fopen("question7.txt", "r");

   while(!feof(fp)){
      fscanf(fp, "%d",&buff[a]);
      if(!feof(fp)){
         printf("Numbers : %d\n", buff[a]);
         a++;
      }
   }
}