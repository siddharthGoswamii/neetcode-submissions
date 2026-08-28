class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        long long r = *max_element(piles.begin(),piles.end());

        while(l < r){
            int mid = l + (r-l)/2;
            int totalTime = 0;
            for(int pile:piles){
                totalTime += (pile + mid-1)/mid;
            }

            if(totalTime <= h){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        return l;
    }
};
