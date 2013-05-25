#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>
#include <climits>
#include <vector>
using namespace std;
 
class PenguinPals {
public:
   int findMaximumMatching( string colors ) {
  int count = 0;
  string c = colors;
  while(c.size() != 0){
      //cout << c << " " << count << endl;
      if(c.find("RR") != string::npos){
    size_t index = c.find("RR");
    c.erase(index, 2);
    count++;
    continue;
      } else if ( c.find("BB") != string::npos){
    size_t index = c.find("BB");
    c.erase(index, 2);
    count++;
    continue;
      } else if(c.size() >= 2 && c[0] == c[c.size() - 1]){
    c.erase(c.size() - 1, 1);
    c.erase(0, 1);
    count++;
    continue;
      } else {
    if(c.size() >= 4){
        c.erase(0,3);
        count++;
    } else 
        break;
      }
  }
      return count;
    }
};
