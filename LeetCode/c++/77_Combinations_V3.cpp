class Solution 
{
private:
    void backtracking(int k, vector<vector<int>>& res, vector<int>& combination, vector<int>& nums, int begin)
    {
        if (k == 0)
        {
            res.push_back(combination);
        }
        else
        {
            for (int i = begin; i < nums.size(); i++)
            {
                combination.push_back(nums[i]);
                backtracking(k - 1, res, combination, nums, i + 1);
                combination.pop_back();
            }
        }
    }
public:
    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>> res; vector<int> combination; vector<int> nums(n, -1); int begin = 0;
        for (int i = 0; i < nums.size(); i++) nums[i] = i + 1;
        if (n == k) {res.push_back(nums); return res;}
        k = k % n;
        backtracking(k, res, combination, nums, begin);
        return res;
    }
};