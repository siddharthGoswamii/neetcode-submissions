class TimeMap {
public:
    unordered_map<string, unordered_map<int, vector<string>>> KeySt;
    TimeMap() {
        
    }
        
    void set(string key, string value, int timestamp) {
        KeySt[key][timestamp].push_back(value);
    }

    string get(string key, int timestamp) {
        if(KeySt.find(key) == KeySt.end()){
            return "";
        }
        int seen = -1;
        for(const auto& [time, _]: KeySt[key]){
            if(time <= timestamp){
                seen = max(seen, time);
            }
        }
        return seen == -1 ? "" : KeySt[key][seen].back();
    }
};
