// // https://www.naukri.com/code360/problems/pair-sum_697295

// Problem statement
// You are given an integer array 'ARR' of size 'N' and an integer 'S'. 
//Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

// Note:

// Each pair should be sorted i.e the first value should be less than or equals to the second value. 

// Return the list of pairs sorted in non-decreasing order of their first value. 
//In case if two pairs have the same first value, the pair with a smaller second value should come first.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= N <= 10^3
// -10^5 <= ARR[i] <= 10^5
// -2 * 10^5 <= S <= 2 * 10^5

// Time Limit: 1 sec
// Sample Input 1:
// 5 5
// 1 2 3 4 5
// Sample Output 1:
// 1 4
// 2 3
// Explaination For Sample Output 1:
// Here, 1 + 4 = 5
//       2 + 3 = 5
// Hence the output will be, (1,4) , (2,3).
// Sample Input 2:
// 5 0
// 2 -3 3 3 -2
// Sample Output 2:
// -3 3
// -3 3
// -2 2

// Approach:
// 1. We create a vector <vector<int> result.
// 2. We use nested loops to find pair.
// 3. If a pair is found, we store it in a vector temp.
// 4. Store this temp vector in result.
// 5. Sort the result as per question's demand.
// 6. Return result.


#include <bits/stdc++.h>
using namespace std;

vector <vector<int>> pair_sum(vector <int> arr, int s)
{
    int n = arr.size();
    vector <vector<int>> result;

    for(int idx = 0; idx < n; idx++)
    {
        for(int jdx = idx + 1; jdx < n; jdx++)
        {
            if(arr[idx] + arr[jdx] == s)
            {
                vector <int> temp;
                temp.push_back(min(arr[idx], arr[jdx]));
                temp.push_back(max(arr[idx], arr[jdx]));
                result.push_back(temp);
            }
        }
    }

    sort(result.begin(), result.end());
    return result;

}

void input_arr(vector <int> &arr, int n)
{
    for(int idx = 0; idx < n; idx++)
    {
        cin >> arr[idx];
    }
}

void print_vector (vector<vector<int>> arr)
{
    for(int idx = 0; idx < arr.size(); idx++)
    {
        for(int jdx = 0; jdx < arr[idx].size(); jdx++)
        {
            cout << arr[idx][jdx] << endl;
        }
    }
}

int main()
{
    int n;
    cout << "enter number of elements: " << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "enter elements :" << endl;
    input_arr(arr, n);

    int sum;
    cout << "enter sum to find:" << endl;
    cin >> sum;

    print_vector(pair_sum(arr, sum));

    return 0;
}