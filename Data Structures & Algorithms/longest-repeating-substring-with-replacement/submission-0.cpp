class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        vector<int> freq(26,0);
        int maxfreq = 0;
        int left = 0;
        int longest = 0;
        for(int right=0;right<n;right++){
            char alpha = s[right];
            freq[alpha-'A']++;
            maxfreq = max(freq[alpha-'A'],maxfreq);
            while(right-left+1-maxfreq > k){
                freq[s[left]-'A']--;
                left++;
            }
            longest = max(right-left+1,longest);
        }
    return longest;
    }
};
