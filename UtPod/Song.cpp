#include <string>
#include <iostream>
#include <fstream>
#include "Song.h"

using namespace std;

   Song::Song() { // default constructor required for creating the UtPod class.
   
      artist = "";
      title = "";
      size = 0;
   
   }

   Song::Song(string _artist, string _title, int _size) { // custom constructor for actual songs.
   
      artist = _artist;
      title = _title;
      size = _size;
   
   }
   
   string Song::getTitle() const { // access variable.
   
   return title; 

   }
   
   void Song::setTitle(string name) { // change variable.
   
      title = name;
   
   }
   
   string Song::getArtist() const { // access variable.

      return artist;

   }

   void Song::setArtist(string musician) { // change variable.
   
      artist = musician;
   
   }

   int Song::getSize() const { // access variable.

      return size;

   }

   void Song::setSize(int megaBytes) { // change variable.

      size = megaBytes;

   }

   bool Song::operator <(Song const &rhs) { // overloads to compare songs.
      
      if (artist.compare(rhs.artist) < 0) {

         return true;

      }
      
      if (artist.compare(rhs.artist) == 0 && title.compare(rhs.title) < 0) {
      
         return true;

      }
      
      if (artist.compare(rhs.artist) == 0 && title.compare(rhs.title) == 0 && size < rhs.size) { // checks all three parameters of a songs using compare function.
       
         return true;

      }
     
      return false;

   }

   bool Song::operator ==(Song const &rhs) { // checks if equal, for remove song primarily.

      return (title.compare(rhs.title) == 0 &&
              artist.compare(rhs.artist) == 0 &&
              size == rhs.size);

   }

   bool Song::operator >(Song const &rhs) { // same as above overload.

      if (artist.compare(rhs.artist) > 0) {

         return true;

      }
      
      if (artist.compare(rhs.artist) == 0 && title.compare(rhs.title) > 0) {
      
         return true;

      }
      
      if (artist.compare(rhs.artist) == 0 && title.compare(rhs.title) == 0 && size > rhs.size) {    
       
         return true;

      }
     
      return false;

   }

//   Song::~Song() {
//
//   }

//   void Song::swap(Song &s, Song &rhs) {

//      Song temp = s; // uses constructor to create identical temp song to current song. 
//      s = rhs; //replaces shit in s. rhs refers to the song attempting to swap with current song.
//      rhs = temp; //temp into rhs. completes swap of current and targeted songs.

//   }

   ostream& operator << (ostream& out, const Song &s) { // overloads print statement to print entire class all at once.

      out << s.getArtist() << " - " << s.getTitle() << " - " << s.getSize() << "MB";
      return out;  

   }


   


   
