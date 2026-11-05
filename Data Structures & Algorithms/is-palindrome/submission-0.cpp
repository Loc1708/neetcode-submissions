class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) return true;
string tam = "";
for (auto c : s)
{
	if (isspace(c)) continue;
	if(isalpha(c) || isdigit(c))
		tam += tolower(c);
}
int left = 0;
int right = tam.size() - 1;
while (left < right)
{
	if (tam[left] != tam[right]) return false;
	left++;
	right--;
}
return true;
    }
};
