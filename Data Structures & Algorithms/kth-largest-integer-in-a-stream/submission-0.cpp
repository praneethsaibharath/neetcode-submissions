class KthLargest {
    priority_queue<int , vector<int> , greater<int>> pq;
    int required;

public:
    KthLargest(int k, vector<int>& nums) {
        required = k;
        for(int &num : nums){
            pq.push(num);
            if(pq.size() > required){pq.pop();}
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > required){pq.pop();}
        return pq.top();
    }
};
