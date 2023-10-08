#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int n = 10;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	cout<<sum;
    return 0;
}