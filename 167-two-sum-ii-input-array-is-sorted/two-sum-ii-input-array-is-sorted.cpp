class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        int left = 0;
        int right = n-1;

        while(left <= right){
            if(numbers[left] + numbers[right] == target)
                break;
            else if(numbers[left] + numbers[right] < target)
                left++;
            else
                right--;
        }

        vector<int> answer(2);
        answer[0] = left + 1;
        answer[1] = right + 1;

        return answer;
    }
};