class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> res;
        int l = 0 , ans = 0;

        for(int i = 0 ; i<s.size() ; i++){
            while(res.find(s[i])!=res.end()){
                res.erase(s[l++]);
            }

            res.insert(s[i]);
            ans = max(ans,i-l+1);
        }
        return ans;


        // set<char> res;
        // int ans = 0;
        // int count , l = 0;
        // for(int i = 0 ; i < s.size() ; i++){
        //     if(res.find(s[i])!=res.end()){
        //         if(res.size()>1){
        //             res.erase(s[l++]);
        //         }
        //         ans = max(count,ans);
        //         count = res.size();
        //     }else{
        //         count++;
        //     }

        //     res.insert(s[i]);
        // }
        // return ans;
    }
};
