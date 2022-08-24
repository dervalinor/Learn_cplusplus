/*

Define a function is_palindrome() that takes:

An std::string parameter text.
The function should return:

true if text is a palindrome.
false if text is not a palindrome.
(A palindrome is any text that has the same characters backwards as it does forwards. For example, “hannah” and “racecar” are palindromes, 
while “menu” and “aardvark” are not.)

We will not test for edge cases such as capitalization or spaces.

*/

#include <iostream>
//The library below must be included for the reverse function to work
#include<bits/stdc++.h> 

// Define is_palindrome() here:

bool is_palindrome(std::string text){

  bool band;

  std::string textre = text;

  reverse(textre.begin(),textre.end()); 


  if(text == textre){
    band = true;
  } else {
    band = false;
  }

  return band;
}

int main() {

  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";

}
