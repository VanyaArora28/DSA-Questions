#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int n, int arr[])
{
    for(int idx = 0; idx < n; idx++)
    {
        for(int jdx = idx; jdx > 0 ; jdx--)
        {
            if(arr[jdx - 1] < arr[jdx])
            {
                swap(arr[jdx - 1], arr[jdx]);
            }
        }
    }
}
int main()
{
    cout << "enter number of elements of the array:" << endl;
    int n;
    cin >> n;

    int arr[n];
    cout << "enter elements of the array:" << endl;
    for(int idx = 0; idx < n; idx ++)
    {
        cin >> arr[idx];
    }

    cout << "before sorting :" << endl;
    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }
    cout << endl;

    insertion_sort(n , arr);
    
    cout << "after sorting :" << endl;
    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }

    return 0;
}