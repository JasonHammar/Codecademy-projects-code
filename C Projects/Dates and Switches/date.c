/*
Author: Jason Hammar
Created: 8/9/23
Last Updated: 8/9/23
This program showcases how conditionals work and shows how the switch statement can be used to print out the date.
*/

#include <stdio.h>

int main(void) {
  int month, day, year;

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  // Split the user input into 3 variables for the date
  // Don't worry about the `scanf()` below, you'll learn more about these later!
  scanf("%d /%d /%d", &month, &day, &year);
  // This switch statement checks the month for it's value, and if month is equal to
  // A number between 1 and 12, then it prints out the word for that month.
  switch(month){
    case 1:
      printf("January");
      break;
    case 2:
      printf("February");
      break;
    case 3:
      printf("March");
      break;
    case 4:
      printf("April");
      break;
    case 5:
      printf("May");
      break;
    case 6:
      printf("June");
      break;
    case 7:
      printf("July");
      break;
    case 8:
      printf("August");
      break;
    case 9:
      printf("September");
      break;
    case 10:
      printf("October");
      break;
    case 11:
      printf("November");
      break;
    case 12:
      printf("December");
      break;
    default:
      printf("Invalid");
      break;

  }

  // Print the month
  

  // Print the day
  printf(" %i", day);

  // Print the suffix for a given day
  // This switch statement prints out the correct suffix for the day depending on the integer value of the day.
  switch(day){
    case 1:
      printf("st,");
      break;
    case 2:
      printf("nd,");
      break;
    case 3:
      printf("rd,");
      break;
    case 21:
      printf("st,");
      break;
    case 22:
      printf("nd,");
      break;
    case 23:
      printf("rd,");
      break;
    case 31:
      printf("st,");
      break;
    default:
      printf("th,");
      break;
  }
  // Print the year
  printf(" %i\n", year);
  
  return 0;
}
