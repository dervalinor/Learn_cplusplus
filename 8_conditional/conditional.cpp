#include <iostream>

int main() {
  //conditional: it use to make decision by evaluating conditional
  /*
   We’ll be covering the following concepts:

  if, else if, and else statements
  switch statements
  Relational operators
  Logical operators

if (condition) {

  some code

}

To have a condition, we need relational operators:

== equal to
!= not equal to
> greater than
< less than
>= greater than or equal to
<= less than or equal to

  */
  // Create a number that's 0 or 1
  
  srand (time(NULL));
  int	coin = rand() % 2;
  
  // If number is 0: Heads
  // If it is not 0: Tails
  
  if (coin == 0) {
  
    std::cout << "Heads\n";
  
  }
	else { //case of condition is false
	
    std::cout << "Tails\n";
  
  }
  
}
