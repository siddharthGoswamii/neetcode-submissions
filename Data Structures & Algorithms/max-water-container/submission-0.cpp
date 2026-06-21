class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = INT_MIN;
        int count = 0 ;
        for(int a:heights){
            int i = count+1;
            while(i<heights.size()){
                int small = min(heights[i],a);
                int val = small*(i-count);
                res = max(res,val);
                i++;
            }
            count++;
        }
        return res;
        
    }
};
