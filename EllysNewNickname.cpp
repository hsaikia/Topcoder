// Paste me into the FileEdit configuration dialog

#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iostream>
#include <string>
#include <climits>
#include <vector>
#include <set>
#include <sstream>
#include <algorithm>
using namespace std;

class EllysNewNickname {
public:
   int getLength( string nickname ) {
		int ans = 0;
		bool last = false;
		for(int i = 0; i < nickname.size(); ++i){
			if(nickname[i] == 'a' || nickname[i] == 'e' || nickname[i] == 'i' || nickname[i] == 'o' || nickname[i] == 'u' || nickname[i] == 'y'){
				if(!last)
					ans++;
				last = true;
			} else {
				ans++;
				last = false;
			}
		}
		return ans;
   }
};

