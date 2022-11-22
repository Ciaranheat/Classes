#include <iostream>
#include <string>
#include "media.h"

using namespace std;

Media :: Media () {

}

Media ::~ Media() {

}

string Media :: getType() {
  return type;
}

string Media :: getTitle() {
  return title;
}

string Media :: getYear() {
  return year;
}

void Media :: setType(string newtype) {
  type = newtype;
}

void Media :: setTitle(string newtitle) {
  title = newtitle;
}

void Media :: setYear(string newyear) {
  year = newyear;
}
