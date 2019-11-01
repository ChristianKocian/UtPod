// Song.h

#ifndef SONG_H
#define SONG_H

#include <string>
#include <iostream>

using namespace std;

class Song {
      
  private:
   string title;
   string artist;
   int size;
 
  public:
   Song();
   Song(string artist, string title, int size); // constructor to set size title and artist.
   string getTitle() const; // access to private title.
   void setTitle(string name); // new value for private title.
   string getArtist() const; // access to private artist.
   void setArtist(string musician); // new value for private artist.
   int getSize() const; // access to private size.
   void setSize(int megaBytes); // new value for private size
   bool operator >(Song const &rhs); // overloads > to compare the whole class, returns true if left value is greater than right.
   bool operator ==(Song const &rhs); // overloads = to copare the whole class, returns true if all equal.
   bool operator <(Song const &rhs); // overloads < to compare the whole class, returns true if left value is smaller than right.
//   void swap(Song &s, Song &rhs); // swaps current song with target song.
//   ~Song(); // default destructor for class.
  
};

ostream& operator << (ostream& out, const Song &s); // overloads << to print entire class, returns the out operator.

#endif 
