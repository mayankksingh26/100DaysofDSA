#include <iostream>
#include <vector>
using namespace std;

int secondLargest(vector<int> arr,int n){
    int largest = arr[0];
    int secondl = INT_MIN;
    for(int i = 1;i<n;i++){
        if(arr[i]>largest){
            secondl=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondl){
            secondl=arr[i];
        }
    }
    return secondl;
}

int secondSmallest(vector<int> arr,int n){
    int smallest = arr[0];
    int secondS = INT_MAX;
    for(int i = 1;i<n;i++){
         if(arr[i]<smallest){
            secondS=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<secondS){
            secondS=arr[i];
        }
    }
    return secondS;
}


vector<int> getSecondOrderElements(int n, vector<int> a) {
    int slargest = secondLargest(a,n);
    int ssmallest = secondSmallest(a,n);
    return {slargest,ssmallest};
}


int main(){
    vector<int> a = {4,5,3,6,7};
    vector<int> result = getSecondOrderElements(a.size(), a);

    cout << "Second Largest: " << result[0] << endl;
    cout << "Second Smallest: " << result[1] << endl;
    int largest = secondLargest(a,a.size());
    cout<<largest<<endl;
    int smallest = secondSmallest(a,a.size());
    cout<<smallest;
    return 0;
}