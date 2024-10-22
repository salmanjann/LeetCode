class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;

        int mask = 0;
        int notN = ~n;
        while(n!=0){
            mask = mask << 1;
            mask = mask | 1;

            n = n >> 1;
        }

        return notN & mask;
    }
};