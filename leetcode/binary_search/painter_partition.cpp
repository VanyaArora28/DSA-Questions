// https://www.naukri.com/code360/problems/painter's-partition-problem_1089557

// Problem statement
// Given an array/list of length ‘n’, where the array/list represents the boards and each element of the given array/list 
//represents the length of each board. 
//Some ‘k’ numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint.
// You are supposed to return the area of the minimum time to get this job done of painting all the ‘n’ boards under a 
//constraint that any painter will only paint the continuous sections of boards.

// Example :
// Input: arr = [2, 1, 5, 6, 2, 3], k = 2
// Output: 11
// Explanation:
// First painter can paint boards 1 to 3 in 8 units of time and the second painter can paint boards 4-6 in 11 units of time. 
//Thus both painters will paint all the boards in max(8,11) = 11 units of time. It can be shown that all the boards can't be painted 
//in less than 11 units of time.

// Detailed explanation ( Input/output format, Notes, Images )

// Sample Input 1 :
// 4 2
// 10 20 30 40


// Sample Output 1 :
// 60
// Explanation For Sample Input 1 :
// In this test case, we can divide the first 3 boards for one painter and the last board for the second painter.


// Sample Input 2 :
// 2 2
// 48 90


// Sample Output 2 :
// 90


// Expected Time Complexity:
// Try to do this in O(n*log(n)).


// Constraints :
// 1 <= n <= 10^5
// 1 <= k <= n
// 1 <= arr[i] <= 10^9

// Time Limit: 1 sec.

//appraoch: same as book allocation

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector <int> &arr, int n, int k, int mid)
{
    int time_sum = 0;
    int painter_count = 1;

    for(int idx = 0; idx < n; idx++)
    {
        if(time_sum + arr[idx] <= mid)
        {
            time_sum = time_sum + arr[idx];
        }
        else
        {
            painter_count++;

            if(painter_count > k || arr[idx] > mid)
            {
                return false;
            }

            time_sum = arr[idx];
        }
    }

    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int n = boards.size();

    //edge case
    if(n < k)
    {
        return -1;
    }

    int sum = 0;

    for(int idx = 0; idx < n; idx++)
    {
        sum = sum + boards[idx];
    }

    //creating search space
    int start_index = 0;
    int end_index = sum;
    int mid = start_index + ((end_index - start_index) / 2);
    int ans = -1;

    while(start_index <= end_index)
    {
        if(isPossible(boards, n, k, mid))
        {
            ans = mid;
            end_index = mid - 1;
        }
        else
        {
            start_index = mid + 1;
        }

        mid = start_index + ((end_index - start_index) / 2);
    }

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
    cout << "enter number of boards:" << endl;
    cin >> n;

    int k;
    cout << "enter number of painters :" << endl;
    cin >> k;

    vector <int> arr(n);
    cout << "enter unit time for each board:" << endl;
    input_array(arr, n);

    cout << findLargestMinDistance(arr, k);

    return 0;
}

