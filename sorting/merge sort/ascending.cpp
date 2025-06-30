#include<bits/stdc++.h>
using namespace std;

void merge (vector<int> &arr, int low, int mid, int high )
{
    vector <int> temp;
    //[low...mid]
    //[mid + 1... high]
    int left = low;
    int right = mid + 1;

    while(left <= mid && right <=  high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <=  high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for(int idx = low; idx <= high; idx++)
    {
        arr[idx] = temp[idx - low];
    }
}

void merge_sort(vector <int> &arr, int low, int high)
{
    if(low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void merge_sort_the_array(vector <int> &arr, int n)
{
    merge_sort(arr, 0, n - 1);
}

int main()
{
    int n;
    cout << "enter the number of elements in the array:" << endl;
    cin >> n;

    vector <int> arr(n);
    cout << "enter the elements of the array:" << endl;
    for(int idx = 0; idx < n; idx ++)
    {
        cin >> arr[idx];
    }
    cout << endl;

    cout << "the array before merge sort:" << endl;
    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " ";
    }
    cout << endl;

    merge_sort_the_array(arr, n);

    cout << "the array after sorting:" << endl;
    for(int idx = 0; idx < n; idx++)
    {
        cout << arr[idx] << " " ;
    }
    return 0;
}


