class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> A;
        for(int a:nums){
            A[a]++;
        }

        vector<vector<int>> freq(nums.size()+1);
        for(const auto& entry:A){
            freq[entry.second].push_back(entry.first);
        }

        vector<int> res;
        for(int i=freq.size()-1; i>0; --i){
            for(int a:freq[i]){
                res.push_back(a);
                if(res.size()==k){
                    return res;
                }
            }
        }
        return res;
    }
};
