class Solution {
public:
    bool areArraysEqual(int a[], int b[]) {
        for (int i = 0; i < 26; i++)
            if (a[i] != b[i])
                return false;

        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int k = p.length();

        vector<int> answer;
        if(k>n)
            return answer;

        int processedArray[26] = {0};

        for (int i = 0; i < k; i++)
            processedArray[p[i] % 97] += 1;

        // for(int i=0;i<26;i++)
        //     cout<<processedArray[i]<< " ";
        // cout<<endl;
        int currentArray[26] = {0};

        // First window
        int left = 0;
        int right;

        for (right = 0; right < k; right++)
            currentArray[s[right] % 97] += 1;


        bool areEqual = areArraysEqual(currentArray, processedArray);
        if (areEqual)
            answer.push_back(left);

        for (right = k; right < n; right++) {
            currentArray[s[left] % 97] -= 1;
            left++;

            currentArray[s[right] % 97] += 1;
            areEqual = areArraysEqual(currentArray, processedArray);
            if (areEqual)
                answer.push_back(left);
        }

        return answer;
    }
};