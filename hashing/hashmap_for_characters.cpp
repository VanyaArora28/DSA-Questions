#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "enter elements for string : " << endl;
    getline(cin, s);

   
    //pre-compute
    map <char, int> mpp;

    for(int idx = 0; idx < s.size(); idx++)
    {
        mpp[s[idx]]++;
    }

    //accessing key-value pai
    
    for(auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    //queries
    int q;
    cout << "enter number of queries :" << endl;
    cin >> q;
 
    while(q--)
    {
        char c;
        cout << "enter character: " << endl;
        cin >> c;

        //fetch
        cout << mpp[c] << endl;
    }
    return 0;
}