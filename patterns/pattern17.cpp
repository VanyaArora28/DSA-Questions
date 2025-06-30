#include <bits/stdc++.h>
using namespace std;

void pattern17(int num)
{
    for(int row = 0; row < num; row++)
    {
        //spaces
        for(int col = 0;  col < num - row - 1; col++)
        {
            cout << " ";
        }

        //characters
        char ch = 'A';
         //number of elements in a row = 2*row +1

        int breakpoint = (2 * row + 1 )/ 2;

        for(int col = 1; col <= 2 * row + 1; col++)
        {
            cout << ch;

            if( col <= breakpoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
            
        }
        //spaces
        for(int col = 0; col < num - row - 1; col++ )
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

    for(int idx = 0; idx <t; idx++)
    {
        int num;
        cin >>num;

        pattern17(num);
    }
    return 0;
}