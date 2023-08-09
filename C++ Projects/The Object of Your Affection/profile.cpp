#include <iostream>
#include "profile.hpp"

/*
This constructor sets each of the variables in this profile object with the exception of hobbies
equal to the input parameters given to the contructor.
*/
Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns)
  : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {
 
}

// this method displays the user profile for the profile object by outputting all of the variables for the object.
// This method returns a string bio, which is the dating bio for this person.
std::string Profile::view_profile(){
  std::string bio = "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nPronouns: " + pronouns + "\nHobbies:\n";

  std::string hobby;
  // This for loop loops through the hobbies vector and adds each element in hobbies to the bio string.
  for(int i = 0; i < hobbies.size(); i++){
    bio += hobbies[i] + "\n";
  }
 
  return bio;
}
// This method takes in a string, new_hooby, and adds that parameter to hobbies.
void Profile::add_hobby(std::string new_hobby){
  hobbies.push_back(new_hobby);
}
