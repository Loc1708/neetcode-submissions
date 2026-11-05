class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> meo;

for (auto c : s)
	meo[c]++;
for (auto c : t)
	meo[c]--;
for (auto c : meo)
	if (c.second != 0) return false;
return true;
    }
};
