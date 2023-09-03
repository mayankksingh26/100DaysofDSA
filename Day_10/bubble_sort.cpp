#include <iostream>
using namespace std;

void Bubble_sort(int arr[],int n){
    bool swapped;
    for(int i = 0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
       if(swapped==false){
        break;
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
    Bubble_sort(arr,n);
    cout<<"Sorted array : ";
    print_array(arr,n);
    
    return 0;
}