#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int n, int arr[])
{
    for(int idx = n - 1; idx >= 1; idx--)
    {
        int did_swap = 0; // optimisation in case the given array was already sorted 
        for(int jdx = 0; jdx <= idx; jdx++)
        {
            if(arr[jdx] > arr[jdx + 1])
            {
                swap(arr[jdx], arr[jdx + 1]);
                did_swap = 1;
            }
        }
        if (did_swap == 0)
        {
            break;
        }
    }
}

int main()
{
    int n;
    cout << "enter number of elements:" << endl;
    cin >> n;

    int arr[n];
    for(int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
    }

    cout << "before sorting :"<< endl;

    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }

    bubble_sort(n, arr);

    cout << "after sorting :" << endl;

    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }
    return 0;
}