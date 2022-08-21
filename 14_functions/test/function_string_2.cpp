//show the elements of a string

#include <iostream>
#include <string> //https://www.tutorialspoint.com/cplusplus/cpp_strings.htm
                  //text.size() 

//define function to display elements of the string
char display_letter(int i, std::string text){//yes, char function is the
                                             //solution
   return text[i];
}

int main(){

  std::string word;
  
  std::cout << "Word: "; std::cin >> word;
  std::cout << "Letter: " << display_letter(2, word) << "\n";
   
}
