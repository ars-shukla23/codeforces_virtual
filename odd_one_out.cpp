#include<iostream>
#include<vector>

using namespace std;

int oddoneout(vector<int>&nums){
    vector<int>vec(10,0);
    for(int i=0;i<3;i++){
        vec[nums[i]]++;
    }
    for(int i=0;i<10;i++){
        if(vec[i]==1){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>nums;
   for(int j=0;j<n;j++){ 
    vector<int>vec;
    for(int i=0;i<3;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    nums.push_back(vec);
   }
   for(vector<int>i:nums){
     cout<<oddoneout(i)<<endl;
   }
   
    return 0;
}