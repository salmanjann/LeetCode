class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();

        vector<int> answer(2);

        // Brute force O(n^2)

        // for(int i=0; i<n-1; i++){
        //     for(int j= i+1; j<n; j++){
        //         if(nums[i] + nums[j] == target){
        //             answer[0] = i;
        //             answer[1] = j;
        //             break;
        //         }
        //     }
        // }

        // Sorting will distrub order of indices, so you'll need O(n) extra space plus O(nlogn) for sorting
        // Using Hashset

        unordered_map<int, int> seen;
        for(int i=0; i<n; i++){
            int toFind = target - nums[i];

            if(seen.count(toFind) > 0){
                answer[0] = i;
                answer[1] = seen[toFind];
                break;
            }
            seen.insert({nums[i],i});
        }


        return answer;
    }
};