#include <iostream>
#include <string.h>
#include "game.h"

using namespace std;
//Holds info for anything game related
game :: game() {
  
}

game :: ~game() {

}

void game :: setPublisher(string newpublisher) {
  publisher = newpublisher;
}

void game :: setRating(string newrating) {
  rating = newrating;
}

string game :: getPublisher() {
  return publisher;
}

string game :: getRating() {
  return rating;
}
