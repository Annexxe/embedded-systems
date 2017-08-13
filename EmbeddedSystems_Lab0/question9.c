#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int main(void){

   char *professor;
   int *student_ids;
   int *grades;
   int students;

   professor = (char*)calloc(256, sizeof(char));

   printf("Please enter your name Professor: ");
   scanf("%s", professor);
   printf("Please enter the amount of students to grade: ");
   scanf("%d", &students);

   grades = (int *) malloc(students*sizeof(int));
   student_ids = (int *) malloc(students*sizeof(int));
	
}