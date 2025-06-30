//euclidean algorithm {yayy}

/*TC = O(log phi min(a,b))*/


//a > b or num1 > num2:
//gcd(a, b) = gcd(a %b, b) and pehle jo zero hogya woh gcd nhi hoga mtlb non zero wala gcd


#include <bits/stdc++.h>
using namespace std;

void gcd_optimal(int num1, int num2)
{
    int gcd = 0;

    while(num1 > 0 && num2 > 0)
    {
        if(num1 > num2)
        {
            num1 = num1 % num2;
        }
        else if (num2 > num1)
        {
            num2 = num2 % num1;
        }
    }

    if(num1 == 0)
    {
        gcd = num2;
    }

    else if(num2 == 0)
    {
        gcd = num1;
    }
    cout << gcd << endl;
}

int main()
{
    int t;
    cin >> t;

    for(int idx = 0; idx < t; idx++)
    {
        int num1, num2;
        cin >> num1 >> num2;

        gcd_optimal(num1, num2);
    }



    return 0;
}