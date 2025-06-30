#include<bits/stdc++.h>
using namespace std;

void pattern13(int num)
{
    for(int row = 0; row < num; row++)
    {
        for(char ch = 'A'; ch <= 'A' + row; ch++)
        {
            cout<< ch;
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

        pattern13(num);
    }
    return 0;
}