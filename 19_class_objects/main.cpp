/*
Object-oriented programming

It use the concept of class this contain attributes (variables) and methods(functions) and the class 
are blueprint creator of object (). 

Class Members
An empty class is pretty useless. Classes are designed to bring together related information and functionality — time to add stuff inside!

Components of a class are called class members. Just like you can get a string’s length using .length(), you can access class members using the dot operator (object.class_member).

There are two types of class members:

Attributes, also known as member data, consist of information about an instance of the class.
Methods, also known as member functions, are functions that you can use with an instance of the class. We use a . before method names to distinguish them from regular functions.
We encapsulate — or enclose for simpler user access — attributes and methods in a class like this:

class City {
 
  // attribute
  int population;
 
// we'll explain 'public' later
public:
  // method
  void add_resident() {
    population++;
  }
 
};
Unless we have a mostly empty class, it’s common to split function declarations from definitions. We declare methods inside the class (in a header), then define the methods outside the class (in a .cpp file of the same name).

How can we define methods outside a class? We can do this using ClassName:: before the method name to indicate its class like this:

int City::get_population() {
  return population;
}
Unlike with regular functions, we need to include the header file in the .cpp file where we define the methods.

Note: We must declare a method inside the class if we want to define it outside.

Add a Song class to song.hpp. Inside the class, add an std::string attribute called title.
Below title, add public: on a new line. We’ll explain this part later.

Add two method declarations for Song underneath:

.add_title(), a void method which accepts a new_title for a song. (Make sure this parameter has a different name than title.)
.get_title(), which has no parameters and will return as std::string.

Move over to song.cpp. Add definitions for each method:

Song::add_title() should set title to new_title.
Song::get_title() should return title.
*/

#include <iostream>
#include "song.hpp"

int main() {

}
