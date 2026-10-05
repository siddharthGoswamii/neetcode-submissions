class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i = 0 ; i < nums.size() ; i++){
            int t = nums[i];

            if(mp.find(t)!=mp.end()){
                return t;
            }
            mp[t]++;
        }
    }
};
