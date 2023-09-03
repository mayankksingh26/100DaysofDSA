#include <iostream>
#include <vector>
using namespace std;

bool ispossible(vector<int> &boards,int n, int k,int mid){
        int paintercount = 1;
        int boardsum = 0;
      
        for(int i = 0 ; i<n ;i++){
            if ( boardsum + boards[i] <= mid){
                boardsum = boardsum + boards[i];
            }
            else{
                paintercount++;
                if ( boards[i]>mid || paintercount>k){
                    return false;
                }
                boardsum = boards[i];
            }
        }
        return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    int s = 0;
    int sum = 0;
    int n = boards.size();
    for (int i=0;i<n;i++){
        sum=sum+boards[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    if(k>n){
        return -1;
    }
   while(s<=e){
        if (ispossible(boards,n,k,mid)){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid +1;
        }
        mid = s + (e-s)/2;
   }

   return ans;
    
}

int main(){
    vector<int> arr ={10,20,30,40};
    cout<<findLargestMinDistance(arr,2);
    return 0;
}

