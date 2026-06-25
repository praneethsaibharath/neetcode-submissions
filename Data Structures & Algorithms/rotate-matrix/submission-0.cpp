class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i = 0;
        int j = n-1;
        while(i<j){
            swap(matrix[i],matrix[j]);
            i++;
            j--;
        }
        for(int p=0;p<n;p++){
            for(int q=p+1;q<m;q++){
                int temp = matrix[p][q];
                matrix[p][q] = matrix[q][p];
                matrix[q][p] = temp;
            }
        }
    return;
    }
};
