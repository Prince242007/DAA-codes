#include<iostream>
using namespace std;
void merge(int a[],int l ,int h , int mid){
    int low = mid-l+1;
    int r = h-mid;
    int lt[low];
    int rt[r];
    for (int i = 0; i < low; i++)
    {
        lt[i]=a[l+i];
    }
    for (int i = 0; i <r ; i++)
    {
        rt[i]=a[mid+i+1];
    }
    int i=0,j=0,k=l;
    while (i<low && j<r)
    {
        if(lt[i]<rt[j])
        {
            a[k++]=lt[i++];
        }
        else
        {
            a[k++]=rt[j++];
        }
    }
    while (i < low) {
        a[k++] = lt[i++];
    }

    // Copy any leftover elements from the right subarray
    while (j < r) {
        a[k++] = rt[j++];
    }
}
void printArray(int a[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
void merge_sort(int a[],int l ,int h){
    if(l<h)
    {
        int mid = l+(h-l)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,h);
        merge(a,l,h,mid);
    }
    
}

int main(){
    int n, count = 0;
    cout << "Enter the size of array :- ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the index - " << i << " element :- ";
        cin >> a[i];
    }
    merge_sort(a,0,n-1);
    printArray(a,n);
    return 0;
}