class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size()-1;
        if(target > nums[n]) return n+1;
        if(target < nums[0]) return 0;

        int low = 0 , high = n;
        int mid = low + (high - low)/2;

        while(low <= high){
            if(target == nums[mid]){
                return mid;
            }else if(target > nums[mid]){
                low = mid+1;
            }else{
                high = mid - 1;
            }
            mid = low + (high - low)/2;

        }
        
        if(target < nums[mid]){
            return mid;
        }else{
            return mid+1;
        }
    }
};