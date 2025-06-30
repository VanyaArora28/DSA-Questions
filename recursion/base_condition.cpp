//base condition is a condition jo recursion ko ek point pr ake stop krdeti h

#include<bits/stdc++.h>
using namespace std;


int cut = 0;
void f()
{

    if(cut == 4) //base condition
    {
        return; //return statment if written under a function terminates it 
    }
    
    cout << cut << endl;
    cut++;

    f();

    
}

int main()
{
    f();
    

}