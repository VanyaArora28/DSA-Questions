#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s, int start, int end)
{
    if(start >  end)
    {
        return true;
    }

    if(s[start] != s[end])
    {
        cout << "not a palindrome"<< endl;
        return false;
    }

    cout << "palindrome"<< endl;
    return true;

    palindrome(s, start + 1, end - 1);
}

int main()
{
    int t;
    cout << "enter number of test cases : " << endl;
    cin >> t;

    for(int idx = 0 ; idx < t; idx++)
    {
        string s;
        
        cout << "enter a sentence :" << endl;
        cin >> s;

        string filtered;

        for(char c : s)
        {
            if(isalnum(c) )
            {
                filtered += tolower(c);
            }
        }

        palindrome(filtered, 0, filtered.size() - 1);
    }
}