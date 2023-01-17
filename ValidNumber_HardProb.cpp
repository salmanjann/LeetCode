// Valid Number ( MY FIRST HARD PROBLEM SOLVED IN CPP )
/*
  PROBLEM LINK
  https://leetcode.com/problems/valid-number/description/
*/
// SOLUTION
class Solution {
public:
    bool isNumber(string s) {
        if(s=="e" || s== "E" || s== "."|| s=="+" || s=="-")
            return false;
        bool result = true;
        bool isEfound = false;
        bool isDotfound = false;
        bool isSignfound = false;
        bool isNumberfound = false;
        bool isNumAfterE = false;
        for(int i=0; s[i] != '\0'; i++)
        {
            if((s[i] < 48 && s[i] != '+' && s[i] != '-' && s[i] != '.') || (s[i] > 57 && s[i] != 'e' && s[i]!= 'E'))
            {
                cout<<"1"<<endl;
                result = false;
                break;
            }
            else if( s[i] == 'e' || s[i] == 'E' )
            {
                if(isEfound || !isNumberfound || s[i+1] == '\0')
                {
                    cout<<"2"<<endl;
                    result = false;
                    break;
                }
                isEfound = true;
            }
            else if(s[i] == '.')
            {
                if(isEfound || isDotfound || (!isNumberfound && s[i+1] == '\0') )
                {
                    cout<<"3"<<endl;
                    result = false;
                    break;
                }
                isDotfound = true;
            }
            else if(s[i] == '+' || s[i] == '-')
            {
                if((isSignfound && !isEfound)|| (isNumberfound && !isEfound) || (isDotfound && !isNumberfound) || (isEfound && isNumAfterE))
                {
                    cout<<"4"<<endl;
                    result = false;
                    break;
                }
                isSignfound = true;
            }
            else if( s[i] >=48 && s[i] <= 57 && !isNumberfound)
            {
                isNumberfound = true;
            }
            else if( s[i] >=48 && s[i] <= 57 && isEfound)
                isNumAfterE = true;

        }
        if(!isNumAfterE && isEfound)
            result = false;
        return result;
    }
};
