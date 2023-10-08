#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> v){
    int n = v.size();
    
    int el;
    int count = 1;

    for(int i =0;i<v.size();i++){
        if(count ==0){
            el = v[i];
            count =1;
        }

        else if(v[i]==el){
            count++;
        }
        else count--;
    }

    int count1=0;
    for(int i = 0 ;i<n;i++){
        if(v[i]==el) count1++;
    }

    if(count1>n/2){
        return el;
    }
    return -1;
}

int main(){
    vector<int> a = {1,2,2,1,2,1,1,2,2,2,4,5,2,2,3,4,2,2,2,1};
    int ans = majorityElement(a);
    cout<<ans;
    return 0;
}