/*2131. Longest Palindrome by Concatenating Two Letter Words
Solved
Medium
Topics
Companies
Hint
You are given an array of strings words. Each element of words consists of two lowercase English letters.

Create the longest possible palindrome by selecting some elements from words and concatenating them in any order. Each element can be selected at most once.

Return the length of the longest palindrome that you can create. If it is impossible to create any palindrome, return 0.

A palindrome is a string that reads the same forward and backward.


Example 1:

Input: words = ["lc","cl","gg"]
Output: 6
Explanation: One longest palindrome is "lc" + "gg" + "cl" = "lcggcl", of length 6.
Note that "clgglc" is another longest palindrome that can be created.
Example 2:

Input: words = ["ab","ty","yt","lc","cl","ab"]
Output: 8
Explanation: One longest palindrome is "ty" + "lc" + "cl" + "yt" = "tylcclyt", of length 8.
Note that "lcyttycl" is another longest palindrome that can be created.
Example 3:

Input: words = ["cc","ll","xx"]
Output: 2
Explanation: One longest palindrome is "cc", of length 2.
Note that "ll" is another longest palindrome that can be created, and so is "xx".

 */


/*APPROACH:
1. USE MAP
2. ITERATE THROUGH ARRAY
3. IF REV OF AN ELEMENT EXISTS IN MAP, USE IT AND REDUCE ITS FREQ IN MAP AND ADD 4 TO RESULT
4. IF DOESN;T EXISTS THEN ADD IT IN MAP
5. IF REV == ELEMENT THEN IT WILL BE IN CENTRE AND ADD 2 TO RESULT
6. NOTE : IF aa and bb BOTH EXISTS THEN USE ONLY ONE.*/

#include <bits/stdc++.h>
using namespace std;

int longest_palidrome(vector<string> words)
{
    int n = words.size();
    int result = 0;
    unordered_map <string, int> mpp;

    for(int idx = 0; idx < n; idx++)
    {
        string rev = words[idx];
        reverse(rev.begin(), rev.end());
        
        if(mpp.find(rev) != mpp.end())
        {
            result += 4;
            mpp[rev] -- ;

            if(mpp[rev] == 0)
            {
                mpp.erase(rev);
            }
        }
        else
        {
            mpp[words[idx]]++;
        }
    }
    //check equal character wale

    for(auto it : mpp)
    {
        string word = it.first;
        int count = it.second;

        if(word[0] == word[1] && count > 0)
        {
            result += 2;
            break;
        }
    }
    return result;
}

int main()
{
    int n;
    cout << "enter number of elements:" << endl;
    cin >> n;
    vector <string> words(n);

    cout << "enter strings for our array:" << endl;

    for(int idx = 0; idx < n; idx++)
    {
        cin >> words[idx];
    }
    int result = longest_palidrome(words);

    cout << result;

    return 0;
}