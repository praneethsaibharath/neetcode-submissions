class Solution {
public:
    int function(vector<int>& piles , int speed){
        int time = 0;
        for(int &pile : piles){
            time+=((pile+speed-1)/speed);
        }
    return time;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin() , piles.end());
        int answer = high;
        while(low <= high){
            int mid = low + (high - low)/2;
            int time = function(piles,mid);
            if(time <= h){
                answer = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
    return answer;
    }
};
