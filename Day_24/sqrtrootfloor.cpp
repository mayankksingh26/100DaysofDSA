#include <iostream>
using namespace std;

int sqrtflr(int n){
    int s = 1;
    int e  = n;

    while(s<=e){
        int mid = (s+e)/2;
        int val = (mid*mid);

        if(val<=n){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return e;
}

int main(){
    
    cout<<sqrtflr(1000);
    return 0;
}