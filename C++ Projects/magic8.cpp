#include <iostream>
#include <cstdlib>
 
using namespace std;
// This main method will act as a magic 8-Ball and generate a randome number between 1 and 10 by taking the modulus of the random number by 10. Then, based on those numbers, it will generate a magic 8 ball response.
int main() {
 
  // Your future is here
 cout << "MAGIC 8-BALL: \n";
 srand(time(NULL));
 int answer = rand() % 10;// Generates random number
 
// these if statements will project a certain output phrase depending on the value of answer.
// for example, if anser is 0, then the output will be "It is certain".
  if(answer == 0){
    cout << "It is certain.\n";
  }else if(answer == 1){
    cout << "It is decidedly so\n";
  }else if(answer == 2){
    cout << "Without a doubt\n";
  }else if(answer == 3){
    cout << "Yes - definitely.\n";
  }else if(answer == 4){
    cout << "Signs point to yes.\n";
  }else if(answer == 5){
    cout << "Don't count on it.\n";
  }else if(answer == 6){
    cout << "My reply is no.\n";
  }else if(answer == 7){
    cout << "Outlook not so good\n";
  }else if(answer == 8){
    cout << "My sources say no.\n";
  }else if(answer == 9){
    cout << "Very doubtful\n";
  }

}

/*
Possible answers to use and play around with.
It is certain.
It is decidedly so.
Without a doubt.
Yes - definitely.
You may rely on it.
As I see it, yes.
Most likely.
Outlook good.
Yes.
Signs point to yes.
Reply hazy, try again.
Ask again later.
Better not tell you now.
Cannot predict now.
Concentrate and ask again.
Don't count on it.
My reply is no.
My sources say no.
Outlook not so good.
Very doubtful
*/
