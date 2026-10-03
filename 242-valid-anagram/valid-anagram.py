class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len (t):
            return False

        counter = {}

        # Time complexity 0(N) and space 0(1), max 26 keys

        for ch in s:
            counter[ch] = counter.get(ch, 0) + 1

        for ch in t:
            if counter.get(ch, 0) == 0:
                return False
            counter[ch] -= 1

        return True