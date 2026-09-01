#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> singleNum(vector<int> &arr)
    {
        map<int, int> freq;
        vector<int> ans1;
        for (int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }
        for (auto &pair : freq)
        {
            if (pair.second == 1)
            {
                ans1.push_back(pair.first);
            }
        }

        return ans1;
    }
};
int main()
{
    Solution s;
    vector<int> arr = {1, 2, 3, 2, 1, 4};
    vector<int> ans = s.singleNum(arr);
    cout << ans[0] << " " << ans[1];
    return 0;
}