public class Solution {
    public int LengthOfLongestSubstring(string s) {
        Dictionary<char, int> map = new Dictionary<char,int>();
        int maxLength = 0;

        int left =0;
        int right = 0;

        while(right < s.Length){
            if (!map.ContainsKey(s[right]))
    map[s[right]] = 0;

map[s[right]]++;


            if(map[s[right]] > 1){
                // shrink
                while(map[s[right]] != 1){
                    map[s[left]] -= 1;
                    left+=1;
                }
            }
            if(right - left + 1 > maxLength)
                maxLength = right - left + 1;

            right += 1;
        }

        return maxLength;
    }
}