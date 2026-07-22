/*

// write a program to implement rotation of array element based on users choice ,
   user will provide direction and number of rotation value

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter the size of array :- ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the index - " << i << " element :- ";
        cin >> a[i];
    }

    int shift_time;
    cout << "Enter the number of shift time :- ";
    cin >> shift_time;
    shift_time %= n;
    char d;
    cout << "Enter the direction (left - l or right - r):-";
    cin >> d;
    if (d == 'r')
    {

        cout << "Right side rotation :- ";
        reverse(a, a + n);
        reverse(a, a + shift_time);
        reverse(a + shift_time, a + n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
    {

        cout << endl
             << "Left side rotation :- ";
        reverse(a, a + n);
        reverse(a, a + n - shift_time);
        reverse(a + n - shift_time, a + n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}
