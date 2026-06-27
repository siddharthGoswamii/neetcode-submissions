class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int a = 0;
        int b = people.size()-1; 
        int count = 0;

        while(a<=b){
           int sum = people[a]+people[b];
            if(sum>limit){
                count++;
                b--;
            }else{
                count++;
                a++;
                b--;
            }
        }
        return count;
    }
};