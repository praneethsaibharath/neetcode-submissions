class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_size = s.size();
        int t_size = t.size();
        if(s_size != t_size){return false;}
        vector<int> freq(26,0);
        for(int i=0;i<t_size;i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(int &num : freq){
            if(num != 0){return false;}
        }
    return true;
    }
};
