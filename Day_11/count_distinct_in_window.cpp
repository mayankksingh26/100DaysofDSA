#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int distinct(vector<int> & arr)
{
    int len = arr.size();
    
    // declaring a set container using STL
    set<int> S;
    for (int i = 0; i < len; i++) {
        S.insert(arr[i]);
    }
    
    int ans = S.size();
    return ans;
}

void print(vector<int> & arr){
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr = { 1,2,1,3,4,2,3};
    vector<int> ans;
    int k =3;
    int w = arr.size()-k+1;

    for( int i=0;i<w;i++){
        int count;
        
        vector<int>res;
        for(int j=i;j<k+i;j++){
           
        res.push_back(arr[j]);
        // print(res);
        }
        int a=distinct(res);
        ans.push_back(a);
        
    }
    print(ans);

    
    
    return 0;
}
  //    int l = sizeof(res) / sizeof(int);
        //    int a = distinct(res,l);    



        //optimal code

//         vector<int> ans;

// unordered_map<int,int>mp;

// for(int i=0;i<arr.size();i++){

// mp[arr[i]]++;

// if(i>=k-1){

// ans.push_back(mp.size());

// if(--mp[arr[i-k+1]]==0)mp.erase(arr[i-k+1]);//if its freq is 0 remove it from map

// }

// }

// return ans;