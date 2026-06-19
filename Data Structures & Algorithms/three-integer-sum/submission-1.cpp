class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0 ; i<nums.size() ; i++){
            if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
            }
            int a = i+1, b = nums.size()-1;
            
            int target = -(nums[i]);
            while(a<b){
                int sum = nums[a] + nums[b];
                if(sum == target){
                    res.push_back({nums[i],nums[a],nums[b]});

                    while(a<b && nums[a]==nums[a+1]) a++;
                    while(a<b && nums[b]==nums[b-1]) b--;
                }
                if(sum>target){
                    b--;
                }else{
                    a++;
                }
            }
        }
        return res;
    }
};
