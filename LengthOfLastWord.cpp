// LENGTH OF LAST WORD IN STRING
/*
  PROBLEM LINK
  https://leetcode.com/problems/length-of-last-word/description/
*/
// SOLUTION
class Solution {
public:
    int lengthOfLastWord(string s) {
        string lastWord = "";
        bool isSpaceFound = false;
        for(int i=0; s[i] != '\0';i++)
        {
            if(s[i] == ' ')
                isSpaceFound = true;
            else
            {
                if(isSpaceFound)
                {
                    lastWord = "";
                    lastWord += s[i];
                    isSpaceFound = false;
                }
                else
                    lastWord += s[i];
            }
        }
        int lengthOfLastWord = 0;
        for(int i=0; lastWord[i] != '\0';i++)
            lengthOfLastWord++;
        return lengthOfLastWord;
    }
};
