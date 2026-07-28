class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size());
        for(int l = 0 ; l < temperatures.size() ; l++){
            int count = 1;
            int r;
            for(r = l+1 ; r < temperatures.size() ; r++){
                if(temperatures[l]<temperatures[r]){
                    break;
                }else{
                    count++;
                }
            }
            count = (r == temperatures.size()) ? 0 : count;
            res[l] = count ;

        }
        
        return res;
    }
};
