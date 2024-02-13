#include<iostream>
#include<string>

using namespace std;

string smallest_word(int num){
    int x;
    
  if(num>=3 && num<=28){
      x=num-2;
      char c=x+96;
      string s="aa";
      s.push_back(c);
      return s;
  }
  else if(num>28 && num<=53){
    x=num-27;
    char c=x+96;
    string s="a";
    s.push_back(c);
    s.push_back('z');
    return s;
  }
  else{
    x=num-52;
    char c=x+96;
    string s="";
    s.push_back(c);
    s.push_back('z');
    s.push_back('z');
    return s;
  }
  return "";
}


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        cout<<smallest_word(num)<<endl;
    }


    return 0;
}