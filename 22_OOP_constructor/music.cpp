/*
Constructors
Is there a way to give an object some data right when it gets created? We’re so glad you asked!

A constructor is a special kind of method that lets you decide how the objects of a class get created. It has the same name as the class and no return type. Constructors really shine when you want to instantiate an object with specific attributes.

If we want to make sure each City is created with a name and a population, we can use parameters and a member initializer list to initialize attributes to values passed in:

// city.hpp
#include "city.hpp"
 
class City {
 
  std::string name;
  int population;
 
public:
  City(std::string new_name, int new_pop);
 
};
 
// city.cpp
City::City(std::string new_name, int new_pop)
  // members get initialized to values passed in 
  : name(new_name), population(new_pop) {}
You could also write the definition like this:

City::City(std::string new_name, int new_pop) {
  name = new_name;
  population = new_pop;
}
However, a member initialization list allows you to directly initialize each member when it gets created.

To instantiate an object with attributes, you can do:

// inside main()
City ankara("Ankara", 5445000);
Now we have a City called ankara with the following attributes:

ankara.name set to "Ankara".
ankara.population set to 5445000.
*/


#include <iostream>
#include "song.hpp"

int main() {

  Song back_to_black("Back to Black", "Amy Winehouse"); 
  
  std::cout << back_to_black.get_title();
  std::cout << back_to_black.get_artist();
  
}
