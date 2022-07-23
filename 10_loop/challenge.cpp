/*
As an example of iteration, we have the first program ever to run on a 
stored-program computer (the EDSAC). It was written and run by David Wheeler in the computer 
laboratory at Cambridge University, England, on May 6th, 1948, to calculate and print a simple 
list of squares like the following:

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

    
  int n = 0, squares;

  while(n <= 9 ) {
    squares = n*n;
    n++;
    std::cout << n - 1 << " " << squares << std::endl;
  }

}
