#include <iostream>

/*
Arithmetic Operators

Here are some arithmetic operators:

+ addition
- subtraction
* multiplication
/ division
% modulo (divides and gives the remainder)

Separe operation with parentheses 

Examples: 

A = a*(b +c)

*/

int main() {
  int number1 = 10, number2 = 2, result;

  //operation of number1 and number2
  int result1 = number1 + number2;
  int result2 = number1 - number2;
  int result3 = number1*number2;
  int result4 = number1/number2;
  int result5 = number1%number2;
  std::cout << "Sum: ";
  std::cout << result1;
  std::cout << " \n";

  //or too:
  
  std::cout << "Substraction: " << result2 << " \n";
  std::cout << "Multiply: " << result3 << " \n";
  std::cout << "Division: " << result4 << " \n";
}
