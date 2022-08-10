/*
Tackling Multiple Arguments
Hang on, you may be thinking, are you limited to one parameter per function? Not at all! You can add as many as you like, but you will have to remember their order when you call the function.

double get_tip(double price, double tip, bool total_included) {
 
  if (total_included) {
 
    return price * tip + price;
 
  } else {
 
    return price * tip;
 
  }
 
}
So here we have three parameters:

double price
double tip
bool total_included
When calling get_tip(), it’s important to call it with price first, tip second, and return_total last:

get_tip(0.25, true, 45.50);
// this code will not work
get_tip(45.50, 0.25, true);
// this code results in 56.875, which you could round up to 56.881

Define a void function name_x_times() that takes two parameters:

a string name
an integer x


Inside the function body of name_x_times(), create a while loop that will run as long as x is greater than 0.

3.
Inside the while loop, print name to the terminal.

How Parameters & Arguments Work
A function with parameters has a couple of requirements:

The function call must include the same number of arguments as there are parameters.
The corresponding arguments must be passed in the same order.
By calling a function with arguments, you are telling a function, “Hey function, when you execute, use these values where you have parameters in your definition.”

While it executes, anywhere the function comes across a parameter, it replaces the parameter with the corresponding argument you gave it.
*/

#include <iostream>

// Define name_x_times() below:
void name_x_times(std::string name, int number){
  while(number > 0){
    std::cout << name << "\n";
    number--;
  }
}

int main() {

  std::string my_name = "Joselin";
  int some_number = 5; // Change this if you like!
  // Call name_x_times() below with my_name and some_number
  name_x_times(my_name, some_number);

}
