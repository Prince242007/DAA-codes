#include <iostream>
using namespace std;
void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int partition(int a[], int start, int end)
{
    int pi = start;
    int pivot = a[end];
    for(int i = start;i<end;i++){
        if(a[i]<= pivot){
            swap(a[i],a[pi]);
            pi++;
        }
    }
    swap(a[pi],a[end]);
    return pi;
}
void quicksort(int a[], int start, int end)
{

    if (start < end)
    {
        int pindex = partition(a, start, end);
       
        // left
        quicksort(a, start, pindex - 1);
        // right
        quicksort(a, pindex + 1, end);
    }
}
void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size;
    cout << "Enter size:-";
    cin >> size;

    int a[size];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    printArray(a, size);
    quicksort(a, 0, size - 1);
    printArray(a, size);
    return 0;
}