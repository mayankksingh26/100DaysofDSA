#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
     vector<pair<int,int>>ans;
    
    
    if(n<2){
           ans.push_back(make_pair(-1,-1));
    return ans;
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(i==0 || arr[i]!=arr[i+1]){
        int k=target-arr[i];
        bool r=binary_search(arr.begin()+i+1,arr.end(),k);
        if(r==1){
            ans.push_back(make_pair(arr[i],k));
            cout<<arr[i]<<" "<<k<<endl;
            i++;
        }
        }  
    }
    if(ans.size()==0) {
        ans.push_back({-1,-1});
    }
    
    return ans;
    
    
}


int main(){
    vector<int>arr={1,2,2,1,2,1};
    int target=3;
    twoSum(arr,target,arr.size());
    return 0;
}