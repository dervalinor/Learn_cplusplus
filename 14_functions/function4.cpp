/*
How Return Values Work
When functions have a return type other than void, the function has two new requirements:

There must be a value returned from the function.
The return value must be the same type as the function’s return type.
But where does the return value get returned to?

It gets returned to the place where the function is called. For example, if you have the following function:

std::string feed_the_cat() {
 
  return "Cat is fed!";
 
}
And then print the function call inside of main():

int main() {
 
  std::string cat_message = feed_the_cat();
  std::cout << cat_message;
 
}
The return value of the function is what gets printed to the terminal.

Instructions
Watch how make_sandwich() passes its return value back to the function call in main().
*/

#include <iostream>

std::string make_sandwich(){
  return "Take your sandwich";
}

int main(){
  std::cout << make_sandwich() << "\n";
}
