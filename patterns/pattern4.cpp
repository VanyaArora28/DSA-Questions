#include<bits/stdc++.h>
using namespace std;

void pattern4(int num)
{
    for(int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << row;
            
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
        int num ;
        cin >> num;
        pattern4(num);
    }
    return 0;
}