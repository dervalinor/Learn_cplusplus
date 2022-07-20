#include <iostream>

int main() {
/*
Logical Operator: II
The or logical operator is denoted by ||.

It returns true when the condition on the left is true or the condition on the right is true. Only one of them needs to be true.

Here’s the truth table:

a	b	a || b
false	false	false
false	true	true
true	false	true
true	true	true

Write the following if statement:

If day is equal to 6 or day is equal to 7, then print the word "Weekend".

*/

  int day = 6;

  if (day == 6 || day == 7) {
      std::cout << "Weekend. \n";
  }

}
