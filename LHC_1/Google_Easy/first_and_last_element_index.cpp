#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findBound(vector<int> &arr, int x, bool findFirst)
    {
        int low = 0, high = arr.size() - 1;
        int ans = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (arr[mid] == x)
            {
                ans = mid; // Record the potential answer
                if (findFirst)
                {
                    high = mid - 1; // Keep searching on the left side
                }
                else
                {
                    low = mid + 1; // Keep searching on the right side
                }
            }
            else if (arr[mid] > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
    vector<int> find(vector<int> &arr, int x)
    {
        int first = findBound(arr, x, true);
        int last = findBound(arr, x, false);
        return {first, last};
    }
};
int main()
{
    Solution s;
    vector<int> arr = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int x;
    cout << "Enter the element :- ";
    cin >> x;
    vector<int> ans1 = s.find(arr, x);

    for (int i : ans1)
    {
        cout << i<<" ";
    }

    return 0;
}