#include<iostream>
#define M 5000005
using namespace std;
 
bool arr[M];
int val[M];
class SmoothNumbersHard{
  public:
  int countSmoothNumbers(int N, int k){
    int ans=0;
    for(int i=0; i<=N; i++)
      {arr[i]=true;val[i]=i;}
    
    for(int i=2; i<=N; i++)
      if(arr[i]){
        for(int j=i+i; j<=N; j+=i)
          {arr[j]=false;val[j]=i;}
      }
    for(int i=0; i<=N; i++)
      cout<<i<<':'<<val[i]<<' '<<arr[i]<<endl;  
    for(int i=1; i<=N; i++)
      if(val[i]<=k) ans++;
    return ans;  
  }
};
