class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        int mark = 1;

        while(mark<n){
            mark = (mark<<1) + 1;
        }
        return mark ^ n;
    }
};