#include<bits/stdc++.h>
using namespace std;

void pattern15(int num)
{
    for(int row = 0; row < num; row ++)
    {
        for(char ch = 'A'; ch <= 'A' + (num - row - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    for(int idx = 0; idx < t; idx++ )
    {
        int num;
        cin >> num;

        pattern15(num);

    }
    return 0;
}