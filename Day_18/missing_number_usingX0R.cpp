#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>&a, int N) {
    int xor1 = 0;
    int xor2 = 0;
    int ans;
    
    for(int i =0;i<a.size();i++){
        xor2=xor2^a[i];
        xor1 = xor1^(i+1);
    }
    xor1 = xor1^N;
    return xor1^xor2;
}

int main(){
    vector<int> a = {1,3,4,5};
    cout<<missingNumber(a,5);
    return 0;
}