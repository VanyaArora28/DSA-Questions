/*231. Power of Two
Solved
Easy
Topics
Companies
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false*/


#include<bits/stdc++.h>
using namespace std;

bool power_of_two(int n)
{
    for(int idx = 0; idx < 31; idx++)
    {
        int ans = pow(2, idx);

        if(ans == n)
        {
            return true;
        }
        
    }
    return false;
}

int main()
{
    int num;
    cout << "enter a number:" << endl;

    cin >> num;

    bool a = power_of_two(num);

    if(a == 1)
    {
        cout << "true";
    }
    else 
    {
        cout << "false";
    }

    
    return 0;
}