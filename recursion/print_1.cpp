#include <bits/stdc++.h>
using namespace std;

void print_number()
{
    
    cout << "1" << endl;
    print_number();
}

int main()
{
   
    print_number();

    return 0;
}


//since no stopping condition, this is an infinite recursion