class Solution {
public:
void backTrack(int i, int n,int target, int tong,vector<int> nums, vector<vector<int>>& res, vector<int> &val) {
	
	if (tong == target) {
		res.push_back(val);
		return;
	}
	
	if (i >= n || tong > target) {
		
		return;
	}
	
backTrack(i + 1, n, target, tong, nums, res, val);

if (tong + nums[i] > target) return;
val.push_back(nums[i]);



backTrack(i, n, target, tong + nums[i], nums, res, val);
val.pop_back();
	
}
  vector<vector<int>> combinationSum(vector<int>& nums, int target) {
	vector<vector<int>> res;
	vector<int> val;
	int i = 0;
	int n = nums.size();
	int tong = 0;
	backTrack(i, n, target,tong,nums, res, val);
	return res;
}
};
