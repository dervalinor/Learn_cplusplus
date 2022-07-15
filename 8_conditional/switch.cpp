#include <iostream>

int main () {

  /*we can write multiple outcomes 
  Let’s add 3 more cases right before default:

case 7 that outputs “Squirtle”
case 8 that outputs “Wartortle”
case 9 that outputs “Blastoise”
  */
  int number = 9;

  switch(number) {

    case 1 :
      std::cout << "Bulbusaur\n";
      break;//finish to execute code
    case 2 :
      std::cout << "Ivysaur\n";
      break;
    case 3 :
      std::cout << "Venusaur\n";
      break;
    case 4 :
      std::cout << "Charmander\n";
      break;
    case 5 :
      std::cout << "Charmeleon\n";
      break;
    case 6 :
      std::cout << "Charizard\n";
      break;

    case 7 : 
      std::cout << "Squirtle\n";
      break;

    case 8 : 
      std::cout << "Wartotle\n";
      break;

    case 9 :
      std::cout << "Blastoise\n";
      break;

    default ://in case of none case is true
      std::cout << "Unknown\n";
      break;

  }
}
