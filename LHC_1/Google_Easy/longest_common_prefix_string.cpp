#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> arr)
    {
        if (arr.empty())
            return ""; 
        string answer = "";
        for (int i = 0; i < arr[0].length(); i++)
        {
            char temp = arr[0][i];
            for (int j = 1; j < arr.size(); j++)
            {
                if (i >= arr[j].length() || arr[j][i] != temp)
                {
                    return answer;
                }
            }
            answer += temp;
        }
        return answer;
    }
};
int main()
{
    Solution s;
    vector<string> arr = {"geeksforgeeks", "geeks", "geek", "geezer"};
    // vector<string> arr = {"hello", "world"};
    cout << s.longestCommonPrefix(arr);
    return 0;
}