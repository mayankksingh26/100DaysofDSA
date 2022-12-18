#include <iostream>
using namespace std;

void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i] <<" ";
    }
}

void reverse_array(int a[],int n){
    int start=0;
    int end=n-1;
    
    // while(start<=end){                             //if swap function can be used
    //     swap(a[start],a[end]);
    //     start++;
    //     end--;
    // }                                        

    int k;                                             //if swap function cant be used
    while(start<=end){
        k=a[start];
        a[start]=a[end];
        a[end]=k;

        start++;
        end--;
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

    cout<<"Array before reversal"<<endl;
    printarray(arr,size);
    cout<<endl<<"Array after reversal"<<endl;
    reverse_array(arr,size);
    printarray(arr,size);
    

    return 0;
}