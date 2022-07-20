#include <iostream>

int main () {

  
/* 

Logical Operator: !
The not logical operator is denoted by !.

It reverses the bool outcome of the expression that immediately follows.

Here’s the truth table:

a	!a
false	true
true	false

For instance:

( !true ) returns false
( !false ) returns true
( !(10 < 11) ) returns false

Write the following if statement:

If the user is !logged_in, then print the phrase "Try again".

*/

  bool logged_in = false;

  if(!logged_in) {
    std::cout << "Try again.\n";
  }

}
