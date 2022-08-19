//create a string function return other string

#include <iostream>

//define string function
std::string greenting(std::string text){
  
  std::string greenting = "Hello " + text; // + add strings

  return greenting;
}

int main(){

  std::string name;

  std::cout << "Your name: "; std::cin >> name;

  std::cout << greenting(name) << "\n";
  
}
