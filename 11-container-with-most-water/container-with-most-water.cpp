class Solution {
public:
    int maxArea(vector<int>& height) {
        int nElements = height.size() -1;
        int maxArea = -1;

        int left = 0;
        int right = nElements;

        int newArea = 0;

        while(left != right){
            newArea = 0;
            if(height[left] <= height[right]){
                newArea = nElements * height[left];
                if(maxArea < newArea)
                    maxArea = newArea;
                
                left++;
            }
            else{
                newArea = nElements * height[right];
                if(maxArea < newArea)
                    maxArea = newArea;
                
                right--;
            }
            nElements--;
        }

        return maxArea;
    }
};