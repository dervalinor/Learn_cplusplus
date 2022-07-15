#include <iostream>

int main() {
  /*
Show more outcomes use "else if"

if (condition) {

  some code

} else if (condition) {

  some code

} else {

  some code

}

1.
In chemistry, pH is a scale used to specify the acidity or basicity of an aqueous solution.

Write an if, else if, else statement that:

If ph is greater than 7, output “Basic”.
If ph is less than 7, output “Acidic”.
If neither, output “Neutral”.
Remember to take a look at the hint if you are stuck.

  */

  double ph = 4.6;

  if (ph > 7 ){
    std::cout << "Basic.\n";
  } 
  else if (ph < 7){
    std::cout << "Acidic.\n";
  } 
  else {
    std::cout << "Neutral.\n";
  }

}
