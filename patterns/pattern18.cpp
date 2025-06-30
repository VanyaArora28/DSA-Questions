#include<bits/stdc++.h>
using namespace std;

void pattern18(int num)
{
    for(int row = 0; row < num; row++)
    {
        for(char ch = 'E' - row; ch <= 'E'; ch++)
        {
            cout << ch;
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

        pattern18(num);
    }
    return 0;
}