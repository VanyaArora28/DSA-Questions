#include<bits/stdc++.h>
using namespace std;
//just for lower case

int main()
{
    string s;
    cout << "enter elements in strings: " << endl;
    getline(cin, s);

    //pre compute
    int hash[26] = {0};
    for(int idx = 0; idx < s.size(); idx++)
    {
        hash[s[idx] - 'a'] += 1; //formula: 'chararcter' - 'a'
    }

    //queries
    int q;
    cout << "enter queries: "<< endl;
    cin >> q;
    while(q--)
    {
        char c;
        cout << "enter character: " << endl;
        cin >> c;
        //fetch
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}