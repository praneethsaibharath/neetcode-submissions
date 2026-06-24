class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string , bool> seen;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char c = board[i][j];
                if(c == '.'){continue;}
                string row = string(1,c) + 'r' + to_string(i);
                string col = string(1,c) + 'c' + to_string(j);
                string box = string(1,c) + 'r' + to_string(i/3) + 'c' + to_string(j/3);
                if(seen[row] || seen[col] || seen[box]){return false;}
                seen[row] = true;
                seen[col] = true;
                seen[box] = true;
            }
        }
    return true;
    }
};
