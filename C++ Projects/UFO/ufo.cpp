/*
Author: Jason Hammar
Created: 8/7/2023
From the Codecademy projects for C++
*/

/*
This program uses functions to create a game called UFO which is similar to hangman.
The way the game works is that there is a UFO that is abducting a human, 
and it is the users job to guess the correct word to save the human.
The user has 7 guesses, if they use up all 7, then the UFO will successfully abduct the human.
The program will display the users progress as well as the users misses to let them know 
how close the human is to getting abducted. Once the game is over, the program will let 
the user know whether or not the user was successful in saving the human from abduction.
*/

#include <iostream>
#include "ufo_functions.hpp"
using namespace std;

/*
This main method will basically run the whole program and have the user play UFO.
The method calls the greet method which will greet the users and give them instructions on how
to play the game. Afterwards, the program will go into a while loop where it will display the users misses and status
and then prompt the user to enter in a letter to guess whether or not that letter is part of the word.
If it is part of the word, the program will then print out a message saying the guess is correct.
Otherwise, it will print out a message saying that it's incorrect. Once the game is over, 
the end_game function will be called, and will let the user know whether or not they won.
*/
int main() {
  string codeword = "codecademy";
  string answer = "__________";
  int misses = 0;
  greet();

  vector<char> incorrect;
  bool guess = false;
  char letter;

  /*
This while loop will display the users misses and status by calling the display misses and display status functions,
and then prompt the user to enter in a letter to guess whether or not that letter is part of the word.
If it is part of the word, the program will then print out a message saying the guess is correct.
Otherwise, it will print out a message saying that it's incorrect. Once the game is over, 
the end_game function will be called, and will let the user know whether or not they won.
*/
  while(answer != codeword && misses < 7){
    display_misses(misses);
    display_status(incorrect, answer);
    cout << "Please enter your guess: ";
    cin >> letter;

    /*
    This for loop will iterate through the codeword and compare each letter in the code word 
    with the letter the user guessed. If the letter the user guessed is in the code word, 
    guess is set to true and the index value in the answer variable is set to the letter the user guessed.
    */
    for(int i = 0; i < codeword.length(); i++){
      /*
      This if statement checks wheter or not the letter the user guessed is equal to the character 
      at the codeword index through the for loop iteration. If they are equal, 
      then the char value in the answer index is set equal to the letter variable and guess is set to true.
      */
      if(letter == codeword[i]){
        answer[i] = letter;
        guess = true;
      }
    }
    /*
    This if/else statement checks if guess is set to true or if it's set to false.
    If guess is set to true, a message saying the guess is correct is printed out.
    Otherwise, a message saying the guess is incorrect is printed out and the guess is pushed onto the incorrect vector.
    */
    if(guess){
      cout << "Correct!" << endl;
    }else{
      cout << "Incorrect! The tractor beam pulls the person in further." << endl;
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }

end_game(codeword, answer);
  

}
