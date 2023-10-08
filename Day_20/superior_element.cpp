#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> superiorElements(vector<int>&a) {
    int n = a.size();

    set<int> ans;
    

    ans.insert(a[n-1]);
    int i =n-1;
    int max = a[n-1];
    for(int j=n-2;j>=0;j--){
        for(int k=j;k<=n-1;k++){
            if(a[k]>a[i] && a[k]>max){
                ans.insert(a[k]);
                max = a[k];
            }
        }
    }

    vector<int> res(ans.begin(),ans.end());

    
    return res;

}

int main(){
    
    return 0;
}