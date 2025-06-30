#include <bits/stdc++.h>
using namespace std;

void prime(int n)
{
    int count = 0;

    for(int idx = 1; idx <= sqrt(n); idx++)
    {
        if( n % idx == 0)
        {
            count++;

            if(n / idx != idx)
            {
                count++;
            }
        }

    }
    
    if(count == 2)
    {
        cout << "prime number";
    }
    else
    {
        cout << "not a prime number";

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

        prime(num);
    }
    return 0;
}