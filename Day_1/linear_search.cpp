#include <iostream>
using namespace std;

void printarray(int a[],int n){
    for(int i;i<n;i++){
        cout<<a[i] <<" ";
    }
}

int linear_search(int a[],int n,int v){
    for(int i;i<n;i++){
        if(a[i]==v){
            return 1;
        }
    }
    return 0;
}



int main(){
    int arr[100];
    int size,val;
    
    cout<<"Enter the size of array "<<endl;
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Enter value you want to search "<<endl;
    cin>>val;

    bool ans = linear_search(arr,size,val);

    if(ans==1){
        cout<<val<<" is in the array "<<endl;
    }
    else
    cout<<"Not found "<<endl;

    // printarray(arr,size);
    return 0;
}