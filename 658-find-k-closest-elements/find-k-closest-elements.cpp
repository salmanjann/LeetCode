class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> answer(k);
        int n = arr.size();

        for(int i=0; i<k;i++)
            answer[i] = arr[i];

        int kPtr = 0;

        for(int i=k; i<n;i++){
            if(abs(answer[kPtr] - x) < abs(arr[i] - x)){
                kPtr++;
            }
            else if(abs(answer[kPtr] - x) > abs(arr[i] - x)){
                answer[kPtr++] = arr[i];
            }
            else{
                if(answer[kPtr] < arr[i])
                    kPtr++;
                else
                    answer[kPtr++] = arr[i];

            }
            kPtr %= k;
        }

        sort(answer.begin(),answer.end());

        return answer;
    }
};