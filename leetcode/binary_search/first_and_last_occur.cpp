// https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549

//Problem statement
// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
// Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.

// Note :
// 1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
// 2. 'arr' may contain duplicate elements.


// Example:
// Input: 'arr' = [0,1,1,5] , 'k' = 1

// Output: 1 2

// Explanation:
// If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.


// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 8 2
// 0 0 1 1 2 2 2 2
// Sample output 1:
// 4 7
// Explanation of Sample output 1:
// For this testcase the first occurrence of 2 in at index 4 and last occurrence is at index 7.


// Sample Input 2:
// 4 2
// 1 3 3 5
// Sample output 2:
// -1 -1


// Expected Time Complexity:
// Try to do this in O(log(n)).


// Constraints:
// 1 <= n <= 10^5
// 0 <= k <= 10^9
// 0 <= arr[i] <= 10^9

// Time Limit : 1 second


// APPROACH:
// 1. BINARY SEARCH IN LEFT SIDE TO FIND THE FIRST MOST OCCURENCE
// 2. BINARY SEARCH IN RIGHT SIDE TO FIND THE LAST MOST OCCURRENCE.
// 3. COMBINE IT TOGETHER 


//TC : O(logN)
//SC = O(1)

#include <bits/stdc++.h>
using namespace std;

int first_occurence(vector <int> &arr, int n, int key)
{
    int start_index = 0; 
    int end_index = n - 1;
    int mid = start_index + ((end_index - start_index) / 2);
    int ans = -1;

    while(start_index <= end_index)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            end_index = mid - 1;
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
    return ans;
}

int last_occurrence(vector <int> &arr, int n, int key)
{
    int start_index = 0;
    int end_index = n - 1;
    int mid = start_index + ((end_index - start_index) / 2);
    int ans = -1;

    while(start_index <= end_index)
    {
        if(arr[mid] == key)
        {
            ans = mid;
            start_index = mid + 1;
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
    return ans;
}

pair <int, int> first_and_last_occurrence(vector <int> &arr, int n, int key)
{
    pair <int, int> ans;
    
    ans.first = first_occurence(arr, n, key);
    ans.second = last_occurrence(arr, n, key);
    
    return ans;
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
    cout << "enter elements :" << endl;
    input_array(arr, n);

    int key;
    cout << "enter k: ";
    cin >> key;

    pair <int, int> result = first_and_last_occurrence(arr, n, key);
    cout << result.first << " " << result.second << endl;
    return 0;
}