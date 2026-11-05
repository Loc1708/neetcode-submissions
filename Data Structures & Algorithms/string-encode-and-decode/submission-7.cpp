class Solution {
public:

    string encode(vector<string>& strs) {
string s = "";
for (auto c : strs)
{
	s += to_string(c.length());
	s += '#';
	s += c;
}
return s;
    }

    vector<string> decode(string s) {
vector<string> str;
for (int i = 0; i < s.length(); i++)
{
	
	int q = i;
	string t = "";
	while (isdigit(s[q]))
	{
		t += s[q];
		q++;
	}
	int count = 0;
	if(!t.empty())
		 count = stoi(t);
	
	string l = "";
	int k = q+1;
	for (int j = 0; j < count; j++)
	{
		l += s[k];
		k++;
	}
	i = k-1;
	str.push_back(l);
}
return str;
    }
};
