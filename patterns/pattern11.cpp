#include<bits/stdc++.h>
using namespace std;

void pattern11(int num)
{
    int start = 1;

    for(int row = 0; row < num; row++)
    {
        if(row % 2 == 0)
        {
            start = 1;
        }
        
        else
        {
            start = 0; 
        }

        for(int col = 0; col <= row; col++)
        {
            cout << start;
             start = 1 - start;

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

        pattern11(num);

    }
    return 0;
}