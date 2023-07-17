#include <iostream>

using namespace std;
/*
This main method will print out Fizz and Buzz, or FizzBuzz depending on whether or not i is a multiple of 3, 5, or both.
If the counter in the for loop, i, is a multiple of 3 and 5, it will output fizzBuzz.
If i is a multiple of 3, it will print out Fizz.
If i is a multiple of 5, it will print out Buzz.
Otherwise, just the number will be printed out.
*/
int main() {
 
  //this for loop will print out Fizz, Buzz, fizzbuzz, or just the number based on what it is a multiple of.
  for(int i = 1; i <= 100; i++){

    if(i % 3 == 0 && i % 5 == 0){// If i is a multiple of 3 and 5, the the output is FizzBuzz.
      cout << "FizzBuzz\n";
    }else if(i % 3 == 0){// If i is a multiple of 3, then the output is Fizz
      cout << "Fizz\n";
    }else if(i % 5 == 0){// If i is a multiple of 5, then the output is Buzz
      cout << "Buzz\n";
    }else{// Otherwise, the value of i is the output.
      cout << i << "\n";
    }
    
  }
}
