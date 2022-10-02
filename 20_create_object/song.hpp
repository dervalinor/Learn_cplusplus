#include <string>

// add the Song class here:
class Song {
  
  std::string title;

public:
  //file hpp we declare the method
  //and file cpp we difine the method as a function
  void add_title(std::string new_title);
  std::string get_title();
  
};
