/* utPod_driver.cpp
Demo Driver for the UtPod.

Roger Priebe
EE 312 10/16/18

This is a basic driver for the UtPod.

You will want to do more complete testing.

*/
#include <fstream>
#include <cstdlib>
#include <iostream>
#include "Song.h"
#include "UtPod.h"

using namespace std;

int main(int argc, char *argv[]) {

    UtPod t;
    
    Song s1("Beatles", "Hey Jude1", 4);
    int result = t.addSong(s1);
    cout << "add result = " << result << endl;
    
    t.showSongList();
    cout << "^ Current song list" << endl;
          
    Song s2("Beatles", "Hey Jude2", 5);
    result = t.addSong(s2);
    cout << "add result = " << result << endl;
    
    t.showSongList();
    cout << "^ Current song list" << endl;
       
    Song s3("Beatles", "Hey Jude3", 6);
    result = t.addSong(s3);
    cout << "add result = " << result << endl;
       
    Song s4("Beatles", "Hey Jude4", 7);
    result = t.addSong(s4);
    cout << "add result = " << result << endl;
       
    Song s5("Beatles", "Hey Jude5", 241);
    result = t.addSong(s5);
    cout << "add result = " << result << endl;
    
    t.showSongList();
    cout << "^ Current song list" << endl;
    
    result = t.removeSong(s2);
    cout << "delete result = " << result << endl;
  
    result = t.removeSong(s3);
    cout << "delete result = " << result << endl;

    t.showSongList();
    cout << "^ Current song list" << endl;
    
    result = t.removeSong(s1);
    cout << "delete result = " << result << endl;
 
    result = t.removeSong(s5);
    cout << "delete result = " << result << endl;
    
    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;
    
    
    t.showSongList();
    cout << "^ Current song list" << endl;
    
    result = t.addSong(s5);
    cout << "add result = " << result << endl;
    
    t.showSongList();
    cout << "^ Current song list" << endl;
    
    cout << "memory remaining = " << t.getRemainingMemory() << endl;

    result = t.removeSong(s1);
    cout << "delete result = " << result <<endl;

    Song s6("eatles", "Hey Dude3", 60);
    result = t.addSong(s6);
    cout << "add result = " << result << endl;
       
    Song s7("Beatles", "Hey Dude4", 17);
    result = t.addSong(s7);
    cout << "add result = " << result << endl;
       
    Song s8("Featles", "Hey Dude5", 241);
    result = t.addSong(s8);
    cout << "add result = " << result << endl;
   
    result = t.addSong(s8);
    cout << "add result = " << result << endl;

    t.showSongList();
    cout << "^ Current song list" << endl;

    t.sortSongList();
    cout << "list was sorted" << endl;
   
    t.showSongList(); 
    cout << "^ Current song list" << endl;

    t.clearMemory();
    cout << "all songs cleared from memory" << endl;

    t.showSongList();
    cout << "^ Current song list" << endl;

    result = t.addSong(s7);
    cout << "add result = " << result << endl;

    t.showSongList(); 
    cout << "^ Current song list" << endl;
    
    t.sortSongList();
    cout << "list was sorted" << endl;
   
    t.showSongList(); 
    cout << "^ Current song list" << endl;

    result = t.addSong(s7);
    cout << "add result = " << result << endl;

    result = t.addSong(s6);
    cout << "add result = " << result << endl;

    t.showSongList();
    cout << "^ Current song list" << endl;
    
    cout << "memory remaining = " << t.getRemainingMemory() << endl;

    t.sortSongList();
    cout << "list was sorted" << endl;
   
    t.showSongList(); 
    cout << "^ Current song list" << endl;
    



}




