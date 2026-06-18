class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int a = 0;
        int b = numbers.size()-1;
        while(a<b){
            int sum = numbers[a]+numbers[b];
            if(sum==target){
                res.push_back(a+1);
                res.push_back(b+1);
                return res;
            }else if(sum>target){
                b--;
            }else{
                a++;
            }
        }
        return res;
    }
};
