//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/580/week-2-january-8th-january-14th/3602/

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        if(people.size() == 1)
            return 1;
        sort(people.begin(), people.end());
        int min_boats=0;
        int l = 0, r = people.size()-1;
        while(l<=r){
            if((people[l]+people[r])<=limit){
                min_boats++;
                l++;
                r--;
            }
            else{
                min_boats++;
                r--;
            }
        }
        return min_boats;
    }
};