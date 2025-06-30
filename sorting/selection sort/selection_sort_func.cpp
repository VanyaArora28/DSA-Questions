#include<bits/stdc++.h>
using namespace std;

void selection_sort(int n, int arr[])
{
    for(int idx = 0; idx <= n - 2; idx++)
    {
        int min_idx = idx;

        for(int jdx = idx; jdx <= n - 1; jdx++)
        {
            if(arr[jdx] < arr[min_idx])
            {
                min_idx = jdx;
            }

        }
        swap(arr[idx], arr[min_idx]);
    }

}
int main()
{
    int n; 
    cout << "enter number of elements in the array: " << endl;
    cin >> n;

    int arr[n];

    for(int idx = 0; idx < n; idx ++)
    {
        cin >> arr[idx];
    }

    cout << "array before sorting is" << endl;

    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " " ;
    }
    cout << endl;

    selection_sort(n, arr);

    cout << "after sorting in ascending order :" << endl;

    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }
    cout << endl;
    return 0;
}