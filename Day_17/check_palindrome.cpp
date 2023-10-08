#include <iostream>
using namespace std;

bool checkPalindrome(char str[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        if(str[s]!=str[e]){
            return false;
        }
        else if (str[s]==str[e]){
            s++;
            e--;
        }
    }
    return true;

}



int lengthOfString(char str[]){
    int count =0;
    for(int i =0;str[i] != '\0';i++){
        count++;
    }
    return count;
}

int main(){
    char s[20];
    cout<<"enter a string : "<<endl;
    cin>>s;

    int len = lengthOfString(s);
    
    cout<<"palindrome :";
    int ans = checkPalindrome(s,len);
    if(ans==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    
    return 0;
}


