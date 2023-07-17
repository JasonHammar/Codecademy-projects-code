#include <iostream>
using namespace std;

/*
This main method will determine which Harry Potter house you should be in by adding points to each house based on your answers.
*/
int main() {
 
  // The magic starts here
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1, answer2, answer3, answer4;

  cout << "The Sorting Hat Quiz!\n";

  cout << "Q1) When I'm Dead, I want people to remember me as:\n\n";
  cout << "1) The Good\n";
  cout << "2) The Great\n";
  cout << "3) The Wise\n";
  cout << "4) The Bold\n";

  cin >> answer1;

  if(answer1 == 1){
    hufflepuff++;
  }else if(answer1 == 2){
    slytherin++;
  }else if(answer1 == 3){
    ravenclaw++;
 }else if(answer1 == 4){
    gryffindor++;
  }else{
    cout << "Input Invalid!\n";
  }

  cout << "Q1) Dawn or Dusk?\n\n";
  cout << "1) Dawn\n";
  cout << "2) dusk\n";

  cin >> answer2;

  if(answer2 == 1){
    gryffindor++;
    ravenclaw++;
  }else if(answer2 = 2){
    slytherin++;
    hufflepuff++;
  }else{
    cout << "Invalid Input!\n";
  }

cout << "Q3) What kind of musical instrument pleases your ear?\n\n";
  cout << "1) The Violin\n";
  cout << "2) The Trumpet\n";
  cout << "3) The Piano\n";
  cout << "4) The Drum\n";

  cin >> answer3;

  if(answer3 == 1){
    slytherin++;
  }else if(answer3 == 2){
    hufflepuff++;
  }else if(answer3 == 3){
    ravenclaw++;
  }else if(answer3 == 4){
    gryffindor++;
  }else{
    cout << "Input Invalid!\n";
  }

  cout << "Q4) Which road tempts you the most?\n\n";
  cout << "1) The wide, sunny grassy lane\n";
  cout << "2) The narrow, dark, lantern lit alley\n";
  cout << "3) The twisting, leaf-strewn path through woods\n";
  cout << "4) The cobbled street lined (ancient buildings)\n";

  cin >> answer4;

  if(answer3 == 1){
    hufflepuff++;
  }else if(answer3 == 2){
    slytherin++;
  }else if(answer3 == 3){
    gryffindor++;
  }else if(answer3 == 4){
    ravenclaw++;
  }else{
    cout << "Input Invalid!\n";
  }
  
  string house;

  int max = 0;

  if(gryffindor > max){
    max = gryffindor;
    house = "Gryffindor";
  }

  if(hufflepuff > max){
    max = hufflepuff;
    house = "Hufflepuff";
  }

  if(ravenclaw > max){
    max = ravenclaw;
    house = "Ravenclaw";
  }

  if(slytherin > max){
    max = slytherin;
    house = "Slytherin";
  }

  cout << house << "!\n";
}
