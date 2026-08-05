class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        stringstream ss(path);
        string token;

        while(getline(ss,token,'/')){
            if(token == "" || token == "."){
                continue;
            }
            if(token == ".."){
                if(!st.empty()){
                     st.pop_back();
                }
               
            }else{
                st.push_back(token);
            }
        }

        string res = "";
        for(const string& c: st){
            res += "/" + c;
        }

        return res.empty() ? "/":res;
    }
};