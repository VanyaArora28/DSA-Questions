#include <bits/stdc++.h>
using namespace std;

void pattern2(int num)
{
    for(int row = 0; row < num; row++)
    {
        for(int col = 0; col <= row; col++)
        {
            cout << "* ";
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
        pattern2(num);
    }
    return 0;
}