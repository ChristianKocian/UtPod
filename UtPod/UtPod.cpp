//UtPod.cpp

#include <fstream>
#include <string>
#include <iostream>
#include "UtPod.h"
#include "Song.h"

using namespace std;

   UtPod::UtPod() {

      memSize = MAX_MEMORY;
      songs = NULL;

   }

   UtPod::UtPod(int size) {
// also include seed for random generator
      if (size >= MAX_MEMORY || size <= 0) {

         memSize = MAX_MEMORY;
 
      }

      memSize = size;
      songs = NULL;

   }

   int UtPod::addSong(Song const &s) {


      int left = getRemainingMemory();

      if (s.getSize() > left) {

         return NO_MEMORY;

      }

      SongNode *temp = new SongNode; // creates new SongNode and pointer to it. the node 
      temp -> s = s;
      temp -> next = NULL;

      if (songs == NULL) {
         
         songs = temp;

      } else {

         SongNode *p = songs; // 3 lines put new node into list at head of list, and set existing list after it.
         songs = temp;
         temp -> next = p;

      }

      return SUCCESS;

   }

   int UtPod::removeSong(Song const &s) {

      if (songs == NULL) {

//         cout << "list is empty, nothing to read" << endl;
         return NOT_FOUND; // not found since nothing is in the list.

      }

      SongNode *p = songs;

      while (p != NULL) { // search list for requested song, delete if found.

         if (p -> s == s) { // after finding it delete it then relink the list.
           
            if (p -> s == s && p == songs) {

               songs = songs -> next;
               delete p;
               return SUCCESS;

            }
 
            SongNode *prev = songs;

            while (prev -> next != p) { // loop to make prev one behind p.

               prev = prev -> next;

            } 

            // either the first or last element is getting fucked.            

            prev -> next = p -> next; // links the list again.
            delete p; // remove the node.
            return SUCCESS; // successfull removed song.

         }
         
         p = p -> next;

      }

      return NOT_FOUND; // not successfull removed song.

   }

   void UtPod::shuffle() {

      if (songs -> next == NULL) { // does nothing if only one song in list.
   
         return;

      }


   }

   void UtPod::showSongList() { 

      SongNode *p = songs;  
    
      while (p != NULL) {  //traverse list to print out each song, << overloaded to do so for song class.
     
         cout << p->s << endl;
         p = p->next;
         
      }
 
      return;
  
   }

   void UtPod::sortSongList() { // sorts from smallest to largrst.

      Song temp;
      
      if (songs -> next == NULL) { // does nothing if only one song in the list.
   
         return;

      }

      for (SongNode * prev = songs; prev != NULL; prev = prev -> next) { // this is the one that will stay farthest back that will actually swap with the smallest found value.

         for (SongNode *p = prev->next; p != NULL; p = p->next) { // this one will read each song in the list to see if its smaller than prev -> s. 
       
            if (prev -> s > p -> s && p != NULL) { // the double NULL in the if and for is just to make sure the last linked list doesnt seg fault.
   
                temp = prev -> s; // swaps the contents of the song if prev song is smaller than current song.
                prev -> s = p -> s;
                p -> s = temp;

            }   
    
         }  

      }

   return;

   }

   void UtPod::clearMemory() {

      if (songs == NULL) {

         return;

      }

      while (songs != NULL) { // should go through the entire linked list and delete all the songs until songs is NULL.

         SongNode *temp = songs;
         songs = songs -> next;
         delete temp;

      }

      return;

   }

   int UtPod::getRemainingMemory() { //will add up all the memory in list. subtract from memSize using getTotalMemory.

      int usedMem = 0;
      SongNode *p = songs;  
    
      while (p != NULL) {  //traverse list to print out each song, << overloaded to do so for song class.
         
         usedMem = usedMem + p -> s.getSize();
         p = p->next;

      }
      
   return getTotalMemory() - usedMem; // initial utpod memory minus used memory.

   }

   UtPod::~UtPod() {

      clearMemory();

   }




