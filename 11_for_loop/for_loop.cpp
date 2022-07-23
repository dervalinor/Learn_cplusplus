/* for loop: iterate a variable

Incrementing for loop:

for (int i = 0; i < 20; i++) 
{
  // Statements
}
Decrementing for loop:

for (int i = 20; i > 0; i--) 
{
  // Statements
}

*/

#include <iostream>

int main () {

/*
Write a 99bottles.cpp program that prints the verses of the “99 Bottles” song. Each stanza goes something like this:

i bottles of pop on the wall.
Take one down and pass it around.
i-1 bottles of pop on the wall.
*/

  for(int i = 99; i > 0; i --) {

    if(i == 99){
      std::cout << i << " bottles of pop on the wall.\n";
    }
    std::cout << "Take one down and pass it around.\n"; 
    std::cout << i - 1 << " bottles of pop on the wall.\n";

  }

}
