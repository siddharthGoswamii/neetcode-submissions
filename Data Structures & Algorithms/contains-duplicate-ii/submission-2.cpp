class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // long long l = 0, r = 1;
        // while(r<nums.size()){
        //     if(nums[l]==nums[r]){
        //         long long diff = abs(l - r);
        //         if(diff <= k) return true;
        //     }
        //     r++;
        // }

        // while(l<r){
        //     if(nums[l]==nums[r]){
        //         long long diff = abs(l - r);
        //         if(diff <= k) return true;
        //     }
        //     l++;
        // }

        // return false;

        for(int i = 0 ; i < nums.size()-1 ; i++){
            for(int j = i+1 ; j < nums.size() ; j++){
                if(nums[i]==nums[j]){
                    int diff = abs(i-j);
                    if(diff <= k){
                        return true;
                    }
                }
            }
        }
        return false;

    }
};