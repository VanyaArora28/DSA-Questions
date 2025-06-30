// https://www.naukri.com/code360/problems/aggressive-cows_1082559

//Approach: same as book allocation buss isme maximum distance krrhe toh possible ans ke baad right part main jao
//search space = start = 0;
// end = arr ka max element - arr ka min element

#include <bits/stdc++.h>
using namespace std;

int find_max(vector <int> &arr, int n)
{
    int maxi = INT_MIN;

    for(int idx = 0; idx < n; idx++)
    {
        maxi = max(maxi, arr[idx]);
    }

    return maxi;
}

int find_min(vector <int> &arr, int n)
{
    int mini = INT_MAX;

    for(int idx = 0; idx < n; idx++)
    {
        mini = min(mini, arr[idx]);
    }

    return mini;
}

bool isPossible(vector <int> &arr, int n, int k, int mid)
{
    int last_position = arr[0];
    int cow_count = 1;

    for(int idx = 0; idx < n; idx++)
    {
        if(arr[idx] - last_position >= mid)
        {
            cow_count++ ;

            if(cow_count == k)
            {
                return true;
            }

            last_position = arr[idx];
        }
    }

    return false;
}

int aggressive_cows(vector <int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());

    int n = stalls.size();
    int start_index = 0;
    int final = find_max(stalls, n) - find_min(stalls, n);
    int end_index = final;
    int ans = -1;
    int mid = start_index + ((end_index - start_index) / 2);

    while(start_index <= end_index)
    {
        if(isPossible(stalls, n, k, mid))
        {
            ans = mid;
            start_index = mid + 1;
        }
        else
        {
            end_index = mid - 1;
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
    cout << "enter number of stalls:" << endl;
    cin >> n;

    vector <int> stalls(n);
    cout << "enter dostances:" << endl;
    input_array(stalls, n);

    int k;
    cout << "enter number of cows:" << endl;
    cin >> k;

    cout << aggressive_cows(stalls, k);

    return 0;
}
