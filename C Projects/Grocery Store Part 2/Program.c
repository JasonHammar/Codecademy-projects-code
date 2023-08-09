#include <stdio.h>
/*
Author: Jason Hammar
Created: 8/9/23
Last Updated: 8/9/23
this program continues off of the previous grocery store program, but this time, it showcases how the different
mathematical symbols work. It shows how modulo, addition, subtraction, etc., as well as 
the order of operations work.
*/
int main() {
  
 int appleQuantity;
 double applePrice = 1.49;
 double appleReview;
 int appleReviewDisplay;
 const char appleLocation = 'F';
 int dayOfWeek = 2;

 appleQuantity = 23;
 appleReview = 823 / 9;
 appleReviewDisplay = appleReview;

 dayOfWeek += 3;
 if(appleQuantity < 10 || dayOfWeek % 7 == 3)
 {
  printf("Sale on apples today, today only they are: $%.2f\n", applePrice * .9);
 }
 appleReview = (823 + 52) / 10;
 appleReviewDisplay = appleReview;
 // Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
 printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}
