class Solution {
public:
    int mySqrt(int x) {
        if(x == 0){
            return 0;
        }
        int res;
        for(int i = 0 ; i<=x ; i++){
            if((long long)i*i >x){
                return res;
            }
            res = i;
        }
    }
};