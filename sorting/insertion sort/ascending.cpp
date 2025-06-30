#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int n, int arr[])
{
    for(int idx = 0; idx < n; idx++)
    {
        int jdx = idx;
        while(jdx > 0 && arr[jdx - 1] > arr[jdx])
        {
            swap(arr[jdx- 1], arr[jdx]);
            jdx--;
        }
    }
}
int main()
{
    int n; 
    cout << "enter the number of elements:" << endl;
    cin >> n;

    int arr[n];
    cout << "enter elements of the array:" << endl;
    
    for(int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
    }

    cout << "before sorting:" << endl;

    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }
    cout << endl;

    insertion_sort(n, arr);

    cout << "after sorting:" << endl;

    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }

    return 0;
}