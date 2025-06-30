#include<bits/stdc++.h>
using namespace std;

//ascending order 

int main()
{
    int n;
    cout << "enter number of elements in array" << endl;
    cin >> n;

    int arr[n];

    cout << "enter elements to sort in ascending order: " << endl;

    for(int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
    }

    cout << "array before sorting is :" << endl;

    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }

    cout << endl;

    for(int idx = 0; idx <= n - 2; idx ++)
    {
        int mini = idx;

        for(int jdx = idx; jdx <= n - 1; jdx++)
        {
            if(arr[jdx] < arr[mini])
            {
                mini = jdx;
            }
        }
        swap(arr[mini], arr[idx]);
    }

    cout << "sorted array is :" << endl;

    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }

    return 0;
}