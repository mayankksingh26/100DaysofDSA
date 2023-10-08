#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> majorityElement(vector<int>& nums) {
  // //better solution using map 

	// map<int,int> mpp;
	// vector<int> ans;
	// int n = nums.size();

	// int mini = (int)(n/3)+1;

	// for(int i = 0;i<n;i++){
	// 	mpp[nums[i]]++;
	// 	if(mpp[nums[i]]==mini){
	// 		ans.push_back(nums[i]);
	// 	}
	// 	if(ans.size()==2) break;
	// }
	// sort(ans.begin(),ans.end());
	// return ans;  


	// optimal solution using moore voting method
	vector<int> ans;

	int cnt1 = 0 , cnt2 = 0;
	int el1 = INT_MIN;
	int el2 = INT_MAX;
	int n = nums.size();

	for(int i = 0 ;i<n;i++){
		if(cnt1==0 && nums[i]!=el2){
			el1=nums[i];
			cnt1 = 1;
		}
		else if(cnt2==0 && nums[i]!=el1){
			el2=nums[i];
			cnt2 = 1;
		}
		else if(el1==nums[i]) cnt1++;
		else if(el2==nums[i]) cnt2++;

		else{
			cnt1--;
			cnt2--;
		}
	}

	int count1=0;
	for(int i =0;i<n;i++){
		if(nums[i]==el1) count1++;
	}
	int count2=0;
	for(int i =0;i<n;i++){
		if(nums[i]==el2) count2++;
	}

	if(count1 > n/3) ans.push_back(el1);
	if(count2 > n/3) ans.push_back(el2);
	return ans;
  }
};

int main(){
    
    return 0;
}