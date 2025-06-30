#include <bits/stdc++.h>
using namespace std;

int fact(int num)
{

    if(num == 0)
    {
        return 1;
    }

    return num * fact(num - 1);

}

int main()
{
    cout << "enter number of test cases: ";
    int t;
    cin >> t;

    for(int idx = 0; idx < t; idx ++)
    {
        int n;
        cout << "enter number: ";
        cin >> n;

        cout << "factorial is"<< endl << fact(n) << endl;

    }
    return 0;
}