class Solution {
public:
    string longestPalindrome(string s) {
        string currentLargest = "";
        string currentStr = "";
        bool isPalindrome = true;

        for(int i=0; i<s.length();i++){
            currentStr += s[i];
            for (int j=i+1; j<s.length();j++){
                currentStr += s[j];
                isPalindrome = true;

                // check palindrome
                for (int k=0, l=currentStr.length()-1; k<currentStr.length() /2;k++,l--){
                    if(currentStr[k] != currentStr[l])
                    {
                        isPalindrome = false;
                        break;
                    }
                }

                if(isPalindrome){
                    if(currentLargest.length() < currentStr.length()){
                        currentLargest = currentStr;
                    }
                }
                
            }
            currentStr = "";
        }
        if(currentLargest == "")
            currentLargest = s[0];
        return currentLargest;
    }
};