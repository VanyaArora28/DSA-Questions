#include<bits/stdc++.h>
using namespace std;

void pattern1(int num)
{
    for(int row = 0; row < num; row++)
    {
        for(int col = 0; col < num; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int t; //test cases
    cin >> t;

    for (int idx = 0; idx < t; idx++)
    {
        int num;
        cin >> num;

        pattern1(num);

    }
    return 0;
}