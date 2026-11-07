class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
priority_queue<pair<int, int>> q;
for (int i = 0; i < nums.size(); i++) {
	map[nums[i]]++;
}
for (auto x : map) {
	q.push({x.second, x.first});
}
vector<int> res;
for(int i = 1; i <= k; i++){
    res.push_back(q.top().second);
    q.pop();
}
return res;
    }
};
