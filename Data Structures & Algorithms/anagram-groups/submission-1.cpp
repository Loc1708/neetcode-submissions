class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> meo;
unordered_map<string, vector<string>> tam; // ki nang moi
for (auto c : strs)
{
	string str = c;
	sort(str.begin(), str.end());
	string str1 = c;
	sort(str1.begin(), str1.end());
	if(str1 == str)
	tam[str].push_back(c);

	
}
for (auto c : tam)
{
	meo.push_back(c.second);
}
return meo;
    }
};
