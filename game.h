#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;
//Makes everything public to media
class game : public Media {
 public:
  game();
  ~game();

  string getPublisher();
  string getRating();

  void setPublisher(string);
  void setRating(string);

 private:
  string publisher;
  string rating;
  
};
