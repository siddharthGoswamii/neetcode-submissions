class Solution {
public:
    bool isPerfectSquare(int num) {
        int l = 1;
        long long r = num;
        while(l<=r){
            long long m = l + (r-l)/2;
            if(m*m == num){
                return true;
            }else if(m*m > num){
                r = m-1;
            }else{
                l = m+1;
            }
        }
        return false;
    }
};