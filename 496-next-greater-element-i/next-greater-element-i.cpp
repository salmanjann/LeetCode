#include<stack>
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n= nums1.size();
        int n2= nums2.size();
        stack<int> st;
        vector<int> result(n,-1);
        vector<int> result2(n2,-1);

        for(int i=0;i<n2;i++){
            while(!st.empty() && nums2[i] > nums2[st.top()]){
                result2[st.top()] = nums2[i];
                st.pop();
            }
            if(st.empty())
            {
                st.push(i);
                continue;
            }

            if(nums2[i] < nums2[st.top()])
            {
                st.push(i);
                continue;
            }
        }

        for(int i=0; i<n;i++){
            for(int j=0;j<n2;j++){
                if(nums1[i] == nums2[j]){
                    result[i] = result2[j];
                    break;
                }
            }
        }
        return result;
    }
};