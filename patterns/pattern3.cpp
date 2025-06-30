#include <bits/stdc++.h>
using namespace std;

void pattern3(int num)
{
    for (int row = 0 ; row < num; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col;
            
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

        pattern3(num);
    }
    return 0;
}