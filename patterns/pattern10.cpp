//pattern10 is combination of pattern 2 and pattern 5

#include<bits/stdc++.h>
using namespace std;

void pattern2(int num)
{
    for(int row = 0; row < num ; row++)
    {
        for(int col = 0; col <=row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern5(int num)
{
    for(int row = num - 1; row >= 0; row--)
    {
        for(int col = 0; col <=row; col++)
        {
            cout << "*";
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
        //pattern 10 = pattern2 + pattern 5
        pattern2(num);

        pattern5(num);
    }
    return 0;
}

