/*

instead of displaying those two lines in the output, edit the code so that we output the following pattern in the terminal:

       1
     2 3
   4 5 6
7 8 9 10

C++ is compile language (convert code in binary and excecute code)

When you program in C++, you mainly go through 4 phases during development:

Code — writing the program
Save — saving the program
Compile — compiling via the terminal
Execute — executing via the terminal

compile code 

g++ namefile.cpp
./a.out  --- show result in terminal

Compile and execute (Naming executables)

g++ namefile.cpp -o nameexcutable 

*/


#include <iostream>

int main(){
    
    std::cout << "       1 \n";
    std::cout << "     2 3 \n";
    std::cout << "   4 5 6 \n";
    std::cout << " 7 8 9 10 \n";

}
