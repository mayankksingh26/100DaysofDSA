#include <iostream>
using namespace std;

void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<" ";
    }
}

void swap_adjacent(int a[],int n){
    int i=0;
    while(i+1<n){
        swap(a[i],a[i+1]);
        i+=2;
    }
}

int main(){
    int arr[100];
    int size;
    
    cout<<"Enter the size of array "<<endl;
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    swap_adjacent(arr,size);
    printarray(arr,size);


    return 0;
}