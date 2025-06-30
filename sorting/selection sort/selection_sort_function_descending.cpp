//selection sort for descending order

#include<bits/stdc++.h>
using namespace std;

void selection_sort(int n, int arr[])
{
    for(int idx = 0; idx <= n - 2; idx++)
    {
        int max_index = idx;

        for(int jdx = idx; jdx <= n - 1; jdx++)
        {
            if(arr[jdx] > arr[max_index])
            {
                max_index = jdx;
            }
        }
        swap(arr[max_index], arr[idx]);
    }
}
int main()
{
    int n;
    cout << "eneter number of elements in the array:" << endl;
    cin >> n;

    cout << "enter elements of the array:" << endl;
    int arr[n];

    for(int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx] ;
    }

    cout << "array before sorting:" << endl;
    
    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }
    cout << endl;

    selection_sort(n, arr);

    cout << "after sorting: " << endl;
    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }
    return 0;
}