#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

struct Students{
   int studentID;
   int age;
   int year;
};

void save_student(struct Students student){

   FILE *fp;
   fp = fopen("students.txt", "a");
   fprintf(fp, "%d,%d,%d", student.studentID,student.age,student.year);
   fclose(fp);

}

int main(void){

   struct Students Student1;

   int id;
   int age;
   int year;

   printf ("Please enter your studentID: ");
   scanf("%d", &id);
   Student1.studentID = id;

   printf ("Please enter your Age: ");
   scanf("%d", &age);
   Student1.age = age;

   printf ("Please enter your School Year: ");
   scanf("%d", &year);
   Student1.year = year;

   save_student(Student1);
	
}
