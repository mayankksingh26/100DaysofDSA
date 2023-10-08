#include <iostream>
#include <vector>
using namespace std;

vector <int> pushZerosAtEnd(vector<int> &arr) 
{
    
   
    int i=0;
    for(int j=0;j<arr.size();j++){
        
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
        
    }
    return arr;
}

int main(){
    vector<int> arr1 ={2,0, 4 ,1 ,3, 0, 28};
    vector<int> arr4;
    arr4= pushZerosAtEnd(arr1);
    for(int i=0;i<arr4.size();i++){
        cout<<arr4[i]<<" ";
    }
    return 0;
}

