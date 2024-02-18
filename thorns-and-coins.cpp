#include<iostream>
#include<string>

using namespace std;

int maxCoins(string s,int n){
    int stop=n-1;
    for(int i=1;i<n-1;i++){
        if(s[i]=='*' && s[i+1]=='*'){
              stop=i-1;
              break;
        }
    }
    int count=0;
    int i=0;
    while(i<=stop){
        if(s[i]=='@'){
            count++;
        }
        i++;
    }
    return count;
}


int main(){
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
        int len;
        string s;
        cin>>len>>s;
        cout<<maxCoins(s,len)<<endl;
     }


    return 0;
}