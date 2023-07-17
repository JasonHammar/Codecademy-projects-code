/*
This program has the user input a number for rock paper and scissors and the computer generates a random number between 1 and 3 for rock paper scissors.

Depending on the combination, the program will determine if the user wins, the computer wins, or if it's a tie.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;
 
int main() {
 
  // Live long and prosper
  srand (time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";
 
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
 
  std::cout << "shoot! ";

  cin >> user;
// rock beats scissors
  if(user == 1 && computer == 3){
    cout << "You win!\n";
  }
// Scissors beats paper
  if(user == 3 && computer == 2){
    cout << "You win!\n";
  }
// Paper beats rock.
  if(user == 2 && computer == 1){
    cout << "You win!\n";
  }
// rock beats scissors
  if(user == 3 && computer == 1){
    cout << "Computer wins!\n";
  }
// Paper beats rock.
  if(user == 1 && computer == 2){
    cout << "Computer wins!\n";
  }
// Scissors beats paper
  if(user == 2 && computer == 3){
    cout << "Computer wins!\n";
  }
// Both user and computer chose the same thing.
  if(user == computer){
    cout << "Tie!\n";
  }
 
}

