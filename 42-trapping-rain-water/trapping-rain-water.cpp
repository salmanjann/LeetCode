class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();

        // O(n^2) solution that somehow passes all tests
        int sum = 0;
        // int reserveSum = 0;
        // int sumTillMax = 0;
        // int maxI = -1;
        // for(int left = 0; left<n-1; left++){
        //     reserveSum = 0;
        //     sumTillMax = 0;
        //     maxI = left + 1;
        //     // cout<<"Left "<<height[left] <<endl;
        //     for(int right = left +1; right< n; right++){
        //         // cout<<" right " <<height[right] <<endl;
        //         if(height[right] < height[left]){
        //             if(height[right] > height[maxI]){
        //                 sumTillMax = reserveSum;
        //                 maxI = right;
        //             }
        //             reserveSum += height[left] - height[right];
        //             // cout<< " Res sum "<<reserveSum<<endl;

        //         }
        //         else {
        //             maxI = right;
        //             sum += reserveSum;
        //             left = right-1;
        //             break;
        //         }
        //     }
        //     // cout<<"Maxi "<<height[maxI]<<endl;
        //     // cout<<"Sum Till "<<sumTillMax<<endl;
        //     if(height[maxI] < height[left]){
        //         int diff = height[left] - height[maxI];
        //         int elements = maxI - left -1;

        //         if(elements>=1){
        //             sum += sumTillMax - (diff * elements);
        //             left = maxI -1; 
        //         }
        //     }
        // }

        // Two pointers (Neetcode)
        
        int left = 0;
        int right = n-1;

        int leftMax = height[left];
        int rightMax = height[right];

        while(left < right){
            if(leftMax < rightMax){
                left++;
                leftMax = leftMax > height[left] ? leftMax : height[left];
                sum += leftMax - height[left];
            }
            else{
                right--;
                rightMax = rightMax > height[right] ? rightMax : height[right];
                sum += rightMax - height[right];
            }
        }

        return sum;
    }
};