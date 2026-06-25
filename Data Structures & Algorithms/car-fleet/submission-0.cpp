class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        map<int , int> cars;
        for(int i=0;i<n;i++){cars[position[i]] = speed[i];}
        double maxtime = 0;
        int fleets = 0;
        for(auto it=cars.rbegin();it != cars.rend();it++){
            double time = (double)(target - it->first)/(it->second);
            if(time > maxtime){
                fleets++;
                maxtime = time;
            }
        }
    return fleets;
    }
};
