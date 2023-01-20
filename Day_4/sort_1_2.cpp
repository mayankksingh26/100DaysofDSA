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
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        if(arr[i]==0){
            i++;
        }
        if(arr[j]==1){
            j--;
        }
    }

    print_array(arr,n);

    return 0;
}