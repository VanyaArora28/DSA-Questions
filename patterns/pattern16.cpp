#include <bits/stdc++.h>
using namespace std;

void pattern16(int num)
{
    for(int row = 0; row < num; row++)
    {
        char ch = 'A' + row;

        for(int col = 0; col <= row; col++)
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

    for(int idx = 0; idx < t; idx++)
    {
        int num;
        cin >> num;

        pattern16(num);
    }
    return 0;
}