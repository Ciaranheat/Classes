#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
#include <string>

using namespace std;

class Media {
 public:
  Media();
  ~Media();

  string getType();
  string getTitle();
  string getYear();

  void setType(string);
  void setTitle(string);
  void setYear(string);

 private:
  string type;
  string title;
  string year;
};

#endif
