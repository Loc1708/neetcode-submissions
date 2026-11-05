class Solution {
public:
    bool hasDuplicate(vector<int>& a) {
        unordered_map<int, int> meo;
for (auto c : a)
{
	meo[c]++;
}
for (auto c : meo) {
	if (c.second > 1)
		return true;
	
}
return false;
    }
};