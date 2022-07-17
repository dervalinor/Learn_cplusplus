#include <iostream>

int main() {
  
  /* 
   Optional: Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.

Write a space.cpp program that helps him keep track of his target weight by:

It should ask him what his earth weight is.
Ask him to enter a number for the planet he wants to fight on.
It should then compute his weight on the destination planet.
Here is the table of conversion:

#	Planet	Relative Gravity
1	Mercury	0.38
2	Venus	0.91
3	Mars	0.38
4	Jupiter	2.34
5	Saturn	1.06
6	Uranus	0.92
7	Neptune	1.19
   
   */
  double mass, weight, g;
  int planet;

  std::cout << "Planet: \n"; 
  std::cout << "1 Mercury" << std::endl;
  std::cout << "2 Venus" << std::endl;
  std::cout << "4 Jupiter" << std::endl;
  std::cout << "6 Uranus" << std::endl;
  std::cout << "7 Neptune" << std::endl;
  std::cout << "Choose:"; std::cin >> planet;
  std::cout << "Earth weight: "; std::cin >> mass;
  switch(planet){
      case 1: 
        g = 0.38;
        break;

      case 2: 
        g = 0.91;
        break;

      case 3: 
        g = 0.38;
        break;

      case 4: 
        g = 2.34;
        break;

      case 5:
        g = 1.06;
        break; 

      case 6:
        g = 0.92;
        break;

      case 7: 
        g = 1.19;
        break;

      default:
        std::cout << "No exist planet.\n";
        break; 
  }

  weight = mass*g;
  std::cout << "weight: " << weight << std::endl;
}
