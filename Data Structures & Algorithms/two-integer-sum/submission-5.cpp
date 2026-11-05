class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
vector<int> res;
for (int i = 0; i < nums.size(); i++) {
	int t = target - nums[i];
	if (map.find(t) != map.end()) {
		//tim thay
		res.push_back(map[t]);
		res.push_back(i);
		return res;
	}
	map[nums[i]] = i;
}
return res;
    }
};
