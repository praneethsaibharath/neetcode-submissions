class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        while(i<j){
            int check = numbers[i] + numbers[j];
            if(check == target){return {i+1,j+1};}
            else if(check < target){i++;}
            else{j--;}
        }
    return {};
    }
};
