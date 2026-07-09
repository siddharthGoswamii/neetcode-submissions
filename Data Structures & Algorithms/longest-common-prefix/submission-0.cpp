class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string store = strs[0];
        int ans = INT_MAX;
        for(int i = 1 ; i < strs.size() ; i++){
            int count = 0 ;
            string take = strs[i];
            int l = 0;
            while(l<store.size()){
                if(store[l] == take[l]){
                    count++;
                    l++;
                }else{
                    break;
                }
            }
            ans = min(ans,count);
            if(ans == 0) return "";
        }
        return store.substr(0,ans);
    }
};