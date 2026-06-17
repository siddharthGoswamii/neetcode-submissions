class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int longest = 0;

        unordered_set<int> sequence(nums.begin(),nums.end());
        for(int a : sequence){
            if(sequence.find(a-1)==sequence.end()){
                int length = 1;

                while(sequence.find(a+length)!=sequence.end()){
                    length++;
                }
                longest = max(length, longest);
            }
        }
        return longest;
    }
};
