// IS SUBSEQUENCE
/*
  PROBLEM LINK
  https://leetcode.com/problems/is-subsequence/description/?envType=study-plan&id=level-1
 */
// SOLUTION
class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool result = true;
        int prevJ = 0; 
        bool charFound = false;
        for(int i=0; s[i] != '\0';i++)
        {
            charFound = false;
            for(int j=prevJ; t[j] != '\0';j++)
            {
                if(s[i] == t[j])
                {
                    charFound = true;
                    prevJ = j+1;
                    break;
                }
            }
            if(!charFound)
            {
                result = false;
                break;
            }
        }
        return result;
    }
};
