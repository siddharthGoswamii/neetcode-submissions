class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        ans=nums;
        int n=ans.size();
         ans.resize(2*n);
        for(int i=0;i<n;i++){
            ans[n+i]=nums[i];
        }
        return ans;
    }
};