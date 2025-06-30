//count number of times an element appears in an array


#include<bits/stdc++.h>
using namespace std;

int main()
{
    //declaring an array

    int n;
    cout << "enter number of elements in an array" << endl;
    cin >> n;

    int arr[n];

    cout << "enter elements: " << endl;

    for(int idx = 0; idx < n ; idx++)
    {
        cin >> arr[idx];
    }

    int hash[13] = {0};
    for(int idx = 0; idx < n; idx++)
    {
        hash[arr[idx]] += 1;
    }

    //queries

    int q;
    cout << "enter number of test cases: " << endl;
    cin >> q;
    
    for(int idx = 0; idx < q; idx++)
    {
        int number;
        cin >> number;

        cout << hash[number] << endl;
        //fetch
    }
    return 0;

}