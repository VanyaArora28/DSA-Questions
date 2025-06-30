// https://www.naukri.com/code360/problems/duplicate-in-array_893397

/*You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. 
There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:

Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
Note :
A duplicate number is always present in the given array.*/

/*Sample Input 1:
2
5
4 2 1 3 1
7
6 3 1 5 4 3 2
Sample Output 1:
1
3
Explanation of sample input 1:
For the first test case, 
The duplicate integer value present in the array is 1. Hence, the answer is 1 in this case.

For the second test case,
The duplicate integer value present in the array is 3. Hence, the answer is 3 in this case.
Sample Input 2:
2
6 
5 1 2 3 4 2  
9
8 7 2 5 4 7 1 3 6
Sample Output 2:
2
7*/


/*APPROACH:
1. STORE ALL THE ELEMENTS IN A MAP
2. RETURN THE ELEMENT WITH FREQ 2*/

#include <bits/stdc++.h>
using namespace std;

int duplicate(int arr[], int n)
{
    unordered_map <int, int> mpp;

    for(int idx = 0; idx < n; idx++)
    {
        mpp[arr[idx]]++;

        if(mpp[arr[idx]] == 2)
        {
            return arr[idx];
        }
    }
    return -1;
}

void input_array(int arr[], int n)
{
    for(int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
    }
}

int main()
{
    int n; 
    cout << "enter number of elements :" << endl;
    cin >> n;

    int arr[n];
    cout << "enter elements :" << endl;
    input_array(arr, n);

    cout << duplicate(arr, n);
    return 0;
}