class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size()==1){
            return nums;
        }

        unordered_map<int,int> A;

        for(const auto& s:nums){
            A[s]++;
        }

        vector<pair<int,int>> store;

        for(const auto& pair:A){
            store.push_back({pair.second,pair.first});
        }
        sort(store.begin(),store.end());

        vector<int> result;
        int n=store.size();

        for(int i=1;i<=k;i++){
            result.push_back(store[n-i].second);
        }
        return result;
    }
};
