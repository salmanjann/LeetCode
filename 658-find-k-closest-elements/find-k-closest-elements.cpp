class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> answer(k);
        int n = arr.size();

        int start = 0; 
        int end = n-1;
        int mid;

        int lastStart= start,lastEnd= end;
        int closest = -1;

        while(start <= end){
            if(start < end){
                lastStart = start;
                lastEnd = end;
            }

            mid = (start + end) / 2;

            if(arr[mid] == x){
                closest = mid;
                break;
            }
            else if(arr[mid] < x )
                start = mid + 1;
            else 
                end = mid -1;
        }

        // cout<<"Start "<<start << " end "<<end<<endl;
        
        if(closest == -1){
            if(end < 0)
                closest = start;
            else if(start > n-1)
                closest = end;
            else if(abs(arr[start] - x) < abs(arr[end] - x))
                closest = start;
            else if(abs(arr[start] - x) > abs(arr[end] - x))
                closest = end;
            else{
                if(arr[start] < arr[end])
                    closest = start;
                else
                    closest = end;
            }
        }

        // cout<<"closest " << closest<<endl;
        // if(k==1)
        // {
        //     answer[0] = arr[closest];
        //     return answer;
        // }

        int left = closest -1;
        int right = closest + 1;

        for(int i=0; i<k-1; i++){
        // cout<<"Left "<<left<<" Right "<<right<<endl; 
            if(left < 0){
                right++;
            }
            else if(right > n-1){
                left--;
            }
            else if(abs(arr[left] - x) < abs(arr[right] - x)){
                left--;
            }
            else if(abs(arr[left] - x) > abs(arr[right] - x)){
                right++;
            }
            else{
                if(left <= right)
                    left--;
                else
                    right++;
            }

        }

        // cout<<"Left "<<left<<" Right "<<right<<endl; 
        left++;
        for(int i= 0; i<k; i++){
            answer[i] = arr[left++];
        }
        return answer;
    }
};