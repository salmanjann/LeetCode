class Solution {
public:
    void printSubset(vector<int> subset){
        for(int i=0;i<subset.size();i++)
            cout<<subset[i]<<" ";

        cout<<"\n";
    }

    void generate_subsets_with_dups(vector<vector<int>> &subsets, vector<int> &subset, vector<int> &nums, int k)
{
    if (k == nums.size())
    {
        bool canAdd = true;
        cout<<"Naya subset:\n ";
        printSubset(subset);
        for (int i = 0; i < subsets.size(); i++)
        {
            if (subsets[i].size() != subset.size())
                continue;
            canAdd = false;
            cout<<"Comaring with: \n";
            printSubset(subsets[i]);
            vector<int> indices;
            bool idk = false;
            for (int j = 0; j < subset.size(); j++)
            {
                bool isFound= false;
                for(int k=0; k<subset.size(); k++){
                    if(subset[j] == subsets[i][k]){
                        bool isSameIndex = false;
                        cout<<"Indices: \n";
                        printSubset(indices);
                        for(int l = 0;l<indices.size();l++){
                            if(indices[l]== k){
                                isSameIndex = true;
                                break;
                            }
                        }

                        if(isSameIndex)
                            continue;
                        
                        isFound = true;
                        indices.push_back(k);
                        break;
                    }
                }
                if(!isFound)
                    {canAdd = true;break;}
                if(j == subset.size()-1 && isFound)
                    idk = true;
            }
            if(idk)
                break;
        }
        if (canAdd){
            cout<<"Added subset: \n";
            printSubset(subset);
            subsets.push_back(subset);
        }
        return;
    }
    else
    {
        // Include k
        subset.push_back(nums[k]);
        generate_subsets_with_dups(subsets, subset, nums, k + 1);

        // Exclude k
        subset.pop_back();
        generate_subsets_with_dups(subsets, subset, nums, k + 1);
    }
}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
    vector<int> subset;
    generate_subsets_with_dups(ans, subset, nums, 0);
    return ans;
    }
};