//  https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554

// Problem statement
// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
// Now the array is rotated at some pivot point unknown to you.
// For example, if 'arr' = [ 1, 3, 5, 7, 8], then after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].
// Now, your task is to find the index at which ‘k’ is present in 'arr'.


// Note :
// 1. If ‘k’ is not present in 'arr', then print -1.
// 2. There are no duplicate elements present in 'arr'. 
// 3. 'arr' can be rotated only in the right direction.


// Example:
// Input: 'arr' = [12, 15, 18, 2, 4] , 'k' = 2
// Output: 3
// Explanation:
// If 'arr' = [12, 15, 18, 2, 4] and 'k' = 2, then the position at which 'k' is present in the array is 3 (0-indexed).


// Sample Input 1:
// 4 3
// 8 9 4 5
// Sample output 1:
// -1 
// Explanation of Sample Output 1:
// For the test case, 3 is not present in the array. Hence the output will be -1.


// Sample Input 2:
// 4 3
// 2 3 5 8
// Sample output 2:
// 1


// Expected Time Complexity:
// Try to do this in O(log(n)). 


// Constraints:
// 1 <= n <= 10^5
// 0 <= k <= 10^9
// 0 <= arr[i] <= 10^9

// Time Limit: 1 second


// APPRAOCH:
// 1. FIND PIVOT INDEX.
// 2. CHECK CONDITION:
//     2.1 ARR[PIVOT] <= TARGET <= ARR[N - 1] 
//         2.1.1 IF YES, THEN THIS WOULD MEAN OUR TARGET LIES ON SECOND LINE
//         2.1.2 APPLY BINARY SEARCH ON SECOND LINE 
//     2.2 ELSE: ARR[0] <= TARGET <= ARR[PIVOT - 1]
//         2.2.1 IF YES, THEM THIS WOULD MEAN OUR TARGET LIES ON FIRST LINE 
//         2.2.2 APPLY BINARY SEARCH ON FIRST LINE.


#include <bits/stdc++.h>
using namespace std;

int find_pivot(vector <int> &arr, int n)
{
    int start_index = 0;
    int end_index = n - 1;
    int mid = start_index + ((end_index - start_index) / 2);

    while(start_index < end_index)
    {
        if(arr[0] <= arr[mid]) //first line
        {
            start_index = mid + 1;
        }
        else //second line
        {
            end_index = mid;
        }

        mid = start_index + ((end_index - start_index) / 2);
    }

    return start_index;
}

int binary_search(vector <int> &arr, int start_index, int end_index, int key)
{
    int mid = start_index + ((end_index - start_index) / 2);

    while(start_index <= end_index)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] < key)
        {
            start_index = mid + 1;
        }
        else if(arr[mid] > key)
        {
            end_index = mid - 1;
        }

        mid = start_index + ((end_index - start_index) / 2);
    }

    return -1;
}

int search_key(vector <int> &arr, int n, int key)
{
    int pivot = find_pivot(arr, n);

    if(arr[0] <= key && key <= arr[pivot - 1]) //first line
    {
        return binary_search(arr, 0, pivot - 1, key);
    }
    else if(arr[pivot] <= key && key <= arr[n - 1])
    {
        return binary_search(arr, pivot, n - 1, key);
    }

    return -1;
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
    cout << "enter number of elements :" << endl;
    cin >> n;

    vector <int> arr(n);
    cout << "enter elements : " << endl;
    input_array(arr, n);

    int key;
    cout << "enter target:" << endl;
    cin >> key;

    cout << search_key(arr, n, key);
}
