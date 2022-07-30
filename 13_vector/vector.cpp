/*

Introduction to Vectors
To do just about anything of interest in a program, we need a group of data to work with.

For example, our program might need:

A list of Twitter’s trending tags
A set of payment options for a car
A catalog of eBooks read over the last year
The need for storing a collection of data is endless.

We are familiar with data types like int and double, but how do we store a group of ints or a group of doubles?

In this lesson, we will start with one of the simplest, and arguably the most useful, ways of storing data in C++: a vector.

A vector is a sequence of elements that you can access by index.

Creating a Vector
The std::vector lives in the <vector> header. So first, we need to add this line of code at the top of the program:

#include <vector>
For review, #include is a preprocessor directive that tells the compiler to include whatever library that follows. In our case that is the standard vector library.

And the syntax to create a vector looks like:

std::vector<type> name;
So to define a vector of ints called calories_today:

std::vector<int> calories_today;
Inside the angle brackets is the data type of the vector. After the angle brackets is the name of the vector.

Note: The type of the vector (i.e., what data type is stored inside) cannot be changed after the declaration.

*/

#include <iostream>
#include <vector>

int main() {



    std::vector<double> subway_adult = {800, 1200, 1500};


  /* 
VECTORS
Initializing a Vector
Now we know how to create a vector, we can also initialize a vector, giving it values, as we are creating it in the same line.

For example, instead of just creating a double vector named location:

std::vector<double> location;
We can create and initialize location with specific values:

std::vector<double> location = {42.651443, -73.749302};
Here, we are storing a latitude and a longitude.

So it would look something like this:

Vector

Another way we can initialize our vector is by presizing, or setting the size.

Suppose we want to create and initialize a vector with two elements. However, we don’t know what values we want to add yet:

std::vector<double> location(2);
Here, we are creating a double vector and setting the initial size to two using parentheses.

It would look something like this:

presize

Because 0.0 is the default value for double.

Instructions
1.
Suppose the Tokyo Subway costs are as follows:

Ticket	Adult	Child
24-hour	¥800	¥400
48-hour	¥1200	¥600
72-hour	¥1500	¥750

We have initialized the subway_adult already for you.

Initialize the subway_child vector with:

400
600
750
Note: The vector can still be double even though the values entered are ints.
   */

    // Give subway_child some values:
    std::vector<double> subway_child = {400, 600, 750};
  
  /*
  Index
Now that we have a vector, how do we access an individual element? This is where index comes into play.

An index refers to an element’s position within an ordered list. Vectors are 0-indexed, meaning the first element has index 0, the second index 1, and so on.

For example, suppose we have a char vector with all the vowels:

std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
It should look something like this:

vowels

The character at index 0 is 'a'.
The character at index 1 is 'e'.
The character at index 2 is 'i'.
The character at index 3 is 'o'.
The character at index 4 is 'u'.
To output each of the elements, we can do:

std::cout << vowels[0] << "\n";
std::cout << vowels[1] << "\n";
std::cout << vowels[2] << "\n";
std::cout << vowels[3] << "\n";
std::cout << vowels[4] << "\n";
Using the notation vector[index] with square brackets after the vector name and the element’s index number inside.

This will output:

a
e
i
o
u
  */
    std::cout << subway_child[2] << "\n";

}
