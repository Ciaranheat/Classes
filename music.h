#include <iostream>
#include <string>
#include "media.h"

using namespace std;
//Makes everything public to media
class music : public Media {
 public:
  music();
  ~music();

  string getArtist();
  string getDuration();
  string getPublisher();

  void setArtist(string);
  void setDuration(string);
  void setPublisher(string);

 private:
  string artist;
  string duration;
  string publisher;
};
