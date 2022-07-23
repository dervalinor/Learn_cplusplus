#include <iostream>

int main () {
  // repeats some code or a set of instructions until a specified condition is reached
  //iterate - repeat a action
  //loop c++: while and for

  int guess;

  int tries = 0;

  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;

  //while loop: over and over again, as long as the condition is true
  while (guess != 8 && tries < 50) {
 
  std::cout << "Wrong guess, try again: ";
  std::cin >> guess;
 
  tries++;
 
  }

  if (guess == 8) {
    
    std::cout << "You got it!\n";
  
  }  

}
