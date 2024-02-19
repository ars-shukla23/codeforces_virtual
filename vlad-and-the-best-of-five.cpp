#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

char charFreq(string s){
     int ca=0,cb=0;
     for(int i=0;i<5;i++){
       if(s[i]=='A') ca++;
       else{
          cb++;
       }
     }
     return (ca>cb)?'A':'B';
}


int main(){
   int cases;
   cin>>cases;
   while(cases>0){
    string s;
    cin>>s;
    cout<<charFreq(s)<<endl;
    cases--;
   }

    return 0;
}