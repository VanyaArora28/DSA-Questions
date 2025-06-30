#include<bits/stdc++.h>
using namespace std;

//pattern9 is the mixturn of pattern 7 and pattern 8

void pattern7(int num)
{
    for(int row = 0; row < num; row++)
    {
        //spaces
        for(int col = 0; col < num - row - 1; col++)
        {
            cout << " ";
        }
        
        //stars
        for(int col = 0; col < (2 * row) + 1; col++)
        {
            cout << "*";
        }

        //spaces
        for(int col = 0; col < num - row - 1; col++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int num)
{
    for(int row = num - 1; row >= 0; row--)
    {
        //spaces
        for(int col = 0; col < num - row - 1; col++)
        {
            cout << " ";
        }
        //stars
        for(int col = 0; col < 2 * row + 1; col++)
        {
            cout << "*";
        }
        //spaces
        for(int col = 0; col < num - row - 1; col++)
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
        cin >>  num;

        //pattern 9 = patter 7 + pattern 8
        pattern7(num);
        pattern8(num);
    }
    return 0;

}