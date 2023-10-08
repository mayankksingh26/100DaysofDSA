#include <iostream>
using namespace std;
int countDigits(int n){
	int count = 0;
	int number = n;
	int digit;
	while(n>=0){
		digit = n%10;
		if(number/digit==0){
			count++;
		}
		n=n/10;
	}
	return count;
}
int main()
{
	int n;
	cin >> n;
	int count = 0;
	int number = n;
    cout<<"number : "<<number<<endl;
	int digit;
	while(n>0){
		digit = n%10;
        cout<<"digit: "<<digit<<endl;
		if( digit!=0 && number%digit==0){
			count++;
    cout<<"count"<<count;
		}
		n=n/10;
        cout<<" n : "<<n<<endl;;
	}
    cout<<"final count: "<<count;
	
	return 0;
}