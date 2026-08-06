class Solution {
public:
    string decodeString(string s) {
        vector<string> stack;
        
        for(const char& c:s){
            if(c!=']'){
                stack.push_back(string(1,c));
            }else{
                string substr = "";
                while(stack.back()!="["){
                    substr = stack.back() + substr;
                    stack.pop_back();
                }
                stack.pop_back();

                string k = "";
                while(!stack.empty() && isdigit(stack.back()[0])){
                    k = stack.back() + k;
                    stack.pop_back();
                }

                int repeatedCount = stoi(k);
                string repeat = "";

                for(int i = 0 ; i < repeatedCount ; i++){
                    repeat = substr + repeat;
                }
                stack.push_back(repeat);
            }
        }
        string res = "";
        for(const string& c:stack){
            res += c;
        }
        return res;
    }
};