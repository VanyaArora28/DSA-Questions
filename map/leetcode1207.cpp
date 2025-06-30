// https://leetcode.com/problems/unique-number-of-occurrences

/*Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
Example 2:

Input: arr = [1,2]
Output: false
Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true
 

Constraints:

1 <= arr.length <= 1000
-1000 <= arr[i] <= 1000*/


/*APROACH :
1. Store the given array in an unordered map
2. store the frequency (it.second in mpp) in a set
3. if size of map = size of set: all elements are unique occurring
*/


#include <bits/stdc++.h>
using namespace std;

bool unique_occur(int arr[], int n)
{
    unordered_map <int, int> mpp;

    for(int idx = 0; idx < n; idx++)
    {
        mpp[arr[idx]]++;
    }

    unordered_set <int> sett;

    for(auto it : mpp)
    {
        sett.insert(it.second);
    }

    if(mpp.size() == sett.size())
    {
        return 1;
    }
    return 0;
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
    cout << "enter number of elements:" << " " ;
    cin >> n;

    int arr[n];
    cout << "enter elements :" ;

    input_array(arr, n);
    print_array(arr, n);

    cout << endl;

    //print output
    
    cout << unique_occur(arr, n) << endl;
    return 0;
}



