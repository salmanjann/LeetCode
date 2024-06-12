class Solution {
public:

    void generate_subsets(vector<vector<int>>& subsets, vector<int>& subset, vector<int>& nums, int k){
    if(k== nums.size()){
        subsets.push_back(subset);
        return ;
    }
    else{
        // Include k
        subset.push_back(nums[k]);
        generate_subsets(subsets,subset,nums,k+1);
        
        // Exclude k
        subset.pop_back();
        generate_subsets(subsets,subset,nums,k+1);
        
    }
}

vector<vector<int>> subsets(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int> subset;
    generate_subsets(ans,subset,nums,0);  

    // Time Complexity = O(n!)
    return ans;  
}
};