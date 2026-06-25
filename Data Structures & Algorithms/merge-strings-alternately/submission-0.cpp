class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.size() + word2.size();
        int n = min(word1.size() , word2.size());
        int w1 = 0 , w2 = 0;
        string res(m,' ');
        for(int i = 0 ; i<n*2 ; i++){
            if(i%2==0){
                res[i] = word1[w1];
                w1++;
            }else{
                res[i] = word2[w2];
                w2++;
            }
        }

        if(w1<word1.size()){
            for(int i = n*2 ; i<m ; i++){
                res[i] = word1[w1++];
            }
        }else if(w2<word2.size()){
            for(int i = n*2 ; i < m ; i++){
                res[i] = word2[w2++];
            }
        }

        return res;
    }
};