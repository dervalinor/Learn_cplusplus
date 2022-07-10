/* Create a program that asks for a distance in miles as input. The program will then output how much that distance is in kilometers.
(You can also just run the code as is to move on.) */

#include <iostream>

int main(){

  double miles, kilm;

  std::cout << "Distance miles: "; std::cin >> miles;

  kilm = miles*1.609344;

  std::cout << "Distance kilometers: " << kilm << std::endl;
}
