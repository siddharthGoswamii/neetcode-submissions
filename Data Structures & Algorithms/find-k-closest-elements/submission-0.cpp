class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> res;
        if(x >= arr[n-1]){
            for(int i = n-k ; i < n ; i++){
                res.push_back(arr[i]);
            }
            return res;
        }

        if(x <= arr[0]){
            for(int i = 0 ; i < k ; i++){
                res.push_back(arr[i]);
            }
            return res;
        }

        int smaller = INT_MAX;
        int l = 0 , r = n-1;
        while(r-l+1 > k){
            if(abs(arr[l]-x) <= abs(arr[r]-x)){
                r--;
            }else{
                l++;
            }
        }

        for(int i = l ; i <= r ; i++){
            res.push_back(arr[i]);
        }
        return res;
    }
};