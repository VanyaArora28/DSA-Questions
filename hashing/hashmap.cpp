#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter number of elements in the array :" << endl;
    cin >> n;

    int arr[n];

    cout << "enter elements" << endl;
    for(int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
    }

    //pre-compute
    map <int, int> mpp;
    
    for(int idx = 0; idx < n; idx ++)
    {
        mpp[arr[idx]]++;
    }

    //how to access key-value pair in map
    //also map store everything in sorted order

    for(auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    //queries
    int q;
    cout << "enter queries:" << endl;
    cin >> q;

    while(q--)
    {
        int num;
        cout << "enter number:" << endl;
        cin >> num;
        //fetch
        cout << mpp[num] << endl;
    }
    return 0;
}