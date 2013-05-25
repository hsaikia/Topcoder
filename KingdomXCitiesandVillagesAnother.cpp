#include<iostream> 
#include<vector> 
#include<cstdio> 
#include<string> 
#include<cmath> 
using namespace std; 
class KingdomXCitiesandVillagesAnother{ 
public: 
  double determineLength(vector <int> cityX, vector <int> cityY, vector <int> villageX, vector <int> villageY){ 
    double ret = 0.0; 
    while(villageX.size() > 0){ 
      double closest = 1E16; 
      int vil_index = -1; 
      for(int i=0; i<villageX.size(); i++) 
      for(int j=0; j<cityX.size(); j++){ 
        double x_dist = (double)(cityX[j] - villageX[i]); 
        double y_dist = (double)(cityY[j] - villageY[i]); 
        double dist = sqrt(x_dist*x_dist + y_dist*y_dist); 
        if(closest - dist > 1E-9){ 
          closest = dist; 
          vil_index = i;  
        } 
      } 
      ret += closest; 
      cityX.push_back(villageX[vil_index]); 
      cityY.push_back(villageY[vil_index]); 
      villageX.erase(villageX.begin()+vil_index); 
      villageY.erase(villageY.begin()+vil_index); 
    } 
    return ret; 
  } 
};
