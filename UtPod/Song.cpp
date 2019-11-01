#include <string>
#include <iostream>
#include <fstream>
#include "Song.h"

using namespace std;

   Song::Song() {
   
      title = "";
      artist = "";
      size = 0;
   
   }

   Song::Song(string _title, string _artist, int _size) {
   
      title = _title;
      artist = _artist;
      size = _size;
   
   }
   
   string Song::getTitle() const { 
   
   return title; 

   }
   
   void Song::setTitle(string name) {
   
      title = name;
   
   }
   
   string Song::getArtist() const {

      return artist;

   }

   void Song::setArtist(string musician) {
   
      artist = musician;
   
   }

   int Song::getSize() const {

      return size;

   }

   void Song::setSize(int megaBytes) {

      size = megaBytes;

   }

   bool Song::operator <(Song const &rhs) {
      
      if (title.compare(rhs.title) < 0) {

         return true;

      }
      
      if (title.compare(rhs.title) == 0 && artist.compare(rhs.artist) < 0) {
      
         return true;

      }
      
      if (title.compare(rhs.title) == 0 && artist.compare(rhs.artist) == 0 && size < rhs.size) {    
       
         return true;

      }
     
      return false;

   }

   bool Song::operator ==(Song const &rhs) {

      return (title.compare(rhs.title) == 0 &&
              artist.compare(rhs.artist) == 0 &&
              size == rhs.size);

   }

   bool Song::operator >(Song const &rhs) {

      if (title.compare(rhs.title) > 0) {

         return true;

      }
      
      if (title.compare(rhs.title) == 0 && artist.compare(rhs.artist) > 0) {
      
         return true;

      }
      
      if (title.compare(rhs.title) == 0 && artist.compare(rhs.artist) == 0 && size > rhs.size) {    
       
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

   ostream& operator << (ostream& out, const Song &s) {

      out << s.getTitle() << " - " << s.getArtist() << " - " << s.getSize();
      return out;  

   }


   


   
