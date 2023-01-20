//*******
// *****
//  ***
//   *

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1;i<=n;i++){
    //for spaces
        for(int j=1;j<i;j++){
            if(i==1){
                continue;
            }
        cout<<" ";

        }
// for *
        for(int k=1;k<=n-i+1;k++){
            cout<<"*";
        }

        // for 2nd *
        for(int l=n-i;l;l--){
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;
}