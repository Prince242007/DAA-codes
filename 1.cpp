// Write a program to find minimum and maximum  from the arr=[5,6,7,8,9] , num=[-1,3,-7,8]
// write a program to implement linear search using function...
// 0,4,16,36,64,100,......n
// 3,13,31,57,91,.........n
#include <bits/stdc++.h>
using namespace std;
void linear_search(int arr[], int n, int temp)
{
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == temp)
        {
            cout << "Found on index :- " << i;
            break;
        }
    }
    if (!flag)
    {
        cout << "Target not found..";
    }
}
pair<int, int> min_max(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
        else if (min > arr[i])
            min = arr[i];
    }
    return {min, max};
}
int main()
{
    int n;
    cout << "Enter the size :- ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i << " element :- ";
        cin >> arr[i];
    }

    
    // min-max element...
    pair<int, int> ans = min_max(arr, n);
    cout << "Max :- " << ans.second << "  Min :- " << ans.first;

    // linear search ...
    int temp;
    cout << "Enter the target which you want to search :- ";
    cin >> temp;
    linear_search(arr, n, temp);


    return 0;
}
