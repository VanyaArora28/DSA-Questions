#include<bits/stdc++.h>
using namespace std;
//include all 256 characters
int main()
{
    string s;
    cout << "enter elements of string" << endl;
    getline(cin, s);

    //pre-compute
    int hash[256] = {0};
    for(int idx = 0; idx < s.size(); idx++)
    {
        hash[s[idx]]++;
    }

    //queries
    int q;
    cout << "enter number of queries" << endl;
    cin >> q;

    while(q--)
    {
        char c;
        cout << "enter character: " << endl;
        cin >> c;

        //fetch
        cout << hash[c] << endl;
    }
    return 0;
}