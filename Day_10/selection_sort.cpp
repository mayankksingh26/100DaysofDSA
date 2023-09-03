#include <iostream>
using namespace std;

void Selection_sort(int arr[],int n){
    
    for(int i=0;i<n-1;i++){
        
        int minIndex = i;

        for(int j=i+1;j<n;j++){
            
            if(arr[j]<arr[minIndex]){
                minIndex=j;
                swap(arr[i],arr[minIndex]);
            }
        }
    }    
}

void print_array(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Selection_sort(arr,n);
    cout<<"Sorted array : ";
    print_array(arr,n);
    
    return 0;
}