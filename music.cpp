#include <iostream>
#include <string>
#include "music.h"

using namespace std;
//Holds the information for anything music
music :: music() {
  
}

music :: ~music() {
  
}

void music :: setArtist(string newartist) {
  artist = newartist;
}

void music :: setDuration(string newduration) {
  duration = newduration;
}

void music :: setPublisher(string newpublisher) {
  publisher = newpublisher;
}

string music :: getArtist() {
  return artist;
}

string music :: getDuration() {
  return duration;
}

string music :: getPublisher() {
  return publisher;
}
