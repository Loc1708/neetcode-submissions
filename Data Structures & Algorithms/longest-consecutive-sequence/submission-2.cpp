class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
	return 0;
}
unordered_set <int> meo;
for (auto c : nums)
{
	meo.insert(c);
}

priority_queue<int> pq;

for (auto c: meo)
{
	int count = 1;
	while (meo.find(c + count) != meo.end())
		count++;
	pq.push(count);
}
return pq.top();
    }
};
