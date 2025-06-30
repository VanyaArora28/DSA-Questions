#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s)
{
    string filtered;

    //this removes all non-alphanumeric charactes and converts all letters to lower case
    for(char c : s)
    {
        if(isalnum(c))
        {
            filtered += tolower(c);
        }
    }

    int start = 0;
    int end = filtered.size() - 1;

    while(start < end)
    {
        if(filtered[start] != filtered[end])
        {
            return false;
        }
        start ++;
        end--;

    }
    return true;
}

int main()
{
    cout << "enter test cases : " << endl;

    int t;
    cin >> t;

    for(int idx = 0; idx <= t; idx++)
    {
        string s;
        
    }
}