/*PROBLEM STATEMENT:
YOU ARE GIVEN A SORTED ARRAY, WHICH IS ROTATED LATER ON.

FIND PIVOT(MINIMUM INDEX) IN THE ROTATED ARRAY

EG: {1,2,3, 7, 9}
ROATATED BY 2:
{7, 9, 1, 2 ,3}

output = index 2 (element = 1)*/

/*APPROACH:
1. MAKE A GRAPH TO UNDERSTAND BETTER
2. CONDITION FOR FIRST LINE : {7, 9}
    2.1) START = 0
    2.2) aar[mid] >= arr[0]
        2.3)START = MID + 1
        
3) CONDITION FOR SECOND LINE : {1,2,3}
    3.1)END = N - 1
    3.2) ELSE
        3.2.1)END = MID*/

#include <bits/stdc++.h>
using namespace std;

int pivot_index(vector <int> & arr, int n)
{
    int start_index = 0;
    int end_index = n - 1;

    int mid = start_index + ((end_index - start_index) / 2);

    while(start_index < end_index)
    {
        if(arr[mid] >= arr[0])
        {
            start_index = mid + 1;
        }
        else 
        {
            end_index = mid;
        }

        mid = start_index + ((end_index - start_index ) / 2);
    }

    return start_index; //can retrun end_index too
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

    cout << "pivot index:" << pivot_index(arr, n);

    return 0;
}

