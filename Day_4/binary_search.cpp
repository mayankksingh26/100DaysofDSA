#include <iostream>
using namespace std;

void print_array(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int binary_search(int a[],int n,int k){
    int start=0;
    int end=n-1;
    int mid;
    
    while(start<=end){
    // smart approach to minimize big array TLE problem
    int mid= start + (end-start)/2;
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
    
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[100];
    cout<<"Enter elements in array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // print_array(arr,n);
    int k;
    cout<<"Enter value you want to search"<<endl;
    cin>>k;
    int ans=binary_search(arr,n,k);
    cout<<k<<" is present at "<<ans<<" position in array"<<endl;


    return 0;
}