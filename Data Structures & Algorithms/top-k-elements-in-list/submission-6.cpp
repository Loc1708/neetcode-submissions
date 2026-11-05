class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;

for (int i = 0; i < nums.size(); i++)
{
	hash[nums[i]]++;
}
priority_queue<pair<int,int>> pq;
vector<int> meo;
for (auto& c : hash)
{
	pq.push({ c.second,c.first });
}
while (!pq.empty())
{
	meo.push_back(pq.top().second);
	pq.pop();
	if (meo.size() == k)
		break;
}
return meo;
    }
};
