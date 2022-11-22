#include <iostream>
#include <string.h>
#include "movie.h"

using namespace std;
//Holds the info for anything movie
movie :: movie() {

}

movie :: ~movie() {

}

void movie :: setDirector(string newdirector) {
  director = newdirector; 
}

void movie :: setDuration(string newduration) {
  duration = newduration;
}

void movie :: setRating(string newrating) {
  rating = newrating;
}

string movie :: getDirector() {
  return director;
}

string movie :: getDuration() {
  return duration;
}

string movie :: getRating () {
  return rating;
}
