//using recursion

#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

void reverse(int start, int end)
{
    if(start > end)
    {
        return;
    }
    swap(arr[start], arr[end]);

    reverse(start + 1 , end - 1);
}

int main()
{
    cout << "enter number of test cases : " << endl;
    int t;
    cin >> t;

    for(int idx = 0; idx < t; idx ++)
    {
        cout << "enter length of array : " << endl;
        int n;
        cin >> n;

        arr.resize(n);

        cout << "enter the elements in array : " << endl;

        for(int idx = 0; idx < n; idx++)
        {
            cin >> arr[idx];
        }

        cout << "your array before reversing is : " << endl;

        for(int idx = 0; idx < n; idx++)
        {
            cout << arr[idx] << " ";
        }

        cout << endl;

        reverse(0, n - 1);

        cout << "your reversed array is : " << endl;

        for(int idx = 0; idx < n; idx++)
        {
            cout << arr[idx] << " ";
        }
        cout << endl;
    }
    return 0;
}