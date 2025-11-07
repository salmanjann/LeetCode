class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
        int start = 0; 
        int end = n-1;
        int mid;

        int k = -1;
        // looking for the rotation point
        while(start <= end){
            mid = (start + end) / 2;

            if(start < n-1 && nums[start] > nums[start + 1]){
                k = start; 
                break;
            }
            if(end >= 0 && end <n-1 && nums[end] > nums[end + 1]){
                k = end; 
                break;
            }
            if(mid < n-1 && nums[mid] > nums[mid+1]){
                k = mid;
                break;
            }
            
            if(nums[start] < nums[mid]){
                start = mid + 1;
            }
            else{
                end = mid-1;
            }
        }

        // Selecting which half to search for target
        if(k == -1){
            // Normal binary search
            start = 0;
            end = n-1;
        }
        else if(nums[0] <= target && target <= nums[k]){
            // search in left side
            start = 0; end = k;
        }
        else {
            start = k+1; end = n-1;
        }
        cout<<" K "<<k<<endl;
        k=-1;

        while(start <= end){
            cout<<"k "<<k<<" start "<<nums[start]<<" mid "<<nums[mid]<<" end "<<nums[end]<<endl;
            mid = (start + end) / 2;

            if(nums[mid] == target){
                k = mid;
                break;
            }
            
            if(target > nums[mid]){
                start = mid + 1;
            }
            else{
                end = mid-1;
            }
        }

        return k;
    }
};