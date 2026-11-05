class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> meo;
vector<int> k;
for (int i = 0; i < nums.size(); i++)
{

	int res = target - nums[i];
	if (meo.find(res) != meo.end())
	{
		k.push_back(meo[res]);
		k.push_back(i);
		return k;
	}
	else
	{
		meo[nums[i]] = i;
	}
}
    }
};
