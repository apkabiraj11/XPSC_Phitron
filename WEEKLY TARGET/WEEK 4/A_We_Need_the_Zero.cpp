#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int XOR = 0;

        int ans = -1;

        vector<int> br(n);

        for (int i = 0; i <= 256; i++)
        {
            for (int j = 0; j < n; j++)
            {
                br[j] = ar[j] ^ i;
            }

            XOR = br[0];
            for (int k = 1; k < n; k++)
            {
                XOR ^= br[k];
            }

            if (XOR == 0)
            {
                ans = i;
                break;
            }
            br.clear();
            XOR = 0;
        }
        cout << ans << endl;
    }

    return 0;
}