//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int longestKSubstr(string ar, int k)
    {

        int ans = INT_MIN;
        int r = 0, l = 0;
        map<char, int> cp;
        while (r < ar.size())
        {
            cp[ar[r]]++;
            if (cp.size() == k)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {
                while (cp.size() > k)
                {
                    cp[ar[l]]--;
                    if (cp[ar[l]] == 0)
                    {
                        cp.erase(ar[l]);
                    }
                    l++;
                }
            }
            r++;
        }
        if (ans == INT_MIN)
            return -1;
        else
            return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends