class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> c1,window;
        for(char c:t){
            c1[c]++;
        }
        
        int have = 0, need = c1.size();
        int resLen = INT_MAX;
        int l = 0;
        pair<int,int> res = {-1,-1};

        for(int r = 0 ; r < s.length() ; r++){
            char c = s[r];
            window[c]++;

            if(c1.count(c) && window[c]==c1[c]){
                have++;
            }

            while(have == need){
                if(r-l+1 < resLen){
                    resLen = r-l+1;
                    res = {l,r};
                }

                window[s[l]]--;
                if(c1.count(s[l]) && window[s[l]] < c1[s[l]]){
                    have--;
                }
                l++;
            }
        }
        return (resLen == INT_MAX)?"":s.substr(res.first,resLen);

    }
};
