class Solution {
public:
    bool isPowerOfTwo(int n) {
        // // we can not get 2^31 in int
        // if(n > pow(2,30))
        //     return false;
        // bool isPowerOfTwo;
        // int ans = 1;
        // int i=0;
        // while(ans <= pow(2,30)){
        //     if(ans == n)
        //     {
        //         isPowerOfTwo = true;
        //         break;
        //     }
        //     else if (ans > n)
        //     {
        //         isPowerOfTwo = false;
        //         break;
        //     }
        //     i++;
        //     ans = pow(2,i);
        // }

        // return isPowerOfTwo;

        // there should be only one set bit
        if (n==0)
            return false;
        int count = 0;
        int bit = 0;
        while(n!=0){
            bit = n & 1;
            if(bit == 1)
                count++;
            if(count > 1)
                return false;
            
            n= n>>1;
        }
        return true;
    }
};