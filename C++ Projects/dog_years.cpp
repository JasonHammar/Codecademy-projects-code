#include <iostream>

int main() {
  // The below variable stores the dogs current age
  int dog_age = 15;
  // The below variable stores the age of the dogs first two years in dog years.
  int early_years = 21;
  // The below variable calculates what the later years add up to in dog years.
  int later_years = (dog_age - 2) * 4;
  // The below variable stores years of the dog in human years.
  int human_years = early_years + later_years;
  
  std::cout << "My name is Latte! Ruff ruff, I am " << human_years << " years old in human years.\n";
}
