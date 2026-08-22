#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    vector<int> removeDuplicates(vector<int> &arr) {
        vector<int> ans;
        ans.push_back(arr[0]);
        for (int i = 1; i < arr.size(); i++)
        {
            if(arr[i]!=ans.back())
            {
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> arr={2, 2, 2, 2, 2};
    vector<int> arns = s.removeDuplicates(arr);
    for (int i = 0; i < arns.size(); i++)
    {
        cout<<arns[i]<<" ";
    }
    return 0;
}