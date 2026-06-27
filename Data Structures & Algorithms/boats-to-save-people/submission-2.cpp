class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int a = 0;
        int b = people.size()-1; 
        int count = 0;
        int sum = 0;

        while(a<=b){
            sum = people[a]+people[b];
            if(sum>limit){
                count++;
                sum = 0;
                b--;
            }else if(sum==limit){
                count++;
                sum = 0;
                a++;
                b--;
            }else{
                while(a<b && sum<limit){
                    sum += people[a++]+people[b];
                }
                count++;
                a++;
            }
        }
        return count;
    }
};