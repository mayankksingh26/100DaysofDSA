#include <iostream>
#include <algorithm>
#include <string>



using namespace std;

int main(){
    string s = "ae";
    string t = "aea";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end()); 
    // cout<<s<<" "<<t;
    int i=0;
    int j=0;
    char ans=t[t.length()-1];
    while(i<s.length() && j<t.length()){
        if(s[i]==t[j]){
            // cout<<endl<<s[i]<<" "<<t[j];
            i++;
            j++;
        }
        else if(s[i]!=t[j]){
            // cout<<endl<<s[i]<<" "<<t[j]<<endl;
            ans=t[j];
            break;
        }
    }
    cout<<endl<<ans;

    return 0;
}