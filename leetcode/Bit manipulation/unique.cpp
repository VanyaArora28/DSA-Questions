// https://www.naukri.com/code360/problems/find-unique_625159

/*
Problem statement
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.

Note:
Unique element is always present in the array/list according to the given condition.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
Time Limit: 1 sec

Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1

Explanation: The array is [2, 3, 1, 6, 3, 6, 2]. Here, the numbers 2, 3, and 6 are present twice, 
and the number 1 is present only once. So, the unique number in this array is 1.


Sample Input 2:
2
5
2 4 7 2 7
9
1 3 1 3 6 6 7 10 7
Sample Output 2:
4
10

Explanation: In the first test case, the array is [2, 4, 7, 2, 7]. Here, the numbers 2 and 7 are present twice, 
and the number 4 is present only once. So, the unique number in this array is 4.
Explanation: In the second test case, the array is [1, 3, 1, 3, 6, 6, 7, 10, 7]. 
Here, the numbers 1, 3, 6, and 7 are present twice, and the number 10 is present only once. So, the unique number in this array is 10.*/

/*2M + 1 = N
this means our array is an odd array

XOR:
a^a = 0
usig this logic in the question*/

#include<bits/stdc++.h>
using namespace std;

int find_unique(int arr[], int n)
{
    int ans = 0;

    for(int idx = 0; idx < n; idx++)
    {
        ans = ans ^ arr[idx];
    }
    return ans;
}

void input_array(int arr[], int n)
{
    for(int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
    }
}

void print_array(int arr[], int n)
{
    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }
}

int main()
{
    int n;
    cout << "enter number of elements :";
    cin >> n;

    int arr[n];
    cout << "enter elements: ";

    //printing original array
    input_array(arr, n);
    print_array(arr, n);
    cout << endl;

    //answer
    int answer = find_unique(arr, n);
    cout << answer;

    return 0;
}

