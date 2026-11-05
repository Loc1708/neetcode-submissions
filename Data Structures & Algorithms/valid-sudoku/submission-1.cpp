class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> meo;
for (int i = 0; i < board.size(); i++)
{
	for (int j = 0; j < board[i].size(); j++) {
		if (board[i][j] == '.') continue;
		else
		{
			string cot, dong, box = " ";
			cot = string("cot") + to_string(j) + string("n") + to_string(board[i][j]);
			dong = string("dong") + to_string(i) + string("n") + to_string(board[i][j]);
			box = string("b") + to_string(i / 3) + to_string(j / 3) +to_string(board[i][j]);
			if (meo.find(cot) != meo.end() || meo.find(dong) != meo.end() || meo.find(box) != meo.end())
				return false;
			else
			{
				meo.insert(cot);
				meo.insert(dong);
				meo.insert(box);
			}
		}
		
	}
}
return true;
    }
};
