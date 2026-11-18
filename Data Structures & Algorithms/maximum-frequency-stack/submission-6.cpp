class FreqStack {
    unordered_map<int, int> mp;
    vector<int> st;
public:
    FreqStack() {
        
    }
    
    void push(int val){
        st.push_back(val);
        mp[val]++;
    }

    int pop(){
        int count = 0;
        for(pair<const int, int>& a:mp){
            count = max(count, a.second);
        }

        int i = st.size()-1;
        while(mp[st[i]] != count){
            i--;
        }

        int value = st[i];
        st.erase(st.begin() + i);
        mp[value]--;

        return value;
    }
};