/*
The Function of Functions
As a programmer, you will find yourself reusing the same blocks of code over and over throughout your program. In times like these, you can turn to functions.

Also known as a method or procedure, a function is a named group of code statements that accomplish something together, a bit like a factory machine.

Built-in Functions
Before we learn how to create functions, let’s go over some built-in functions…

C++ comes chock-full of functions that are already created as part of the standard library. But how do we access this hidden hoard of helpful functions? We gain access to various functions by including headers like <cmath> or <string>.

In fact, you may already have used a couple functions without even knowing it! With the following header:

#include <cmath>
We gain the power to call sqrt() to find the square root of any number.

Wait, “call” sqrt()?

Calling a function is how we get a function to take action. To call a basic function, we just need the function name followed by a pair of parentheses like sqrt(9). For example:

std::cout << sqrt(9) << "\n";
 
// This would output 3

1.
Inside of main(), call rand() with the modulo operator to generate a random number between 0 and your favorite number. For example, rand() % 29 would output a random number between 0 and 28.

Assign the resulting value to a new int variable called the_amazing_random_number.

Print the_amazing_random_number to the terminal.

*/

#include <iostream>
#include <cmath>

int main(){
  // This seeds the random number generator:
  srand (time(NULL));
  
  // Use rand() below to initialize the_amazing_random_number
  
  int the_amazing_random_number = rand()%30;

  std::cout << the_amazing_random_number << "\n";

}
