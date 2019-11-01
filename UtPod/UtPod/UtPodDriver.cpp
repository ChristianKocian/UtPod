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
    
    cout << endl;
    cout << "this is the start of the tests" << endl;
    cout << endl;

    UtPod t;
    
    Song s1("Beatles", "Hey Jude", 7);
    int result = t.addSong(s1);
    cout << "adding song Beatles, Hey Jude, 7MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;

    t.showSongList();
    cout << "^ current song list for UtPod t" << endl;
    cout << endl;
          
    Song s2("Linking Park", "New Divide", 10);
    result = t.addSong(s2);
    cout << "adding song Linkin Park, New Divide , 10MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;
    
    t.showSongList();
    cout << "^ current song list for UtPod t" << endl;
    cout << endl;
       
    Song s3("Eminem", "3 am", 20);
    result = t.addSong(s3);
    cout << "adding song Eminem, 3 am, 20MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;
       
    Song s4("Eminem", "Stan", 50);
    result = t.addSong(s4);
    cout << "adding song Eminem, Stan, 50MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;
       
    Song s5("Jacob Lee", "Demons", 70);
    result = t.addSong(s5);
    cout << "adding song Jacob Lee, Demons, 70MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;
    
    t.showSongList();
    cout << "^ current song list for UtPod t" << endl;
    cout << endl;
    
    result = t.removeSong(s2);
    cout << "removing song Linkin Park, New Divide, 10MB from UtPod t" << endl;
    cout << "delete result = " << result << endl;
    cout << endl;
  
    result = t.removeSong(s3);
    cout << "removing song Eminem, 3 am, 20MB from UtPod t" << endl;
    cout << "delete result = " << result << endl;
    cout << endl;

    t.showSongList();
    cout << "^ current song list for UtPod t" << endl;
    cout << endl;
    
    result = t.removeSong(s1);
    cout << "removing song Beatles, Hey Jude, 7MB from UtPod t" << endl;
    cout << "delete result = " << result << endl;
    cout << endl;
 
    result = t.removeSong(s5);
    cout << "removing song Jacob Lee, Demons, 70MB from UtPod t" << endl;
    cout << "delete result = " << result << endl;
    cout << endl;
    
    result = t.removeSong(s4);
    cout << "removing song Eminem, Stan, 50MB from UtPod t" << endl;
    cout << "delete result = " << result << endl;
    cout << endl;
    
    t.showSongList();
    cout << "^ current song list for UtPod t" << endl;
    cout << endl;
    
    result = t.addSong(s5);
    cout << "adding song Jacob Lee, Demons, 70MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;
    
    t.showSongList();
    cout << "^ current song list for UtPod t" << endl;
    cout << endl;
    
    cout << "memory remaining for UtPod t = " << t.getRemainingMemory() << endl;
    cout << endl;

    result = t.removeSong(s1);
    cout << "removing song Beatles, Hey Jude, 7MB from UtPod t" << endl;
    cout << "delete result = " << result <<endl;
    cout << endl;

    Song s6("grandson", "overdose", 200);
    result = t.addSong(s6);
    cout << "adding song overdose, grandson, 200MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;
       
    Song s7("willy williams", "ego", 700);
    result = t.addSong(s7);
    cout << "adding song ego, willy williams, 700MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;
       
    Song s8("Slipknot", "Snuff", 66);
    result = t.addSong(s8);
    cout << "adding song Slipknot, Snuff, 66 to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;
   
    Song s9("Slipknot", "Snuff", 86);
    result = t.addSong(s9);
    cout << "adding song Slipknot, Snuff, 86 to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;
    
    result = t.addSong(s8);
    cout << "adding song Slipknot, Snuff, 66 to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;

    t.showSongList();
    cout << "^ current song list for UtPod t" << endl;
    cout << endl;

    t.shuffle();
    cout << "song list for UtPod t was shuffled" << endl;
    cout << endl;

    t.showSongList();
    cout << "^ current song list for UtPod t" << endl;
    cout << endl;

    t.sortSongList();
    cout << "list was sorted for UtPod t" << endl;
    cout << endl;
   
    t.showSongList(); 
    cout << "^ current song list for UtPod t" << endl;
    cout << endl;

    t.clearMemory();
    cout << "all songs cleared from memory" << endl;
    cout << endl;

    t.showSongList();
    cout << "^ current song list for UtPod t" << endl;
    cout << endl;

    t.sortSongList();
    cout << "list was sorted for UtPod t" << endl;
    cout << endl;
   
    t.showSongList(); 
    cout << "^ current song list for UtPod t" << endl;
    cout << endl;

    result = t.addSong(s7);
    cout << "adding song willy williams, ego, 700MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;

    t.showSongList(); 
    cout << "^ current song list for UtPod t" << endl;
    cout << endl;
    
    t.sortSongList();
    cout << "list was sorted for UtPod t" << endl;
    cout << endl;
   
    t.showSongList(); 
    cout << "^ current song list for UtPod t" << endl;
    cout << endl;

    result = t.addSong(s5);
    cout << "adding song Jacob Lee, Demons, 70MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;

    result = t.addSong(s6);
    cout << "adding song overdose, grandson, 200MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;

    t.showSongList();
    cout << "^ current song list for UtPod t" << endl;
    cout << endl;
    
    cout << "memory remaining for UtPod t = " << t.getRemainingMemory() << endl;
    cout << endl;

    t.sortSongList();
    cout << "list was sorted for UtPod t" << endl;
    cout << endl;
   
    t.showSongList(); 
    cout << "^ current song list for UtPod t" << endl;
    cout << endl;
    
    UtPod k (333);
    cout << "inital memory for UtPod k is = " << k.getTotalMemory() << endl;
    cout << endl;

    UtPod f (666);
    cout << "inital memory for UtPod f is = " << f.getTotalMemory() << endl;
    cout << endl;

    UtPod j (-1); 
    cout << "inital memory for UtPod j is = " << j.getTotalMemory() << endl;
    cout << endl;
 
    UtPod l (0);
    cout << "inital memory for UtPod l is = " << l.getTotalMemory() << endl;
    cout << endl;

    k.showSongList();
    cout << "^ current song list for UtPod k" << endl;
    cout << endl;

    k.shuffle();
    cout << "song list for UtPod k was shuffled" << endl;
    cout << endl;

    k.showSongList();
    cout << "^ current song list for UtPod k" << endl;
    cout << endl;
    
    result = k.addSong(s6);
    cout << "adding song overdoes, grandson, 200MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;

    k.showSongList();
    cout << "^ current song list for UtPod k" << endl;
    cout << endl;

    k.shuffle();
    cout << "song list for UtPod k was shuffled" << endl;
    cout << endl;
    
    k.showSongList();
    cout << "^ current song list for UtPod k" << endl;
    cout << endl;
    
    result = k.addSong(s3);
    cout << "adding song Eminem, 3 am, 20MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;
    
    k.showSongList();
    cout << "^ current song list for UtPod k" << endl;
    cout << endl;

    k.shuffle();
    cout << "song list for UtPod k was shuffled" << endl;
    cout << endl;
    
    k.showSongList();
    cout << "^ current song list for UtPod k" << endl;
    cout << endl;

    result = k.addSong(s3);
    cout << "adding song Eminem, 3 am, 20MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;
    
    k.showSongList();
    cout << "^ Current song list for UtPod k" << endl;
    cout << endl;

    k.sortSongList();
    cout << "list was sorted for UtPod k" << endl;
    cout << endl;

    k.showSongList();
    cout << "^ current song list for UtPod k" << endl;
    cout << endl;
    
    k.shuffle();
    cout << "song list for UtPod k was shuffled" << endl;
    cout << endl;

    k.showSongList();
    cout << "^ current song list for UtPod k" << endl;
    cout << endl;
    
    k.sortSongList();
    cout << "list was sorted for UtPod k" << endl;
    cout << endl;

    cout << "^ current song list for UtPod k" << endl;
    cout << endl;
    
    k.shuffle();
    cout << "song list for UtPod k was shuffled" << endl;
    cout << endl;

    k.showSongList();
    cout << "^ current song list for UtPod k" << endl; 
    cout << endl;

    result = k.addSong(s2);
    cout << "adding song Linkin Park, New Divide , 10MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;
  
    result = k.addSong(s2);
    cout << "adding song Linkin Park, New Divide , 10MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;

    result = k.addSong(s1);
    cout << "adding song Beatles, Hey Jude, 7MB to UtPod t" << endl;
    cout << "add result = " << result << endl;
    cout << endl;

    k.showSongList();
    cout << "^ current song list for UtPod k" << endl;
    cout << endl;
    
    k.shuffle();
    cout << "song list for UtPod k was shuffled" << endl;
    cout << endl;

    k.showSongList();
    cout << "^ current song list for UtPod k" << endl; 
    cout << endl;

    k.sortSongList();
    cout << "list was sorted for UtPod k" << endl;
    cout << endl;

    k.showSongList();
    cout << "^ current song list for UtPod k" << endl;
    cout << endl;
    
    cout << "memory remaining for UtPod k = " << k.getRemainingMemory() << endl;
    cout << endl;
    
    result = k.removeSong(s2);
    cout << "removing song Linkin Park, New Divide, 10MB from UtPod t" << endl;
    cout << "delete result = " << result <<endl;
    cout << endl;

    cout << "memory remaining for UtPod k = " << k.getRemainingMemory() << endl;
    cout << endl;
    
    result = k.removeSong(s2);
    cout << "removing song Linkin Park, New Divide, 10MB from UtPod t" << endl;
    cout << "delete result = " << result <<endl;
    cout << endl;

    cout << "memory remaining for UtPod k = " << k.getRemainingMemory() << endl;
    cout << endl;
    
    

}




