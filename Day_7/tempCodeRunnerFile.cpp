#include <iostream>
#include <vector>
using namespace std;


bool Ispossible(vector<int>& arr, int n, int m,int mid){
    int studentcount = 1;
    int pagesum = 0;

    for(int i=0;i<n;i++){
        if ( pagesum + arr[i] <= mid){
            pagesum = pagesum + arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m || arr[i]>mid){
                return false;
            }
            pagesum = arr[i];
        }

    }
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    if(m>n){
        return -1;
    }
    
    int s =0;
    int sum =0;

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }

    int e=sum;
    int ans = -1;
    int mid = s+ (e-s)/2;
    
    while(s<=e){
        if (Ispossible(arr,n,m,mid)){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid +1;
        }
        mid = s+ (e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> arr ={10,20,30,40};
    cout<<findPages(arr,4,2);
    return 0;
}

