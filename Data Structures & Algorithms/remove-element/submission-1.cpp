class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // unordered_map<int,int> mp;
        int l = 0;
        for(int num:nums){
           if(num!=val){
            nums[l++] = num;
           }
        }
    //    int count = 0;
    //     for(int i = 0 ; i < mp.size() ; i++){
    //         while(mp[i] == 0){

    //         }
    //     }
        return l;
    }
};