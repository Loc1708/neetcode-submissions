class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
vector<int>res(nums.size());
res[0] = 1;
for (int i = 0; i < res.size()-1; i++)
{
	res[i+1] = res[i] * nums[i];
}
vector<int>res1(nums.size());
res1[nums.size() - 1] = 1;
for (int i = nums.size()-1; i > 0; i--)
{
	res1[i-1] = res1[i] * nums[i];
}

nums.clear();
	for (int i = 0; i < res.size(); i++)
	{
		nums.push_back(res[i] * res1[i]);
	}
	
	return nums;
    }
};
