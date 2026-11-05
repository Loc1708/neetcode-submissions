class Solution {
public:



    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> b;
unordered_map<string,vector<string>> hash;
for (string c : strs)
{
	string key = c;
	sort(key.begin(), key.end());
	hash[key].push_back(c);
}

for (auto& p : hash)
{
	b.push_back(p.second);
}



return b;
    }
};
