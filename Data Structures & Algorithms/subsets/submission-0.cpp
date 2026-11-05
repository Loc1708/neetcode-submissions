class Solution {
public:
void backTrack(int i,int n,vector<int> nums ,vector<vector<int>> &res, vector<int> sol) {
	if (i == n) {
		res.push_back(sol);
		return;
	}
	backTrack(i + 1, n, nums,res, sol);

	sol.push_back(nums[i]);
	backTrack(i + 1, n, nums, res, sol);
	sol.pop_back();
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
vector<int> sol;
int n = nums.size();
int i = 0;
backTrack(i, n, nums,res, sol);

return res;
    }
};
