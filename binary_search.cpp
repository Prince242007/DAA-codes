#include <bits/stdc++.h>
using namespace std;

int bs_search(int a[],int l ,int h ,int search)
{
    if (l > h) return -1;
    int mid = l + (h - l) / 2;
    if (a[mid] == search) {
        return mid;
    } else if (a[mid] < search) {
        return bs_search(a, mid + 1, h, search);
    } else {
        return bs_search(a, l, mid - 1, search);
    }
}
int main()
{
    int n, search;
    cout << "Enter the size of array :- ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the index - " << i << " element :- ";
        cin >> a[i];
    }
    sort(a, a + n);
    cout << "Enter the element which you want to search :- ";
    cin >> search;
    int ans = bs_search(a, 0, n - 1, search);
    if (ans == -1) {
        cout << "Not found";
    } else {
        cout << "Found at index : " << ans;
    }

    return 0;
}