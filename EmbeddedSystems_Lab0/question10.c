#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

struct Grade{

   int student_id;
   int mark;
};

void grade_students(struct Grade *grades, int num_students){

   FILE *fp;
   fp = fopen("grades.txt", "w");
   int sum = 0;
   double sum2 = 0;
   for (int a = 0; a < num_students; a++){
      sum = sum + grades[a].mark;
      fprintf(fp, "Student ID: %d, Grade: %d \n", grades[a].student_id, grades[a].mark);
   }

   double avg = sum/num_students;

   for(int c = 0; c < num_students; c++){
      double num1 = grades[c].mark - avg;
      double num2 = num1*num1;
      sum2 = sum2 + num2;
   }

   double avg2 = sum2/num_students;
   double stdd = sqrt(avg2);

   fprintf(fp, "Average: %lf, Standard Deviation: %lf", avg, stdd);

   fclose(fp);
}

int main(void){

   char *professor;
   struct Grade *grades;
   int num_students;
   int id;
   int markk;

   professor = (char*)calloc(256, sizeof(char));

   printf("Please enter your name Professor: ");
   scanf("%s", professor);
   printf("Please enter the amount of students to grade: ");
   scanf("%d", &num_students);

   grades = (struct Grade *) malloc(num_students*sizeof(grades));

   printf("--STUDENT GRADING--\n");
   for(int b = 0; b<num_students; b++){
      
      printf("Please enter the student's ID: ");
      scanf("%d", &id);
      grades[b].student_id = id;

      printf("Please enter the student's mark: ");
      scanf("%d", &markk);
      grades[b].mark = markk;

      printf("-----\n");
   }

   grade_students(grades, num_students);
   free(professor);
   free(grades);
	
}