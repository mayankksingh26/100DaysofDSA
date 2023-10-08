#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int numssum = 0;
    int totalsum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        numssum = numssum + nums[i];
    }

    for (int i = 1; i <= nums.size(); i++)
    {
        totalsum = totalsum + i;
    }

    return totalsum - numssum;
}

int main()
{
    vector<int> nums = {0, 1,2,6,4,5};
    // int ans = missingNumber(nums);
    // cout<<ans;
    int numssum = 0;
    int totalsum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        numssum = numssum + nums[i];
    }
    cout<<numssum;
    for (int i = 1; i <= nums.size(); i++)
    {
        totalsum = totalsum + i;
    }
    cout<<endl<<totalsum;
    return 0;
}