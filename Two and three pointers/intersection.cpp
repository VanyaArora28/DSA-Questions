// https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149

/*Problem statement
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. 
You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 100
1 <= N, M <= 10^4
0 <= A[i] <= 10^5
0 <= B[i] <= 10^5

Time Limit: 1 sec
Sample Input 1 :
2
6 4
1 2 2 2 3 4
2 2 3 3
3 2
1 2 3
3 4  
Sample Output 1 :
2 2 3
3   
Explanation for Sample Input 1 :
For the first test case, the common elements are 2 2 3 in both the arrays, so we print it.

For the second test case, only 3 is common so we print 3.
Sample Input 2 :
2
3 3 
1 4 5
3 4 5
1 1
3
6
Sample Output 2 :
4 5
-1*/


// APPROACH: 
// 1. Both arrays are sorted in increasing order.
// 2. Lets use two pointers.
// 3. idx for arr1 and jdx for arr2 both placed at index 0 respectively.
// 4. Lets also use a final vector called result.
// 5. Following conditions are in order:
//     5.1) arr1[idx] < arr2[jdx] : idx++
//     5.2) arr1[idx] == arr2[jdx] : insert in result -> idx++, jdx++.
//     5.3) arr1[idx] > arr2[jdx] : jdx++
// 6. Return result.

#include <bits/stdc++.h>
using namespace std;

vector <int> intersection (int n, int m, vector<int> arr1, vector <int> arr2)
{
    vector <int> result;
    int idx = 0; //pointer for arr1
    int jdx = 0; //pointer for arr2

    while(idx < n && jdx < m)
    {
        if(arr1[idx] < arr2[jdx])
        {
            idx++;
        }
        else if(arr1[idx] == arr2[jdx])
        {
            result.push_back(arr1[idx]);
            idx++;
            jdx++;
        }
        else if(arr1[idx] > arr2[jdx])
        {
            jdx++;
        }
    }
    return result;
}

void input_array(vector <int> &arr, int n)
{
    for(int idx = 0; idx < n; idx++)
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
    int n, m;
    cout << "enter number of elements for first and second array:" << endl;
    cin >> n >> m;

    vector <int> arr1 (n);
    vector <int> arr2 (m);

    cout << "enter elements for first array :" << endl;
    input_array (arr1, n);

    cout << "enter elements for second array :" << endl;
    input_array(arr2, m);

    vector <int> ans = intersection(n, m, arr1, arr2);

    print_array(ans, ans.size());
    return 0;
}