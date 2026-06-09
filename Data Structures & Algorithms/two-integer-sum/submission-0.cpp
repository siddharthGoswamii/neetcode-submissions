class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> store;
        for(int i=0;i<nums.size();i++){
            store.push_back({nums[i],i});
        }

        sort(store.begin(),store.end());

        int i=0 , j=nums.size()-1;

        while(i<j){
            int curr=store[i].first + store[j].first;
            if(curr==target){
                return {min(store[i].second,store[j].second),
                        max(store[i].second,store[j].second)};
            }else if(curr>target){
                j--;
            }else{
                i++;
            }
        }
        return {};
    }
};
