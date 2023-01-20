#include <iostream>
using namespace std;

void print_array(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter no. of elements: "<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements only 1 and 0"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"After sorting"<<endl;
        int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
    for(int i=j;i<n;i++){
        if(arr[i]==1){
            swap(arr[j],arr[i]);
            j++;
        }
    }
    print_array(arr,n);

    return 0;
}