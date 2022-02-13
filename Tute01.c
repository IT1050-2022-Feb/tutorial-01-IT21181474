/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int subject1,subject2;
  float average=0; 
  printf("Enter subjects' marks : ");
  scanf("%d %d",&subject1,&subject2); //get user input
  average=(subject1+subject2)/2.0;  //calculate average
  printf("Average is %f",average);
  return 0;
}//end main function

