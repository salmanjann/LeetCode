class Solution {
public:
    int myAtoi(string s) {
        int myNum = 0;
        int i;
        for (i = 0; s[i] == ' '; i++) {
            continue;
        }

        int sign = 1;

        if (s[i] == '-') {
            sign = -1;
            i++;
        }
        else if(s[i] == '+'){
            sign = 1;
            i++;
        }

        while (s[i] == '0')
            i++;

        int digit = 0;
        while (s[i] != '\0' && s[i] >= 48 && s[i] <= 57) {
            digit = s[i] - 48;
            
            if(myNum > 0 && sign == -1){
                myNum *= sign;
            }
            if (myNum > INT_MAX / 10 ) {
                myNum = INT_MAX;
                break;
            } else if (myNum < INT_MIN / 10) {
                myNum = INT_MIN;
                break;
            }
            myNum *= 10;
            if(myNum > INT_MAX - digit){
                myNum = INT_MAX;
                break;
            }
            else if(myNum < INT_MIN + digit){
                myNum = INT_MIN;
                break;
            }
            if(myNum >= 0){
                myNum += digit;
            }
            else
                myNum -= digit;
            i++;
        }

        if(myNum > 0 && sign == -1)
            myNum *= sign;

        return myNum;
    }
};