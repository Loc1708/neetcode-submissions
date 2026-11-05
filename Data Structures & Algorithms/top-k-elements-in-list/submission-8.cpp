class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> meo;
vector<int> kq;
priority_queue<pair<int,int>> res;
for (auto c : nums)
	meo[c]++;
for (auto c : meo)
	res.push({ c.second,c.first });
for (int i = 1; i <= k; i++)
{
	kq.push_back(res.top().second);
	res.pop();
}

return kq;
    }
};
