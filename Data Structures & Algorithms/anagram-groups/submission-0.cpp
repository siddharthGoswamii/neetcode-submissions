class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> A;
        for(const auto& s:strs){
            string st = s;
            sort(st.begin(),st.end());
            A[st].push_back(s);
        }
        vector<vector<string>> store;
        for(auto& pair:A){
            store.push_back(pair.second);
        }
        return store;
    }
};
