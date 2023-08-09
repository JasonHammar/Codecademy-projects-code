#include <vector>

using namespace std;
/*
This profile class contains variables to build a dating profile.
All of the variables are private, but the constructor and the method, add_hobby, are public. 
view_profile method is also public.
*/
class Profile{
  private:

  string name;
  int age;
  string city;
  string country;
  string pronouns;
  vector<string> hobbies;

  public:
  Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns = "they/them");
  string view_profile();
  void add_hobby(string new_hobby);

};
