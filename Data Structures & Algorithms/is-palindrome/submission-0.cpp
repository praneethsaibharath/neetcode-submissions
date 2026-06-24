class Solution {
public:
    bool isPalindrome(string s) {
        string check1 = "";
        string check2 = "";
        int n = s.size();
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){check1+=tolower(s[i]);}
            if(isalnum(s[n-1-i])){check2+=tolower(s[n-1-i]);}
        }
    return check1 == check2;
    }
};
