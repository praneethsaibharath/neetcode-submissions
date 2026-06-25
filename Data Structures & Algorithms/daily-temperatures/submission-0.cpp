class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> indices;
        unordered_map<int , int> answer;
        int n = temperatures.size();
        for(int i=0;i<n;i++){
            while(!indices.empty() && temperatures[i] > temperatures[indices.top()]){
                int index = indices.top();
                indices.pop();
                answer[index] = i - index;
            }
            indices.push(i);
        }
        while(!indices.empty()){
            answer[indices.top()] = 0;
            indices.pop();
        }
        vector<int> result(n);
        for(int i=0;i<n;i++){result[i] = answer[i];}
    return result;
    }
};
