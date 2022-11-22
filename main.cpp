//Ciaran McErlean
//Period 6
//11/16/22
//Classes Project

#include <iostream>
#include <string>
#include <vector>
#include "music.h"
#include "movie.h"
#include "game.h"

using namespace std;

void addMedia(vector<Media*>* mediaList);
void searchMedia(vector<Media*>*mediaList);
void deleteMedia(vector<Media*>*mediaList);

//Askes user what they want to do
int main() {
  string in = " ";
  int i = 0;

  vector<Media*>* mediaList = new vector<Media*>;

  while(i == 0) {
    cout << "Enter a command: Add, Search, Delete or Quit" << endl;
    cin >> in;
    if (in == "ADD" || in == "Add" || in == "add") {
      addMedia(mediaList);
    }
    if (in == "SEARCH" || in == "Search" || in == "search") {
      searchMedia(mediaList);
    }
    if (in == "DELETE" || in == "Delete" || in == "delete") {
      deleteMedia(mediaList);
    }
    if (in == "QUIT" || in == "Quit" || in == "quit") {
      i = 1;
    }
  }
}

//Adds media to media list based on what the user inputs 
void addMedia(vector<Media*>*mediaList) {
  string input = "";
  string in;

  cout << "Enter a media type [Music,Game, or Movie]: ";
  cin >> input;
  cin.ignore();

  if (input == "MUSIC" || input == "Music" || input == "music") { //Adds Music
    music* m = new music();

    m -> setType("MUSIC");
    cout << "enter title: ";
    getline(cin, in);
    m -> setTitle(in);

    cout << "enter artist: ";
    getline(cin, in);
    m -> setArtist(in);

    cout << "enter year: ";
    getline(cin, in);
    m -> setYear(in);

    cout << "enter duration: ";
    getline(cin, in);
    m -> setDuration(in);

    cout << "enter publisher: ";
    getline(cin, in);
    m -> setPublisher(in);

    mediaList -> push_back((Media*)m);
    cout << "Music added" << endl << endl;
   
  }

  if (input == "MOVIE" || input == "Movie" || input == "movie") { //Adds Movie
    movie* b = new movie();

    b -> setType("MOVIE");
    cout << "enter title: ";
    getline(cin, in);
    b -> setTitle(in);

    cout << "enter director: ";
    getline(cin, in);
    b -> setDirector(in);

    cout << "enter year: ";
    getline(cin, in);
    b -> setYear(in);

    cout << "enter duration: ";
    getline(cin, in);
    b -> setDuration(in);

    cout << "enter rating: ";
    getline(cin, in);
    b -> setRating(in);

    mediaList -> push_back((Media*)b);
    cout << "Movie added" << endl << endl;
  }

  if (input == "GAME" || input == "Game" || input == "game") { //Adds Game
      game* g = new game();

      g -> setType("GAME");
      cout << "enter title: ";
      getline(cin, in);
      g -> setTitle(in);

      cout << "enter year: ";
      getline(cin, in);
      g -> setYear(in);

      cout << "enter publisher: ";
      getline(cin, in);
      g -> setPublisher(in);

      cout << "enter rating: ";
      getline(cin, in);
      g -> setRating(in);

      mediaList -> push_back((Media*)g);
      cout << "Game added" << endl << endl;
      
      
    }
    
  
}

//Searches media list based on title or year that the user wants and prints anything that mathes the title or year 
  void searchMedia(vector<Media*>* mediaList) {
    string in;
    string input;
    string inTitle = "";
    string inYear = "";

    cin.ignore();
    cout << "Search by either title or year {enter a 1 for title and a 2 for year]? ";
    getline(cin, in);

    if (in == "1") {
      cout << "Enter Title: ";
      getline(cin, inTitle);
    }
    if (in == "2") {
      cout << "Enter Year: ";
      getline(cin, inYear);
    }

    string type;
    for (vector<Media*> :: iterator v = mediaList -> begin(); v <  mediaList -> end(); v++){
      type = (*v) -> getType();//Gets the type based on input from user 

      if (type == "MUSIC") {
	music* m = (music*)(*v);

	if(m -> getTitle() == inTitle || m -> getYear() == inYear) {
	  cout << "MUSIC: " << m -> getTitle() << ", " << m -> getArtist() << ", " << m -> getYear() << ", " << m -> getDuration() << ", " << m -> getPublisher() << endl;
	}
      }
      if (type == "MOVIE") {
	movie* b = (movie*)(*v);

	if(b -> getTitle() == inTitle || b -> getYear() == inYear) {
	  cout << "MOVIE: " << b -> getTitle() << ", " << b -> getDirector() << ", " << b -> getYear() << ", " << b -> getDuration() << ", " << b -> getRating() << endl;
	}
      }

      if (type == "GAME") {
	game* g = (game*)(*v);

	if(g -> getTitle() == inTitle || g -> getYear() == inYear) {
	  cout << "GAME: " << g -> getTitle() << ", " << g -> getYear() << ", " << g -> getPublisher() << ", " << g -> getRating() << endl;
	}
	}
      }
    cout << endl;
  }

//Esentually just uses search's code but deletes the code instead of printing it out for the user 
void deleteMedia(vector<Media*>* mediaList) {
  string in;
  string inYear;
  string inTitle;
  string yn;
  string type;

  cin.ignore();
  cout << "Search by either title or year? [1 for title, 2 for year]: "; 
  getline(cin, in);

  if (in == "1") {
    cout << "Enter title: ";
    getline(cin, inTitle);
  }
  if (in == "2") {
    cout << "Enter year: ";
    getline(cin, inYear);
  }

  for (vector<Media*> :: iterator v = mediaList -> begin(); v < mediaList -> end(); v++) {
      type = (*v) -> getType();

      if (type == "MUSIC") {
	music* m = (music*)(*v);
	cout << "MUSIC: " << m -> getTitle() << ", " << m -> getArtist() << ", " << m -> getYear() << ", " << m -> getDuration() << ", " << m -> getPublisher() << endl;
      }

      if (type == "MOVIE") {
	movie* b = (movie*)(*v);
	cout << "MOVIE: " << b -> getTitle() << ", " << b -> getDirector() << ", " << b -> getYear() << ", " << b -> getDuration() << ", " << b -> getRating() << endl;
      }

      if (type == "GAME") {
	game* g = (game*)(*v);
	cout << "GAME: " << g -> getTitle() << ", " << g -> getYear() << ", " << g -> getPublisher() << ", " << g -> getRating() << endl;
      }

      cout << "Are your sure you want to delete this [Y/N]? " << endl;

      cin >> yn;
      cin.ignore();

      if (yn == "Y") {
	delete (*v);
	mediaList -> erase(v);
	v--;

	cout << "Media deleted" << endl;
      }
    }
  cout << endl;
}

