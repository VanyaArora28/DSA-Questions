/*442. Find All Duplicates in an Array

Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, 
return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output*/


/*Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]
Example 2:

Input: nums = [1,1,2]
Output: [1]
Example 3:

Input: nums = [1]
Output: []*/

/*APPROACH:
1. USE UNODERED AMP TO STORE ALL THE ELEMENTS WITH ITS FREQUENCY
2. CREATE A VECTOR TO STORE ELEMENTS WHICH HAS AN OCCURENCE OF TW0*/

#include <bits/stdc++.h>
using namespace std;

vector <int> find_duplicates(vector <int> arr, int n)
{
    unordered_map <int, int> mpp;
    vector <int> dupli;

    for(int idx = 0; idx < n; idx++)
    {
        mpp[arr[idx]]++;

        if(mpp[arr[idx]] == 2)
        {
            dupli.push_back(arr[idx]);
        }
    }
    return dupli;
}

void input_array(vector <int> &arr, int n)
{
    for(int idx = 0; idx < n;idx++)
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
    cout << "enter number of elements: " << endl;
    cin >> n;

    vector <int> arr(n);
    cout << "elements are : "<< endl;

    //input in og array 
    input_array(arr, n);

    //find duplicates

    vector<int> result = find_duplicates(arr, n);

    print_array(result, result.size());
    return 0;
    
}