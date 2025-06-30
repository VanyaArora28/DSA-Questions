#include<bits/stdc++.h>
using namespace std;

void pattern7(int  num)
{
    for(int row = 0; row < num; row ++)
    {
        //spaces
        for (int col = 0; col <  num - row - 1; col++)
        {
            cout << " ";
        }
        //stars
        for(int col = 0; col < (2 * row) + 1; col++)
        {
            cout << "*";
        }
        //spaces 
         //spaces
        for (int col  = 0; col <  num - row - 1; col++)
        {
            cout << " ";
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
        pattern7(num);
    }
    return 0;
}