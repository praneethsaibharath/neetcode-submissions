class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int , char> mp;
        for(int &num : nums){
            if(mp[num]){return true;}
            mp[num] = true;
        }
    return false;
    }
};