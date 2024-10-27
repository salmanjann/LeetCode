class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string currentLargest = "";
        string newSubString = "";
        string currentSubString = "";
        bool isMatched;

        for (int i = 0; i < s.length(); i++) {
            isMatched = false;
            for (int j = 0; j < currentSubString.length(); j++) {
                if (s[i] == currentSubString[j]) {
                    if (currentLargest.length() < currentSubString.length()) {
                        currentLargest = currentSubString;
                    }
                    newSubString = "";
                    isMatched = true;
                    continue;
                }
                if (isMatched)
                    newSubString += currentSubString[j];
            }
            if (isMatched)
                currentSubString = newSubString;
            currentSubString += s[i];
        }
        if (currentLargest.length() < currentSubString.length()) {
            currentLargest = currentSubString;
        }

        return currentLargest.length();
    }
};