/*
Author: Jason Hammar
Created: 8/9/23
Last Updated: 8/9/23
This program is a fizzBuzz program which will check whether or not a number is divisible by 3, 5, or 15.
If a number is divisible by 3, Fizz is printed out. If a number is divisible by 5, Buzz is printed.
If a number is divisible by 15, FizzBuzz is printed. Otherwise just the number itself is printed.
*/

#include <stdio.h>

int main(){
  for(int i = 1; i <= 100; i++){
    if(i % 3 == 0 && i % 5 == 0){
      printf("FizzBuzz\n");
    }else if(i % 3 == 0){
      printf("Fizz\n");
    }else if(i % 5 == 0){
      printf("Buzz\n");
    }else{
      printf("%d\n", i);
    }
    
  }
}
