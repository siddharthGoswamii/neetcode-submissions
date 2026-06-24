class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> res(nums.begin(),nums.end());
        int i = 0;

        for(int a:res){
            nums[i++] = a;
        }
        return i;
    }
};