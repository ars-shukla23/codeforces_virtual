#include<iostream>
#include<string>
#include<vector>



using namespace std;

int multipleof3(vector<int>vec){
    int moves=0;
    int sum=0;
    for(int i:vec){
        sum+=i;
    }
    if(sum%3==0){
        return 0;
    }
    else if(sum%3==2){
        return 1;
    }
    else{
        for(int i:vec){
            if(i%3==1){
                return 1;
            }
        }
        return 2;
    }
    return -1;
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
        cout<<multipleof3(vec)<<endl;


        cases--;
     }



    return 0;
}