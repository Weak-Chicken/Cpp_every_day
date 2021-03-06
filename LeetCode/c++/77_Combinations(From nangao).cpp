/*
Solution inspired by nangao on https://leetcode.com/problems/combinations/discuss/27111/My-shortest-c%2B%2B-solutionusing-dfs
*/
class Solution 
{
private:
    void backtracking(int k, vector<vector<int>>& res, vector<int>& combination, int n, int begin)
    {
        if (k == 0)
        {
            res.push_back(combination);
            return;
        }
        else
        {
            for (int i = begin; i < n; i++)
            {
                combination.push_back(i + 1);
                backtracking(k - 1, res, combination, n, i + 1);
                combination.pop_back();
            }
        }
    }
public:
    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>> res; vector<int> combination; int begin = 0;
        if (n < k) return res;
        // k = k % n;
        backtracking(k, res, combination, n, begin);
        return res;
    }
};