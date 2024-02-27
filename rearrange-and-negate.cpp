#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int sumofArray(vector<int>vec){
    int sum=0;
    for(int i:vec){
        sum+=abs(i);
    }
    return sum;
}

int main(){
   int cases;
   cin>>cases;
   while(cases>0){
      int n;
      cin>>n;
      vector<int>vec(n);
      for(int i=0;i<n;i++){
          cin>>vec[i];
      }
      cout<<sumofArray(vec)<<endl;

    cases--;
   }



    return 0;
}