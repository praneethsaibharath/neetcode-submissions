class Solution {
public:
    int reverse(int x) {
        long long check = 1LL << 31;
        if(x<-check || x>check-1){return 0;}
        int sign = 1;
        if(x<0){
            sign = -1;
            x = -x;
        }
        long long rev = 0;
        while(x != 0){
            rev = rev*10 + (x%10);
            x/=10;
        }
        rev*=sign;
        if(rev<-check || rev>check-1){return 0;}
    return rev;
    }
};
