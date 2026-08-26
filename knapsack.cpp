#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int, int>> nums = {{100, 10}, {250, 20}, {300, 25}, {210, 30}, {260, 40}, {350, 50}};
    int capasity=100;
    vector<double> ratio;
    sort(nums.begin(), nums.end(), [](const pair<int, int> &p1, const pair<int, int> &p2)
         { return p1.first*1.0/p1.second > p2.first*1.0/p2.second; });
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i].first << " - "<< nums[i].second<<endl;
    }
    int i=0,temp=0,profit=0;
    while (temp<=capasity)
    {
        temp = nums[i].second;
        profit+=nums[i].first;
        capasity-=temp;
        i++;
    }
    cout<<"Using 0/1 knapsack :- "<<endl;
    cout<<"Capasity :- "<< capasity<<endl;
    cout<<"Maximum profit :- "<<profit;
    cout<<"\n\n";
    if(capasity!=0 )
    {
        profit+= (nums[i].first*1.0/nums[i].second)*capasity;
        capasity=0;
    }
    cout<<"Using Fractional knapsack :- "<<endl;
    cout<<"Capasity :- "<< capasity<<endl;
    cout<<"Maximum profit :- "<<profit;
    
    return 0;
}
