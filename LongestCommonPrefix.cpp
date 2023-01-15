// LONGEST COMMON PREFIX
/*
  PROBLEM LINK
  https://leetcode.com/problems/longest-common-prefix/description/
*/
// SOLUTION
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result= "";
        if(strs.size() == 1)
        {
            return strs[0];
        }
        for (int i = 0; strs[0][i] != '\0' && strs[1][i] != '\0'; i++)
        {
            if (strs[0][i] == strs[1][i])
                result += strs[0][i];
            else
                break;
        }
        
        for(int i=2; i<strs.size();i++)
        {
            for (int j = 0; result[j] != '\0'; j++)
            {
                if(result[j] != '\0' && strs[i][j] == '\0')
                {
                    for (int k = result.size() - 1; k >= j; k--)
                        result.pop_back();
                    break;                    
                }
                if (result[j] == '\0' || strs[i][j]=='\0')
                    break;
                if (result[j] == strs[i][j])
                    continue;
                else
                {
                    for (int k = result.size() - 1; k >= j; k--)
                        result.pop_back();
                    break;
                }
            }
        }
        return result;
    }
};
