class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xor_all = 0;
        for(int &num : nums){xor_all^=num;}
        if(n%4 == 0){return n^(xor_all);}
        else if(n%4 == 1){return 1^(xor_all);}
        else if(n%4 == 2){return (n+1)^(xor_all);}
        return xor_all;
    }
};
