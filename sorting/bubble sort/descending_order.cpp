#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int n, int arr[])
{
    for(int idx = n -1; idx >= 1; idx--)
    {
        for(int jdx = 0; jdx <= idx - 1; jdx++)
        {
            if(arr[jdx] < arr[jdx + 1])
            {
                swap(arr[jdx], arr[jdx + 1]);
            }
        }
    }
}
int main()
{
    int n;
    cout << "enter number of elements in array : " << endl;
    cin >> n;

    int arr[n];
    cout << "enter elements of array:" << endl;

    for(int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
    }

    cout << "before sorting :" << endl;

    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }

    bubble_sort(n, arr);

    cout << "after sorting :" <<  endl;

    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }
    return 0;
}