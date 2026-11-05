class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
res[0] = 1;
for (int i = 0; i < nums.size()-1; i++)
{
	res[i + 1] = nums[i] * res[i];
	
}
int suf = 1;

for (int i = nums.size()-1; i > 0; i--)
{
	suf = suf * nums[i];
	res[i - 1] *= suf;
}
return res;
    }
};
