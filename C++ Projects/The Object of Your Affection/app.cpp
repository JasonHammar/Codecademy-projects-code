/*
Author: Jason Hammar
Created: 8/7/23
Last Edited: 8/7/23
This program will create a dating profile using classes and objects.
This main method will create a Profile object named Sam, which uses a class constructor to give
a name, age, city, Country, and pronouns. It then adds hobbies and prints out the dating profile.
*/

#include <iostream>
#include "profile.hpp"

using namespace std;
int main() {
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  sam.add_hobby("Listening to audiobooks");
  sam.add_hobby("Playing Videogames");
  sam.add_hobby("Playing kickball");
  sam.add_hobby("reading the Bible");
  cout << sam.view_profile() << endl;

}
