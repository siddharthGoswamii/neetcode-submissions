class FreqStack {
    unordered_map<int, int> mp;
    vector<int> st;
public:
    FreqStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
        mp[val]++;
    }
    
    int pop() {
        int cnt = 0;
        for (pair<const int, int>& a : mp) {
            cnt = max(cnt, a.second);
        }

        int i = st.size()-1;
        while(mp[st[i]] != cnt){
            i--;
        }

        int val = st[i];
        st.erase(st.begin() + i);
        mp[val]--;

        return val;
    }
};