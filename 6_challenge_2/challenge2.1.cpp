/*

Challenge: Temperature (Part 2)
Let’s go back to the temperature.cpp that we wrote. This time, instead of giving tempf a value of the current temperature in New York:

tempf = 83;
Let’s ask the user what the temperature is using cin!

*/

#include <iostream>

int main () {
  double tempf;
  double tempc;

  // Ask the user
  std::cout << ""

  tempc = (tempf - 32) / 1.8;

  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
}
