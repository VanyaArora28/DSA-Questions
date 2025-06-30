#include<bits/stdc++.h>
using namespace std;

void pattern12(int num)
{
    int space = 2 * (num - 1);
    for(int row = 1; row < num; row ++)
    {
        //numbers
        for(int col = 1; col <= row; col++)
        {
            cout << col;
        }
        //spaces
        for(int col = 0; col <= space; col++)
        {
            cout << " ";
        }
        //numbers
        for(int col = row; col >= 1; col--)
        {
            cout << col;
        }
        cout << endl;
        space = space - 2;
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

        pattern12(num);
    }
    return 0;
}