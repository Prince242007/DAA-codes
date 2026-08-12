#include <bits/stdc++.h>
using namespace std;

long long power10(int n)
{
    long long ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= 10;
    }
    return ans;
}

long long karatsuba(long long x, long long y)
{
    long long ans, a, b, c, d, ac, bd;
    string x_string = to_string(x), y_string = to_string(y);
    int len_x = 0, len_y = 0, n;
    len_x = x_string.length();
    len_y = y_string.length();
    if (len_x <= 1 || len_y <= 1)
        return x * y;
    n = max(len_x, len_y);
    int m = n / 2;
    long long p = power10(m);
    a = x / p;
    b = x % p;
    c = y / p;
    d = y % p;
    ac = karatsuba(a, c);
    bd = karatsuba(b, d);
    ans = karatsuba((a + b), (c + d)) - ac - bd;
    return (ac * power10(2 * m) + bd + ans * p);
}
int main()
{
    long long x, y;
    cout << "Enter the x :- ";
    cin >> x;
    cout << "Enter the y :- ";
    cin >> y;
    cout << karatsuba(x, y);
    return 0;
}