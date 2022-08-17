//now create a vector function where receive a integer number

#include <iostream>
#include <vector>

std::vector<int> create_vector(int num){
  
  std::vector<int> vektor = {2*num, 3*num, 4*num};

  return vektor;
}

int main(){
  
  int num;

  std::cout << "Integer: "; std::cin >> num;

  for(int element : create_vector(num)){
    std::cout << element << "\n"; 
  }
  
}
