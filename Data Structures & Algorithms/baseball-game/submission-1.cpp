class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> stack;
        for(const string& op:operations){
            if(op == "+"){
                int top = stack.back();
                stack.pop_back();
                int newTop = top + stack.back();
                stack.push_back(top);
                stack.push_back(newTop);
            }
            else if(op == "C"){
                stack.pop_back();
            }
            else if(op == "D"){
                stack.push_back(stack.back()*2);
            }
            else{
                stack.push_back(stoi(op));
            }
        }
        // return accumulate(stack.begin(),stack.end(),0);
        int sum = 0;
    for(int i = 0 ; i < stack.size() ; i++){
        sum += stack[i];
    }
    return sum;
    }
};