class Solution {
public:
    int maxArea(vector<int>& height) {
        int nElements = height.size() -1;
        int maxArea = -1;

        int left = 0;
        int right = nElements;

        int lesser = 0;

        while(left != right){
            if(height[left] <= height[right]){
                lesser = height[left];
                left++;
            }
            else{
                lesser = height[right];
                right--;
            }

            if(maxArea < nElements * lesser)
                maxArea = nElements * lesser;

            nElements--;
        }

        return maxArea;
    }
};