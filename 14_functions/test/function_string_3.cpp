//reverse a string

#include <iostream>

std::string reverse_string(std::string text){

  std::string reverse;
  int j = text.size() - 1;

  for(int i = 0; i < text.size(); i ++){
    reverse[i] = text[j];
    j--;  
  }

  return reverse;
}

int main(){

  std::string word;

  std::cout << "Word: "; std::cin >> word;

  std::cout << reverse_string(word) << "\n";
}
