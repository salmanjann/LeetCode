// AddToArrayFormOfInt
/*
  PROBLEM LINK
  https://leetcode.com/problems/add-to-array-form-of-integer/description/
*/
// SOLUTION
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=0, toAdd,n;
        vector<int> result;
        for(int i=num.size()-1;i>=0; i--)
        {
            if(k==0)
            {
                toAdd = 0;
            }
            else
            {
                toAdd = k%10;
                k/=10;
            }
            n = carry + toAdd + num[i];
            if(n<10)
            {
                result.insert(result.begin(), n);
                carry =0;
            }
            else
            {
                result.insert(result.begin(), n%10);
                carry =1;
            }
        }  
        while(k!=0)
        {
            if(carry ==1)
            {
                if(k%10 != 9)
                {
                    result.insert(result.begin(), (k%10) +1);
                    carry =0;
                }
                else
                {
                    result.insert(result.begin(), 0);
                }
            }
            else
                result.insert(result.begin(), k%10);
            k/=10;
        }
        if(carry ==1) 
            result.insert(result.begin(), 1);     
        return result;
    }
};
