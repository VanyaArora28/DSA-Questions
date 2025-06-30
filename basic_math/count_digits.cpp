#include <bits/stdc++.h>
using namespace std;

void count(int n)
{
    int count = 0;

    while(n > 0)
    {
        int last_digit = n % 10;
        count ++;
        n = n / 10;
    }
    cout << count;
}

int main()
{
    int t;
    cin >> t;

    for(int idx = 0; idx < t; idx++)
    {
        int num;
        cin >> num;

        count(num);
    }
    return 0;
}