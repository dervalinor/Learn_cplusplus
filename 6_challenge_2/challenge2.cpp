/*
The mad scientist Kelvin has mastered predicting the weather in his mountain-side meteorology lab.
Recently, Kelvin began publishing his weather forecasts on his website, however, there’s a problem: All of his forecasts describe the temperature in Fahrenheit degrees.
Let’s convert a temperature from Fahrenheit (F) to Celsius (C).
The formula is the following:

C=(F−32)/1.8

1.
First, google the current temperature of New York in Fahrenheit.
Declare a double variable named tempf and initialize it with the temperature.
Declare another double variable named tempc.

*/

#include <iostream>

int main(){

  double tempc, Fahrenheit;

  std::cout << "Temperature fahrenheit: "; std::cin >> Fahrenheit;
  tempc = (Fahrenheit - 32)/1.8; 
  std::cout << "Celsius temperature: " << tempc << std::endl; 

}
