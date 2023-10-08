#include <iostream>
#include <string>
using namespace std;

int main(){
    string s =  "leet2code2";
    int k =10;
    int i =0;
        string temp = "";
        string s1 = "";
    while(i<s.length()){
        if(s[i]>='a' && s[i]<='z' && i<k){
            temp = temp + s[i];
            i++;
        }
        else if(s[i]>=2 && s[i]<=9){
            int j = s[i];
            s1 = temp ;
            for(int k =1;k<j;k++){
                s1 = s1 + temp;
            }
            temp = s1;
            i++;
        }

    }
        cout<<s1[k];
    return 0;
}