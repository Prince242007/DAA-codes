#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool areKAnagrams(string &s1, string &s2, int k)
    {
        if (s1.length() != s2.length())
            return false;

        vector<int> freq(26, 0);
        for (char ch : s1)
        {
            freq[ch - 'a']++;
        }

        for (char ch : s2)
        {
            freq[ch - 'a']--;
        }
        int changes_needed = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                changes_needed += freq[i];
            }
        }

        return (changes_needed <= k);
    }
};
int main()
{
    Solution s;
    string s1 = "fodr", s2 = "gork";
    int k;
    cout << "Enter the k value :- ";
    cin >> k;
    cout << s.areKAnagrams(s1, s2, k);
    return 0;
}