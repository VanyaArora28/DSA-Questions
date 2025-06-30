//this is without using recursion

#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "enter the length of an array: " << endl;
    int n;
    cin >> n;

    int a[n];

    cout << "enter elements of the initialised array" << endl;

    for(int idx = 0; idx < n; idx++)
    {
        cin >> a[idx];
    }

    cout << "array before reversing is : " << endl;

    for(int idx = 0; idx < n; idx++)
    {
        cout << " " << a[idx];
        cout << endl;
    }


    int start = 0;
    int end = n - 1;

    while(start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }

    cout << "reversed array is : " << endl;

    for(int idx = 0; idx < n; idx++)
    {
        cout << " " <<  a[idx];
        cout << endl;
    }
    return 0;


}