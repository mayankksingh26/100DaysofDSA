#include <iostream>
using namespace std;

int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else
        e=mid;

        mid=s+(e-s)/2;
    }
    return s;
}

int binary_search(int a[],int s,int e,int k){
    int start=s;
    int end=e;
   int mid= start + (end-start)/2;
    
    while(start<=end){
    // smart approach to minimize big array TLE problem

    // int mid= (start+end)/2;
        if(a[mid]==k){
            return mid;
        }
        if(a[mid]>k){
            end=mid-1;
        }
        else{        
            start=mid+1;
            }
        mid= start + (end-start)/2;
    }
    return -1;
}

int search(int* arr, int n, int key) {
    int pivot = getPivot(arr,n);
     if(key>=arr[pivot] && key<=arr[n-1]){
         return binary_search(arr,pivot,n-1,key);
     }
    else
    {
        return binary_search(arr,0,pivot-1,key);
}
}

int main(){
    // int arr[]={2,5,-3,0};
    // int pivot=getPivot(arr,4);
    // cout<<pivot;
    // int key=5;
    // cout<<binary_search(arr,0,pivot-1,key);
}