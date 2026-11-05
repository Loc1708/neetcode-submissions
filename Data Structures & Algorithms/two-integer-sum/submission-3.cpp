class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> hash;
    vector<int> b;
    for (int i = 0; i < nums.size(); i++)
{
	int temp = target - nums[i];
	if (hash.find(temp) != hash.end())
	{
		b.push_back( hash[temp]);
        b.push_back(i);

		/*cout << hash[temp] << "-" << i << endl;*/
	}
	else
	{
		hash[nums[i]] = i;
	}

}

return b;

    }
};
