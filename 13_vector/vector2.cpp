#include <iostream>
#include <vector>

int main(){

  /*
Adding and Removing Elements
Often, we start with a vector that’s either empty or a certain length. As we read or compute data we want, we can grow the vector as needed.

.push_back()
To add a new element to the “back”, or end of the vector, we can use the .push_back() function.

For example, suppose we have a vector called dna with three letter codes of nucleotides:

std::vector<std::string> dna = {"ATG", "ACG"};
It would look like:

1

We can add elements using .push_back():

dna.push_back("GTG");
dna.push_back("CTG");
So now dna would look like:

2

.pop_back()
You can also remove elements from the “back” of the vector using .pop_back().

dna.pop_back();
Notice how nothing goes inside the parentheses.

The vector would now look like:

3

because CTG is removed!

Note: If you have programmed in other languages, be aware that .pop_back() has no return value in C++. 
  */
  std::vector<std::string> last_jedi;
  
  /*
Inside the code editor, we have a std::string vector.

Add these four strings using .push_back():

"kylo"
"rey"
"luke"
"finn" 
  */

  // Add characters here:
  
  
  last_jedi.push_back("kylo");
  last_jedi.push_back("rey");
  last_jedi.push_back("luke");
  last_jedi.push_back("finn");
  
  
  
  std::cout << last_jedi[0] << " ";
  std::cout << last_jedi[1] << " ";
  std::cout << last_jedi[2] << " ";
  std::cout << last_jedi[3] << " ";  


  /* 
The .size() function returns the number of elements in the vector.

For example, suppose we have a std::string vector with Sonny’s grocery list:

std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};

The string at index 0 is "Hot Pepper Jam".
The string at index 1 is "Dragon Fruit".
The string at index 2 is "Brussel Sprouts".
std::cout << grocery.size() << "\n";
will return

3
  */

  /*
Add a few more items to the grocery list using .push_back().

Print the size of grocery using .size().

Is it the same as you expected? 
   */

  std::cout << "\n";

  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    
  // Add more 
  
  grocery.push_back("Apple");
  std::cout << grocery.size() << "\n";



}
