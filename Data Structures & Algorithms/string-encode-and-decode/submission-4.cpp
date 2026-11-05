class Solution {
public:

    string encode(vector<string>& strs) {
        string tam="";
for (int i = 0; i < strs.size(); i++)
{
	string saving=strs[i];
	int sum = saving.length();
	tam += to_string(sum);
	tam += "#";
	tam += saving;

}
return tam;
    }

    vector<string> decode(string s) {
        vector<string> meo;
int sum = 0;
string tam ="";
string saving = "";
for (int i = 0; i < s.length(); i++)
{
	
	while (isdigit(s[i]))
	{
		tam += s[i];
		i++;
		
	}
	sum = stoi(tam);
	int k = i + 1;   //  10#!@#$%^&*()
	for (int j = 1; j <= sum; j++)
	{
			saving += s[k];
			k++;
	}
	meo.push_back(saving);
	saving = "";
	i = k-1;
	tam = "";
	
	
}
return meo;
    }
};
