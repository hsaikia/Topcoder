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

class EllysCoprimesDiv2 {
private:
	int gcd(int a, int b){
		if(b == 0)
			return a;
		else 
			return gcd(b, a%b);
	}
	int toInsert(int n1, int n2){
		if(gcd(n1, n2) == 1)
			return 0;
		for(int i = n1 + 1; i < n2; ++i){
			if(gcd(n1, i) == 1 && gcd(i, n2) == 1)
				return 1;
		}
		return 2;
	}
public:
   int getCount( vector <int> ns ) {
		sort(ns.begin(), ns.end());
		int ans = 0;
		for(int i = 0; i < ns.size() - 1; ++i){
			ans += toInsert(ns[i], ns[i+1]);
		}
		return ans;
	}
};

