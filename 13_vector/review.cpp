/*

Optional: Write a program to find the sum of even numbers and the product of odd numbers in a vector.

For example:

Suppose we have a vector that is {2, 4, 3, 6, 1, 9}.

Then the program should output:

Sum of even numbers is 12
Product of odd numbers is 27

*/

#include <iostream>
#include <vector>

int main () {
  std::vector<int> numbers = {2, 4, 3, 6, 1, 9}; 

  numbers.push_back(10);
  numbers.push_back(12);

  int sum_even = 0, sum_odd = 0; //very important the variable for avoid errors

  for(int i = 0; i < numbers.size(); i ++) {
    if(numbers[i]%2 == 0){
      sum_even = sum_even + numbers[i];
    } else {
      sum_odd = sum_odd + numbers[i];
    }
  }

  std::cout << "Sum of even numbers is " << sum_even << "\n";
  std::cout << "Product of odd numbers is " << sum_odd << "\n";
}
