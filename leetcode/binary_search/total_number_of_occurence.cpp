//PROBLEM STATEMENT: WE ARE GIVEN AN ARRAY IN SORTED FORM, FIND TOTALNUMBER OF OCCURENCE OF KEY

/*APPROACH:
METHOD 1:
LINEAR SEARCH AND COUNT : O(N)

METHOD 2:
BINARY SEARCH : O(LOG N)
    1) FIND FIRST OCCURENCE
    2) FIND LAST OCCURENCE
    3) TOTAL NUMBER OF OCCURRENCE = LAST INDEX - FIRST INDEX + 1*/



#include <bits/stdc++.h>
using namespace std;

int first_occurrence(vector <int> &arr, int n, int key)
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

int total_occurrences(vector <int> &arr, int n, int key)
{
    int total_occurrences = last_occurrence(arr, n, key) - first_occurrence(arr, n, key) + 1;

    return total_occurrences;
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

    int key;
    cout << "enter key:" << endl;
    cin >> key;

    cout << total_occurrences(arr, n, key);
    
    return 0;
}