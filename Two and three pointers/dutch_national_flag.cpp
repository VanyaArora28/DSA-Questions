// https://www.naukri.com/code360/problems/sort-0-1-2_631055

// Problem statement
// You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

// Note :
// Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 10
// 1 <= N <= (5 * (10 ^ 5))
// 0 <= ARR[i] <= 2

// Where 'N' is the size of the given array/list.
// And, ARR[i] denotes the i-th element in the array/list.

// Time Limit: 1sec 
// Sample Input 1 :
// 2
// 6
// 0 1 2 2 1 0
// 7
// 0 1 2 1 2 1 2
// Sample Output 1 :
// 0 0 1 1 2 2
// 0 1 1 1 2 2 2
// Sample Input 2 :
// 2
// 7
// 2 2 2 1 1 1 0
// 6
// 2 1 2 0 1 0
// Sample Output 2 :
// 0 1 1 1 2 2 2
// 0 0 1 1 2 2

// Approach:
// 1. THREE POINTER APPROACH:
//     1.1. POINTER LEFT = 0
//         1.1.1 THIS WILL DETERMINE POSITION OF 0s.
//     1.2. POINTER MID = 0
//         1.2.1 THIS WILL DETERMINE POSITION OF 1s.
//         1.2.2. MOST CRUICIAL AS WE WILL COMPARE OTHER TWO POINTERS USING THIS.
//     1.3. POINTER RIGHT = N - 1
//         1.3.2. THIS WILL DETERMINE POSITION OF 2s.

// 2. CONDITIONS:
//     2.1 IF arr[MID] == 0 
//         2.1.1 SWAP MID AND LEFT
//         2.1.2 MID++ and LEFT++

//     2.2 IF arr[MID] == 1
//         2.2.1 MID++
    
//     2.3 ID arr[MID] == 2
//         2.3.1 SWAP MID AND RIGHT
//         2.3.2 RIGHT++


#include <bits/stdc++.h>
using namespace std;

void segregate(vector <int> &arr, int n)
{
    int left = 0;
    int mid = 0;
    int right = n - 1;

    while(mid <= right)
    {
        if(arr[mid] == 0)
        {
            swap(arr[mid], arr[left]);
            mid++;
            left++;
        }
        else if(arr[mid] == 1)
        {
            mid++;
        }
        else if(arr[mid] == 2)
        {
            swap(arr[mid], arr[right]);
            right--;
        }
    }
}

void input_array(vector <int> &arr, int n)
{
    for(int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
    }
}

void print_array(vector <int> &arr, int n)
{
    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }
}

int main()
{
    int n;
    cout << "enter number of elements:" << endl;
    cin >> n;

    vector <int> arr(n);

    cout << "enter elements :" << endl;
    input_array(arr, n);

    segregate(arr, n);

    print_array(arr, n);

    return 0;
}
