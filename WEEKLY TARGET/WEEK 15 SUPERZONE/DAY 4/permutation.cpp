class Solution
{
public:
    vector<vector<int>> ans;
    vector<int> v;
    void req(vector<int> nums, vector<int> freq)
    {
        if (v.size() == nums.size())
        {
            ans.push_back(v);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (!freq[i])
            {
                v.push_back(nums[i]);
                freq[i] = 1;
                req(nums, freq);
                freq[i] = 0;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<int> freq(nums.size(), 0);

        req(nums, freq);
        return ans;
    }
};