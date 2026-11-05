class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freg;
        if(s.size() == t.size())
        {           
            

            for(char c: s)
            {
                freg[c]++;
            }
            for(char c: t)
            {
                freg[c]--;
            }
            for(auto c: freg)
            {
                if(c.second !=0)
                    return false;
            }
            return true;
        }
    
     return false;


    }
};
