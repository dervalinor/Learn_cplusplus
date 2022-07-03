/*
Variable - name that represents a particular piece of your computer’s memory that has been set aside for you to store, retrieve, and use data.

Types of variables

int: integer numbers
double: floating-point numbers
char: individual characters
string: a sequence of characters
bool: true/false values

*/

#include <iostream>

int main (){
    //Declare Variable
   int year;

   //Initialize Variable
   year = 2022;

   //combining declare variable and initialize variable
   int month = 3;

   std::cout << "Year: " << year << std::endl; //endl - indicate jump line
   std::cout << "Day: " << month << std::endl;
}
