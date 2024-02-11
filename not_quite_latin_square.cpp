#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

char latinSquare(vector<vector<char>>&matrix){
   unordered_map<char,int>map;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            map[matrix[i][j]]++;
        }
    }
    for(auto it:map){
        if(it.second==2){
            return it.first;
        }
    }
    return 'D';
}


int main(){
   int n;
   cin>>n;
   vector<vector<vector<char>>>squares;
   for(int i=0;i<n;i++){
     vector<vector<char>>matrix;
     for(int i=0;i<3;i++){
        vector<char>vec;
        for(int j=0;j<3;j++){
           char c;
           cin>>c;
           vec.push_back(c);
        }
        matrix.push_back(vec);
     }
     squares.push_back(matrix);
   }
   for(vector<vector<char>>i:squares){
        cout<<latinSquare(i)<<endl;
   }




    return 0;
}