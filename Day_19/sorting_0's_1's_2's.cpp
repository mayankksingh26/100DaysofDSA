#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArray(vector<int> v){
    int n = v.size();
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(v[mid]==0){
            swap(v[low],v[mid]);
            low++;
            mid++;
        }
        else if(v[mid]==1){
            mid++;
        }
        else{
            swap(v[mid],v[high]);
            high--;
        }
    }
    return v;
}



int main(){
    vector<int> a = {1,2,0,1,2,0,1,2,0,1,2,0,2,0,1,2,0,2,0,2,0,2,1,1,1,0,0};
    vector<int> ans = sortArray(a);

    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}