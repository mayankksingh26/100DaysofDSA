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

int main(){
    int arr[]={7,7,9,10,0,1,2,3,6};
    int n=(sizeof(arr))/sizeof(int);
    cout<<"Pivot index of given array is "<<endl;
    cout<<getPivot(arr,n);

    return 0;
}