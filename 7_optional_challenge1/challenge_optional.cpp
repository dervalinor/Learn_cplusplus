/*
1.
Optional:

Use the open space in review.cpp to practice what you learned about variables. Here are some ideas:

Create a program that takes in the weight of an item and then calculates how much that item would weigh on Mars.

*/

#include <iostream>

int main () {
  double weigh_mars, mass;
  
  std::cout << "Mass: "; std::cin >> mass;
  weigh_mars = mass*3.72076;
  std::cout << "Weight on Mars: " << weigh_mars << std::endl;  
}
