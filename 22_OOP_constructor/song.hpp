/*
1.
Declare a public constructor for Song in song.hpp. Give it two std::string parameters:

new_title
new_artist
Then define the constructor inside song.cpp. Initialize title to new_title and artist to new_artist.


Stuck? Get a hint
2.
Hmm… a song probably only needs to be given a title and artist once. Now that you can set those attributes with a constructor, go ahead and remove .add_title() and .add_artist() from song.hpp and song.cpp.

3.
Let’s try out your new constructor!

In main(), instantiate a new Song called back_to_black. Give it:

a title of "Back to Black"
an artist of "Amy Winehouse"
(You can print out each attribute of back_to_black using .get_title() and .get_artist().)

*/


#include <string>

class Song {
  
  std::string title;
  std::string artist;

public:
  // Add a constructor here:
  Song(std::string new_title,std::string new_artist);
  std::string get_title();
  std::string get_artist();  
};
