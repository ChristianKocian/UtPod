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
    
    Song s1("Beatles", "Hey Jude", 7);
    int result = t.addSong(s1);
    cout << "adding song  to UtPod t" << endl;
    cout << "add result = " << result << endl;
    
    t.showSongList();
    cout << "^ Current song list" << endl;
          
    Song s2("Linking Park", "New Divide", 10);
    result = t.addSong(s2);
    cout << "adding song to UtPod t" << endl;
    cout << "add result = " << result << endl;
    
    t.showSongList();
    cout << "^ Current song list" << endl;
       
    Song s3("Eminem", "3 am", 20);
    result = t.addSong(s3);
    cout << "adding song to UtPod t" << endl;
    cout << "add result = " << result << endl;
       
    Song s4("Eminem", "Stan", 50);
    result = t.addSong(s4);
    cout << "adding song to UtPod t" << endl;
    cout << "add result = " << result << endl;
       
    Song s5("Jacob Lee", "Demons", 70);
    result = t.addSong(s5);
    cout << "adding song to UtPod t" << endl;
    cout << "add result = " << result << endl;
    
    t.showSongList();
    cout << "^ Current song list" << endl;
    
    result = t.removeSong(s2);
    cout << "removing song from UtPod t" << endl;
    cout << "delete result = " << result << endl;
  
    result = t.removeSong(s3);
    cout << "removing song from UtPod t" << endl;
    cout << "delete result = " << result << endl;

    t.showSongList();
    cout << "^ Current song list" << endl;
    
    result = t.removeSong(s1);
    cout << "removing song from UtPod t" << endl;
    cout << "delete result = " << result << endl;
 
    result = t.removeSong(s5);
    cout << "removing song from UtPod t" << endl;
    cout << "delete result = " << result << endl;
    
    result = t.removeSong(s4);
    cout << "removing song from UtPod t" << endl;
    cout << "delete result = " << result << endl;
    
    t.showSongList();
    cout << "^ Current song list" << endl;
    
    result = t.addSong(s5);
    cout << "adding song to UtPod t" << endl;
    cout << "add result = " << result << endl;
    
    t.showSongList();
    cout << "^ Current song list" << endl;
    
    cout << "memory remaining = " << t.getRemainingMemory() << endl;

    result = t.removeSong(s1);
    cout << "removing song from UtPod t" << endl;
    cout << "delete result = " << result <<endl;

    Song s6("overdoes", "grandson", 200);
    result = t.addSong(s6);
    cout << "adding song to UtPod t" << endl;
    cout << "add result = " << result << endl;
       
    Song s7("ego", "willy williams", 700);
    result = t.addSong(s7);
    cout << "adding song to UtPod t" << endl;
    cout << "add result = " << result << endl;
       
    Song s8("Slipknot", "Snuff", 66);
    result = t.addSong(s8);
    cout << "adding song to UtPod t" << endl;
    cout << "add result = " << result << endl;
   
    result = t.addSong(s8);
    cout << "adding song to UtPod t" << endl;
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

    t.sortSongList();
    cout << "list was sorted" << endl;
   
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
    
    UtPod k (333);
    cout << "inital memory for UtPod k is = " << k.getTotalMemory() << endl;

    UtPod f (666);
    cout << "inital memory for UtPod f is = " << f.getTotalMemory() << endl;

    UtPod j (-1); 
    cout << "inital memory for UtPod j is = " << j.getTotalMemory() << endl;
 
    UtPod l (0);
    cout << "inital memory for UtPod l is = " << l.getTotalMemory() << endl;

    k.showSongList();
    cout << "^ Current song list for UtPod k" << endl;

    k.shuffle();
    cout << "song list was shuffled" << endl;

    k.showSongList();
    cout << "^ Current song list for UtPod k" << endl;
    
    result = k.addSong(s6);
    cout << "add result = " << result << endl;

    k.showSongList();
    cout << "^ Current song list for UtPod k" << endl;

    k.shuffle();
    cout << "song list was shuffled" << endl;
    
    k.showSongList();
    cout << "^ Current song list for UtPod k" << endl;
    
    result = k.addSong(s7);
    cout << "add result = " << result << endl;
    
    k.showSongList();
    cout << "^ Current song list for UtPod k" << endl;

    k.shuffle();
    cout << "song list was shuffled" << endl;
    
    k.showSongList();
    cout << "^ Current song list for UtPod k" << endl;

    result = k.addSong(s3);
    cout << "add result = " << result << endl;
    
    k.showSongList();
    cout << "^ Current song list for UtPod k" << endl;

    k.sortSongList();
    cout << "list was sorted" << endl;

    k.showSongList();
    cout << "^ Current song list for UtPod k" << endl;
    
    k.shuffle();
    cout << "song list was shuffled" << endl;

    k.showSongList();
    cout << "^ Current song list for UtPod k" << endl;
    
    k.sortSongList();
    cout << "list was sorted" << endl;

    k.showSongList();
    cout << "^ Current song list for UtPod k" << endl;
    
    k.shuffle();
    cout << "song list was shuffled" << endl;

    k.showSongList();
    cout << "^ Current song list for UtPod k" << endl; 

    result = k.addSong(s2);
    cout << "add result = " << result << endl;
  
    result = k.addSong(s2);
    cout << "add result = " << result << endl;

    result = k.addSong(s1);
    cout << "add result = " << result << endl;

    k.showSongList();
    cout << "^ Current song list for UtPod k" << endl;
    
    k.shuffle();
    cout << "song list was shuffled" << endl;

    k.showSongList();
    cout << "^ Current song list for UtPod k" << endl; 

    k.sortSongList();
    cout << "list was sorted" << endl;

    k.showSongList();
    cout << "^ Current song list for UtPod k" << endl;
    
    cout << "memory remaining = " << k.getRemainingMemory() << endl;
    
    result = k.removeSong(s2);
    cout << "delete result = " << result <<endl;

    cout << "memory remaining = " << k.getRemainingMemory() << endl;
    
    result = k.removeSong(s2);
    cout << "delete result = " << result <<endl;

    cout << "memory remaining = " << k.getRemainingMemory() << endl;
    


}




