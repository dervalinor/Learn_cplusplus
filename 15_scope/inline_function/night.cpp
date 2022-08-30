/*Move the very short definition of goodnight1() from night.cpp over to night.hpp (replacing the declaration).

Then add the inline keyword above the function and run the code. */

#include <string>


std::string goodnight2(std::string thing1, std::string thing2) {
  return "Goodnight, " + thing1 + " jumping over the " + thing2 + ".\n";
}
