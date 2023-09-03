#include <iostream>
using namespace std;

void Insertion_sort(int arr[],int n){
    
    int key;

    for(int i=1;i<n;i++){

        key=arr[i];
        int j=i-1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = key;

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
    Insertion_sort(arr,n);
    cout<<"Sorted array : ";
    print_array(arr,n);
    
    return 0;
}