#include <bits/stdc++.h>
using namespace std;

bool representable( int n , int k)
{
    for (int x = 0; x * 2 <= n; x++)
    {
        int remaining = n - 2 * x;
        
        if(remaining % k == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int t = 4;
    
    while (t > 0)
    {
        representable();
    }
}