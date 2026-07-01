class Solution {
public:
    bool bs(vector<int> &arr , int target){
        int low = 0;
        int high = arr.size() - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid] == target){return true;}
            else if(arr[mid] > target){high = mid - 1;}
            else{low = mid + 1;}
        }
    return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int low = 0;
        int high = rows - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            int start = matrix[mid][0];
            int end = matrix[mid][cols - 1];
            if(start <= target && target <= end){return bs(matrix[mid] , target);}
            else if(start > target){high = mid - 1;}
            else{low = mid + 1;}
        }
    return false;
    }
};
