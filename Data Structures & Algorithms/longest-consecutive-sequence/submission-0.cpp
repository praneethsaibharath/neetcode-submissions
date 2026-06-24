class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int longest = 0;
        for(int x : st){
            if(st.count(x-1)){continue;}
            int length = 1;
            while(st.count(x+1)){
                length++;
                x++;
            }
            longest = max(length,longest);
        }
    return longest;
    }
};
