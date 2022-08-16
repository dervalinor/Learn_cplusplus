//create a vector function

#include <iostream>
#include <vector>

std::vector<int> create_vector(std::vector<int> vektor){
  return vektor;
}

int main(){
  
  std::vector<int> new_vector = {1, 2, 3};
  
  //show the elements of the vector
 for (int element : create_vector(new_vector)) {
    std::cout << element << "\n";
  }
  
}
