class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long l = *max_element(weights.begin(),weights.end());
        long long r = accumulate(weights.begin(),weights.end(),0);

        while(l < r){
            int mid = l + (r-l)/2;

            int requiredays = 1;
            int currentweight = 0;

            for(int w : weights){
                if(currentweight + w > mid){
                    requiredays++;
                    currentweight = 0;
                }
                currentweight += w;
            }

            if(requiredays <= days){
                r = mid;
            }else{
                l = mid+1;
            }
        }
        return l;
    }
};