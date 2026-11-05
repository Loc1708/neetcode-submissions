class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> meo;
for (int i = 0; i < board.size(); i++)
{
	for (int j = 0; j < board[i].size(); j++)
	{
		string cot, hang, box;
		cot = hang = box = "";
		if (board[i][j] == '.')
			continue;
		else
		{
			
			hang = string("r") + to_string(i) + string("n") + to_string(board[i][j]);
			cot = string("c") + to_string(j) + string("n") + to_string(board[i][j]);
			box = string("b") + to_string(i / 3) + to_string(j / 3) + to_string(board[i][j]);
			if (meo.find(hang) != meo.end() || meo.find(cot) != meo.end() || meo.find(box) != meo.end()) 
				return false;
			else
			{
				meo.insert(hang);
				meo.insert(cot);
				meo.insert(box);
			}
			
		}
	}
}
return true;
    }
};
