

#include<bits/stdc++.h>
using namespace std;
//pass by value

/*void doSomething(string name)
{
    name[0] = 'm';
    cout << name << endl;

    
    
}

int main()
{
    string name = "vanya";
    cout << "Enter name"  << ": " << endl;
    cin >> name;
    cout << name << endl;

    doSomething(name);
    return 0;
}*/


//pass by reference

void doSomething( string &name)
{
    name[0] = 't';

    cout << name << endl;
}

int main()
{
    string name;
    cout << "Enter name : " << " " << endl;
    cin >> name;

    doSomething(name);

    cout << name << endl;

    return 0;


}