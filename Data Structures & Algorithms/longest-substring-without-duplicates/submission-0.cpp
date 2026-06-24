class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char> st;
        int left = 0;
        int longest = 0;
        for(int right=0;right<n;right++){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            longest = max(right-left+1,longest);
        }
    return longest;
    }
};
