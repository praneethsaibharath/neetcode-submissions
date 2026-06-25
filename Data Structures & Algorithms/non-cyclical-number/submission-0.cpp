class Solution {
public:
    int function(int n){
        int answer = 0;
        while(n != 0){
            answer+=(n%10)*(n%10);
            n/=10;
        }
    return answer;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = n;
        do{
            slow = function(slow);
            fast = function(function(fast));
        }while(slow != fast);
    return slow == 1;
    }
};
