// #include <bits/stdc++.h>
// using namespace std;

// void gcd(int num1, int num2)
// {
//     int gcd = 0;

//     for(int idx  = 1; idx < min(num1, num2); idx++) //minimum mein run krege kyuki chote wale number ki length consider krni hogi
//     {
//         if(num1 % idx == 0 && num2 % idx == 0)
//         {
//             gcd = idx;
//         }
//     }

// }

//tc = O(min(num1, num2))

//but yeh kaam nhi krega given humne gcd mein maximum factor chaiye hota h toh better rhega if we take loop piche se 

//optimal


#include <bits/stdc++.h>
using namespace std;

void gcd(int num1, int num2)
{
    int gcd = 0;

    for(int idx = min(num1, num2); idx >= 1; idx--)
    {
        if(num1 % idx == 0 && num2 % idx == 0 )
        {
            gcd = idx;
            break;
        }
        
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

        cin>> num1 >> num2;

        gcd(num1, num2);
    }
    return 0;
}