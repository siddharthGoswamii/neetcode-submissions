class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(nums.size() == 1){
            return nums;
        }

        vector<int> res;

        for(int i = 0 ; i < nums.size()-k+1 ; i++){
            int take = nums[i];
            for(int j = 1 ; j < k ; j++){
                take = max(take,nums[i+j]);
            }
            res.push_back(take);
        }
        return res;
    
    }
};
