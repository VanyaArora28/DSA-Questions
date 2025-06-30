// https://www.naukri.com/code360/problems/allocate-books_1090540

// Problem statement
// Given an array ‘arr’ of integer numbers, ‘arr[i]’ represents the number of pages in the ‘i-th’ book.
// There are ‘m’ number of students, and the task is to allocate all the books to the students.
// Allocate books in such a way that:

// 1. Each student gets at least one book.
// 2. Each book should be allocated to only one student.
// 3. Book allocation should be in a contiguous manner.


// You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.
// If the allocation of books is not possible, return -1.

// Example:
// Input: ‘n’ = 4 ‘m’ = 2 
// ‘arr’ = [12, 34, 67, 90]

// Output: 113

// Explanation: All possible ways to allocate the ‘4’ books to '2' students are:

// 12 | 34, 67, 90 - the sum of all the pages of books allocated to student 1 is ‘12’, and student two is ‘34+ 67+ 90 = 191’, so the maximum is ‘max(12, 191)= 191’.

// 12, 34 | 67, 90 - the sum of all the pages of books allocated to student 1 is ‘12+ 34 = 46’, and student two is ‘67+ 90 = 157’, so the maximum is ‘max(46, 157)= 157’.

// 12, 34, 67 | 90 - the sum of all the pages of books allocated to student 1 is ‘12+ 34 +67 = 113’, and student two is ‘90’, so the maximum is ‘max(113, 90)= 113’.

// We are getting the minimum in the last case.

// Hence answer is ‘113’.
// Detailed explanation ( Input/output format, Notes, Images )
// Sample Input 1:
// 4 2
// 12 34 67 90
// Sample Output 1:
// 113
// Explanation of sample input 1:
// All possible ways to allocate the ‘4’ books to '2' students are:

// 12 | 34, 67, 90 - the sum of all the pages of books allocated to student 1 is ‘12’, and student two is ‘34+ 67+ 90 = 191’, so the maximum is ‘max(12, 191)= 191’.

// 12, 34 | 67, 90 - the sum of all the pages of books allocated to student 1 is ‘12+ 34 = 46’, and student two is ‘67+ 90 = 157’, so the maximum is ‘max(46, 157)= 157’.

// 12, 34, 67 | 90 - the sum of all the pages of books allocated to student 1 is ‘12+ 34 +67 = 113’, and student two is ‘90’, so the maximum is ‘max(113, 90)= 113’.

// We are getting the minimum in the last case.

// Hence answer is ‘113’.
// Sample Input 2:
// 5 4
// 25 46 28 49 24
// Sample Output 2:
// 71
// Explanation of sample input 2:
// All possible ways to allocate the ‘5’ books to '4' students are:

// 25 | 46 | 28 | 49 24 - the sum of all the pages of books allocated to students 1, 2, 3, and 4 are '25', '46', '28', and '73'. So the maximum is '73'.

// 25 | 46 | 28 49 | 24 - the sum of all the pages of books allocated to students 1, 2, 3, and 4 are '25', '46', '77', and '24'. So the maximum is '77'.

// 25 | 46 28 | 49 | 24 - the sum of all the pages of books allocated to students 1, 2, 3, and 4 are '25', '74', '49', and '24'. So the maximum is '74'.

// 25 46 | 28 | 49 | 24 - the sum of all the pages of books allocated to students 1, 2, 3, and 4 are '71', '28', '49', and '24'. So the maximum is '71'.

// We are getting the minimum in the last case.

// Hence answer is ‘71’.
// Expected time complexity:
// The expected time complexity is O(n * log(s)), where ‘n’ is the number of integers in the array ‘arr’ and ‘s’ is the sum of all the elements of ‘arr’.
// Constraints:
// 2 <= 'n' <= 10 ^ 3
// 1 <= 'm' <= 10 ^ 3
// 1 <= 'arr[i]' <= 10 ^ 9
// The sum of all arr[i] does not exceed 10 ^ 9.

// Where ‘n’ denotes the number of books and ‘m’ denotes the number of students. ‘arr[i]’ denotes an element at position ‘i’ in the sequence.

// Time limit: 1 second

// Approach:
// 1.search space problem
// 2. start 0 se and end hoga sum of all the elements of array.
// 3. no solution -> start = mid + 1;
// 4. solution -> store -> end = mid - 1 -> till you find minimum


#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector <int> &arr, int n, int m, int mid)
{
    int student_count = 1; //this will track number of students
    int page_num = 0; //this will track number of pages alloted to a student

    for(int idx = 0; idx < n; idx++)
    {
        if(page_num + arr[idx] <= mid)
        {
            page_num = page_num + arr[idx];
        }
        else 
        {
            student_count ++ ;

            if(student_count > m || arr[idx] > mid)
            {
                return false;
            }

            page_num = arr[idx]; //reseting the pagenum;
        }
    }
    return true;
}

int allocation(vector <int> &arr, int n, int m)
{
    if(m > n) //edge case h agr number of students (m) exceeds number of books (total elements in the book = n)
    {
        return -1;
    }

    int sum = 0; //total number of pages in an array
    for(int idx = 0; idx < n; idx++)
    {
        sum = sum + arr[idx];
    }

    int end_index = sum; //this is search space
    int start_index = 0;
    int mid = start_index + ((end_index - start_index) / 2);
    int ans = -1;

    while(start_index <= end_index)
    {
        if(isPossible(arr, n, m, mid))
        {
            ans = mid;
            end_index = mid- 1;
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
    cout << "enter number of books:" << endl;
    cin >> n;

    int m;
    cout << "enter number of students:" << endl;
    cin >> m;

    vector<int> arr(n);
    cout << "enter pages per book:" << endl;
    input_array(arr,n);

    cout << allocation(arr, n, m);

    return 0;
}

