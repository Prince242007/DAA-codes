// Activity selection
/*
    id, start, finish
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Activity
{
    int id;
    int start;
    int finish;
};
bool compare(Activity &a, Activity &b)
{
    return a.finish < b.finish;
}
void activitySelection(vector<Activity> &acts)
{
    sort(acts.begin(), acts.end(), compare);

    int currSel = 0;
    cout << "Activity " << acts[0].id << endl;
    for (int i = 1; i < acts.size(); i++)
    {
        if (acts[i].start > acts[currSel].finish)
        {
            cout << "Activity " << acts[i].id << endl;
            currSel = i;
        }
    }
}
int main()
{
    vector<Activity> acts = {
        {1, 1, 2},
        {2, 3, 4},
        {3, 2, 6},
        {4, 7, 9},
        {5, 5, 9}};
    activitySelection(acts);
    return 0;
}