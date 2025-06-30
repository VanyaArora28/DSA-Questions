//METHOD 2


// https://www.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1

// Given an array arr consisting of only 0's and 1's in random order. Modify the array in-place to 
// segregate 0s onto the left side and 1s onto the right side of the array.

// Examples :

// Input: arr[] = [0, 0, 1, 1, 0]
// Output: [0, 0, 0, 1, 1]
// Explanation:  After segregation, all the 0's are on the left and 1's are on the right. Modified array will be [0, 0, 0, 1, 1].
// Input: arr[] = [1, 1, 1, 1]
// Output: [1, 1, 1, 1]
// Explanation: There are no 0s in the given array, so the modified array is [1, 1, 1, 1]
// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)

// Constraints:
// 1 ≤ arr.size() ≤ 106
// 0 ≤ arr[i] ≤ 1

// Approach:
// 1. Two pinter approach.
// 2. First pointer in the beginning.
// 3. Another in the end.
// 4. Conditions:
//     4.1) If arr[idx] == 0 -> idx++
//     4.2) If arr[jdx] == 1 -> jdx--
//     4.3) If arr[idx] == 1&& arr[jdx] == 0 -> swap 

#include <bits/stdc++.h>
using namespace std;

void segregate(vector <int> &arr, int n)
{
    int idx = 0;
    int jdx = n - 1;

    while(idx < jdx)
    {
        while(arr[idx] == 0 && idx < jdx)
        {
            idx++;
        }
        while(arr[jdx] == 1 && idx < jdx)
        {
            jdx--;
        }
        if(arr[jdx] == 0 && arr[idx] == 1 && jdx > idx)
        {
            swap(arr[idx] , arr[jdx]);
            idx++;
            jdx--;
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
    cout << "enter number of elements : ";
    cin >> n;

    vector <int> arr(n);

    cout << "enter elements :" << endl;
    input_array(arr, n);

    segregate(arr, n);

    print_array(arr, n);

    return 0;
}