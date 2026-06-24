class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int maxarea = min(heights[i],heights[j])*(j-i);
        while(i<j){
            if(heights[i]<heights[j]){i++;}
            else{j--;}
            int area = min(heights[i],heights[j])*(j-i);
            maxarea = max(area,maxarea);
        }
    return maxarea;
    }
};
