class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int size_1 = s1.size();
        int size_2 = s2.size();
        if(size_2 < size_1){return false;}
        vector<int> target(26,0);
        vector<int> check(26,0);
        for(int i=0;i<size_1;i++){
            target[s1[i]-'a']++;
            check[s2[i]-'a']++;
        }
        if(check == target){return true;}
        for(int i=size_1;i<size_2;i++){
            check[s2[i]-'a']++;
            check[s2[i-size_1]-'a']--;
            if(check == target){return true;}
        }
    return false;
    }
};
