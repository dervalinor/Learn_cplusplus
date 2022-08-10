/*
 solution for ax^2 + bx + c = 0
*/

#include <iostream>
#include <cmath>

void solution_quadratic(double a, double b, double c){
  
  double x1, x2;

  x1 = (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a);
  x2 = (-b - sqrt(pow(b, 2) - 4*a*c))/(2*a);
  

  std::cout << "x = (-" << b << " +- " << "sqrt(" << pow(b, 2) - 4*a*c << ")" << ")" << "/" << "(" << 2*a <<") \n";
  std::cout << "x = (-" << b << " +- " << sqrt(pow(b, 2) - 4*a*c) << ")" << "/" << "(" << 2*a <<") \n";
  std::cout << "x1: " << x1 << "\n";
  std::cout << "x2: " << x2 << "\n";

}

int main(){

  double a, b, c;

  std::cout << "Solution ax^2 + bx + c = 0 \n";
  std::cout << "\n";
  std::cout << "a: "; std::cin >> a;
  std::cout << "b: "; std::cin >> b;
  std::cout << "c: "; std::cin >> c;

  solution_quadratic(a, b, c);
}
