class Solution {
public:
    bool checkValidString(string s) {
        int unmatched_min = 0;
        int unmatched_max = 0;
        for(char &c : s){
            if(c == '('){
                unmatched_min++;
                unmatched_max++;
            }
            else if(c == ')'){
                unmatched_min--;
                unmatched_max--;
            }
            else{
                unmatched_min--;
                unmatched_max++;
            }
            if(unmatched_max<0){return false;}
            unmatched_min = max(0,unmatched_min);
        }
    return unmatched_min == 0;
    }
};
