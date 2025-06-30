//Find sqrt using binary search but give float part as well

// Approach:
// bus precision add krdo
#include <bits/stdc++.h>
using namespace std;


int tempsol(int n)
{
    int start_index = 0;
    int end_index = n; 
    long long mid = start_index + ((end_index - start_index) / 2);
    int ans = -1;

    while(start_index <= end_index)
    {
        if(mid * mid == n)
        {
            return mid;
        }
        else if(mid * mid > n)
        {
            end_index = mid  - 1;
        }
        else if(mid * mid < n)
        {
            ans = mid;
            start_index = mid + 1;
        }

        mid = start_index + ((end_index - start_index) / 2);
    }
    return ans;
}

double precision(int base, int n, int precision)
{
    double factor = 1;
    double ans = base;

    for(int idx = 0; idx < precision; idx++)
    {
        factor = factor / 10;

        for(double jdx =ans; jdx * jdx < n; jdx = jdx + factor)
        {
            ans = jdx;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "enter number to find sqrt:" << endl;
    cin >> n;

    int prec;
    cout << "enter till whch decimal you want the sqrt" << endl;
    cin >> prec;

    int temp = tempsol(n);

    double final_answer = precision(temp, n, prec);
    
    cout << final_answer;
    return 0;
}
