class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0, r = s.size()-1;

    while(l<r){
        if(s[l]!=s[r]){
            return isPalindrome(s.substr(0,l) + s.substr(l+1)) || 
                    isPalindrome(s.substr(0,r) + s.substr(r+1));
        }
        l++;
        r--;
    }
    return true;
}

private:
     bool isPalindrome(string s){
        string rev = s;
        reverse(rev.begin(),rev.end());
        if(rev!=s){
            return false;
        }else{
            return true;
        }
    }

};

