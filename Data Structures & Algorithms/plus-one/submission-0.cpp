class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int i = n-1;
        while(i>=0 && digits[i] == 9){i--;}
        if(i<0){
            vector<int> answer(n+1,0);
            answer[0] = 1;
            return answer;
        }
        vector<int> answer(n,0);
        for(int j=0;j<i;j++){answer[j] = digits[j];}
        answer[i] = digits[i] + 1;
    return answer;
    }
};
