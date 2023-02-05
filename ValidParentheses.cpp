// VALID PARENTHESES
/*
  PROBLEM LINK
  https://leetcode.com/problems/valid-parentheses/description/
*/
// SOLUTION
class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 1)
            return false;
        stack<char> stk;
        char c;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                stk.push(s[i]);
                continue;
            }
            else if(s[i]== ')' )
            {
                if(stk.empty() == true)
                    return false;
                c= stk.top();
                if(c == '(')
                    stk.pop();
                else
                    return false;
            }
            
            else if(s[i]== '}' )
            {
                if(stk.empty() == true)
                    return false;
                c= stk.top();
                if(c == '{')
                    stk.pop();
                else
                    return false;
            }
            else if(s[i]== ']' )
            {
                if(stk.empty() == true)
                    return false;
                c= stk.top();
                if(c == '[')
                    stk.pop();
                else
                    return false;
            }
        }
        if(stk.empty() == false)
            return false;
        return true;
    }
};
