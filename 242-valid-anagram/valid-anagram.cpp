class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        int frequencies[26];

        for(int i=0; i<s.length();i++)
            frequencies[s[i] % 97] += 1;

        for(int i=0; i<t.length();i++)
            frequencies[t[i] % 97] -= 1;

        for(int i=0; i<26; i++)
            if(frequencies[i] > 0)
                return false;

        return true;
    }
};