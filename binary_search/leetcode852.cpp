// https://leetcode.com/problems/peak-index-in-a-mountain-array/description/

/*You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.

 

Example 1:

Input: arr = [0,1,0]

Output: 1

Example 2:

Input: arr = [0,2,1,0]

Output: 1

Example 3:

Input: arr = [0,10,5,2]

Output: 1

 

Constraints:

3 <= arr.length <= 105
0 <= arr[i] <= 106
arr is guaranteed to be a mountain array.
*/


/*binary search approach:
1. if arr[mid] < arr[mid + 1] -> start_index = mid + 1
2. else -> end - mid*/

#include <bits/stdc++.h>
using namespace std;

int peak_index(vector <int> &arr, int n)
{
    int start_index = 0;
    int end_index = n - 1;
    int mid = start_index + ((end_index - start_index) / 2);

    while(start_index < end_index)
    {
        if(arr[mid] < arr[mid + 1])
        {
            start_index = mid + 1;
        }
        else
        {
            end_index = mid;
        }

        mid = start_index + ((end_index - start_index) / 2);
    }

    return mid;
}

void input_array(vector <int> &arr, int n)
{
    for(int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
    }
}

int main()
{
    int n;
    cout << "enter number of elements:" << endl;
    cin >> n;

    vector <int> arr(n);
    cout << "enter elements:" << endl;
    input_array(arr, n);

    cout << peak_index(arr, n);

    return 0;
}