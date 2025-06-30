//  https://leetcode.com/problems/sqrtx/description/


// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// Example 2:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
 

// Constraints:

// 0 <= x <= 231 - 1

// Appraoch:
// 1) dekho bs lagao 0 se leke x tk
// 2) for eg x  = 36 toh 0....36
// 3) agr phit mid nikal ke uska square compare karo x se
// 4) agr equal h toh return krdo
// 5) mid * mid greater h toh end = mid - 1
// 6) agr mid * mid less h toh ek possible value ho skti h kyuki what if x ek perfect square h hee nhi toh floor value return krne k lie imp 

#include <bits/stdc++.h>
using namespace std;


int sqrt(int x)
{
    if(x == 0 || x == 1)
    {
        return x;
    }

    int start_index = 0;
    int end_index = x;
    long long mid = start_index + ((end_index - start_index) / 2);
    int ans = -1;

    while(start_index <= end_index)
    {
        if(mid * mid == x)
        {
            return mid;
        }
        else if(mid * mid < x)
        {
            ans = mid;
            start_index = mid + 1;
        }
        else if(mid * mid > x)
        {
            end_index = mid - 1;
        }

        mid = start_index + ((end_index - start_index) / 2);
    }

    return ans;
}

int main()
{
    int x;
    cout << "enter value of x:" << endl;
    cin >> x;

    cout << sqrt(x);

    return 0;
}