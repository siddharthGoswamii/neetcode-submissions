class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res = 0;
        for(int l = 0 ; l < nums.size() ; l++){
            int cnt = 0, r = l;
            while(r < nums.size()){
                if(nums[r]==0){
                    if(cnt == k) break;
                    cnt++;
                }
                r++;
            }
            res = max(res,r-l);
        }
        return res;
    }
};