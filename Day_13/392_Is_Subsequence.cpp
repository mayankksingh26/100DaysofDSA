#include <iostream>
using namespace std;

bool isSubsequence(string s, string t) {
int i = 0;

    for(int j = 0;j< t.length();j++){
        if(s[i]==t[j]){
            i++;
        }
        if(i==s.length()){
            break;
        }
    }
    
if(i>0){
        return true;
    }else {
        return false;
    }

    }

int main(){
    string s="abc";
    string t="adebxc";
    bool p = isSubsequence(s,t);
    cout<<isSubsequence(s,t);
    return 0;
}