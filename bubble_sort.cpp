#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,count=0;
    cout<<"Enter the size of array :- ";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the index - "<<i<<" element :- ";
        cin>>a[i];
    }
    // bubble sort 
    // 9 6 4 3 2 
    // 1 2 5 7 8 
    for (int j = 0; j< n-1; j++)
    {   
        bool isSwap =false;
        for (int k = 0; k < n-1-j; k++)
        {
            count++;
            if(a[k]>a[k+1]){
                isSwap =true;
                int temp= a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }   
        if(!isSwap) break;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl<<count<<" times loop run";

    int shift_time ;
    cout<<"Enter the number of shift time :- ";
    cin>>shift_time;
    
    return 0;
}

/*
j=2
k=0 
3 4 2 6 9
k =1
3 2 4 6 9 
-----
j=3
k=0
2 3 4 6 9 
k = 1 (loop ended)

// write a program to implement rotation of array element based on users choice ,
   user will provide direction and number of rotation value

*/