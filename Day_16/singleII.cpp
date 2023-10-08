#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {2, 3, 2, 3,3,2,4};
    unordered_map<int, int> m;

    for (auto v : nums)
    {
        m[v]++;
    }
    cout << "Element  Frequency" << endl;
    for (auto i : m)
        cout << i.first << " \t\t\t " << i.second << endl;
    for (auto val : m)
    {
        if (val.second == 1)
        {
            cout << val.first;
        }
    }

    return 0;
}