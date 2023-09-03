#include <iostream>
#include <vector>
using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	
    int i = 0, j = 0;
	vector<int> ans;
	while(i < m && j < n)
	{
		if(arr1[i] < arr2[j])
			ans.push_back(arr1[i++]);
		else if(arr1[i] > arr2[j])
			ans.push_back(arr2[j++]);
		if(arr1[i] == arr2[j])
		{
			ans.push_back(arr1[i++]);
			ans.push_back(arr2[j++]);
		}
	}
	while(i < m)
		ans.push_back(arr1[i++]);
	while(j < n)
		ans.push_back(arr2[j++]);
	return ans;


}

int main(){
    vector<int> arr1 ={1,2,3,0,0,0};
    vector<int> arr4;
    vector<int> arr2 = {2,5,6};
    arr4= ninjaAndSortedArrays(arr1,arr2,3,3);
    for(int i=0;i<arr4.size()-1;i++){
        cout<<arr4[i]<<" ";
    }
    return 0;
}

