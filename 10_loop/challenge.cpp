/*
As an example of iteration, we have the first program ever to run on a 
stored-program computer (the EDSAC). It was written and run by David Wheeler in the computer 
laboratory at Cambridge University, England, on May 6th, 1948, to calculate and print a simple 
list of square like the following:

0   0
1   1
2   4
3   9
4   16
5   25
6   36
7   49
8   64
9   81
*/

#include <iostream>

int main () {

    
  int i = 0, square;

  while(i <= 9 ) {
    square = i*i;
    i++;
    std::cout << i - 1 << " " << square << std::endl;
  }

}
