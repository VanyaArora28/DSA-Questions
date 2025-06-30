#include <bits/stdc++.h>
using namespace std;

void pattern5(int num)
{
    for(int row = num - 1; row >= 0; row--)
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

    for(int idx = 0; idx < t ; idx++)
    {
        int num;
        cin >> num;

        pattern5(num);
    }
    return 0;
}