#include <iostream>
#include <algorithm>
using namespace std;
 
int partition(int a[], int start, int end)
{
    int pivot = a[end];
    int pIndex = start;
    for (int i = start; i < end; i++)
    {
        if (a[i] <= pivot)
        {
            swap(a[i], a[pIndex]);
            pIndex++;
        }
    }
    swap (a[pIndex], a[end]);

    return pIndex;
}
 
void quicksort(int a[], int start, int end)
{
    // condición base
    if (start >= end) {
        return;
    }
 
    int pivot = partition(a, start, end);
    quicksort(a, start, pivot - 1);
 
    quicksort(a, pivot + 1, end);
}
 
{
    int a[] = { 9, -3, 5, 2, 6, 8, -6, 1, 3 };
    int n = sizeof(a)/sizeof(a[0]);
 
    quicksort(a, 0, n - 1);
 
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
 
    return 0;
}
