class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
for (auto& x : nums) {
	map[x]++;
}
priority_queue<pair<int, int>> pq;
for (auto& i : map) {
	pq.push({i.second,i.first});
}
vector<int> kq;
for (int i = 0; i < k; i++) {
	kq.push_back(pq.top().second);
    pq.pop();
}
return kq;
    }
};
