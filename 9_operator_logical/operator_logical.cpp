#include <iostream>

int main () {

  /* 
   
Logical Operator: &&
The and logical operator is denoted by &&.

It returns true if the condition on the left and the condition on the right are both true. Otherwise, it returns false.

Here’s the truth table:

a	b	a && b
false	false	false
false	true	false
true	false	false
true	true	true

   */

  int hunger = true;
  int anger = true;

  // Write the code below:

  if ( hunger == true && anger == true ) {
      std::cout << "Hangry.\n";
  }

}
