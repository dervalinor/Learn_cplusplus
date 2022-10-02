/*
Access Control: Public and Private
Let’s circle back to that public keyword. What was that about?

By default, everything in a class is private, meaning class members are limited to the scope of the class. This makes it easier to keep data from mistakenly being altered, and abstracts away all the nitty gritty details. If you try to access a private class member, you’ll get an error:

error: 'population' is a private member of 'City'
But sometimes you need access to class members, and for that, there is public. You can use it to make everything below accessible outside the class:

class City {
 
  int population; 
 
public: // stuff below is public
  void add_resident() { 
    population++;
  }
 
};
There is also a private access modifier for when you want something below public to be private to the class:

class City {
 
  int population; 
 
public:
  void add_resident() { 
    population++;
  }
 
private: // this stuff is private
  bool is_capital;
 
};

Take a look at song.hpp. We’ve added an artist attribute to Song for you.

In main() in music.cpp, try to add an artist attribute of "A Tribe Called Quest" for electric_relaxation like:

some_object.some_attribute = some_value;
Do you think this will work?


2.
No! Check out that error message about Song::artist being private. Go ahead and remove that line you just added to main().

Because artist is private, you can’t access it from outside the class. So what do you do?

Well, you could move artist into the public part of the class. But then it’s easy to accidentally reset artist and end up with some weird bugs.

A better solution that allows you to interact with artist indirectly:

Create a public .add_artist() for setting the artist.
Create a public .get_artist() for retrieving the artist.

In main(), set electric_relaxation‘s artist to "A Tribe Called Quest" using .add_artist().

Now retrieve and print out the electric_relaxation‘s artist using .get_artist().

*/

#include <iostream>
#include "song.hpp"

int main() {

  Song electric_relaxation;
  //give error because is private attribute, we should create a method and so
  //access to a private attribute
  electric_relaxation.add_artist("A Tribe Called Quest");
  //print value of private attribute use a method
  std::cout << electric_relaxation.get_artist();  

}
