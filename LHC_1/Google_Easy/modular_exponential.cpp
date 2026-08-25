#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    int powMod(int x, int n, int M) {
        long a=1;
        long base=x;
        while(n>=1)
        {
            if(n%2)
            {
                a = (base*a)%M;
                n--;

            }
            else
            {
                base = (base*base)%M;
                n/=2;
            }

        }
        return a;
        
    }
};
int main(){
    Solution s;
    int x,n,M;
    cout<<"Enter the all three variable value :- ";
    cin>>x>>n>>M;
    cout<<s.powMod(x,n,M);
    return 0;
}