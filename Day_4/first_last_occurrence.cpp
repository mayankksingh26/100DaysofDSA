#include <iostream>
using namespace std;

int firstOccur(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else
        s=mid+1;

        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOccur(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(arr[mid]==k){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else
        s=mid+1;

        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[5]={0,1,1,1,3};
    cout<<"First Occurrence : "<<firstOccur(arr,5,1)<<endl;
    cout<<"Last Occurrence : "<<lastOccur(arr,5,1);

    return 0;
}