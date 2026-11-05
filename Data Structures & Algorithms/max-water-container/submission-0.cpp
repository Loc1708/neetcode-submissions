class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0;
int r = h.size() - 1;
int res = 0;
while (l < r)
{
	int dis = r - l;

	int min = h[l];
	if (min > h[r])
		min = h[r];
	int luu = dis * min;
	if (res < luu) res = luu;

	if (h[l] < h[r])
		l++;
	else if (h[l] > h[r])
		r--;
	else
	{
		l++;
		r--;
	}

}
return res;
    }
};
