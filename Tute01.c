/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int i;
  float marks,total=0,avg;
  for(i=0;i<2;i++)
  {
    printf("Enter your subject %d marks : ",i+1);
    scanf("%f",&marks);
    total+=marks;
  }
  avg=total/2.0;
  printf("Average marks of two subjects %.2f",avg);
  
  return 0;
}

