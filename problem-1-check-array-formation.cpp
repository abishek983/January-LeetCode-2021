// https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/579/week-1-january-1st-january-7th/3589/

class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int arr_len = arr.size();
        for(int i=0; i<arr.size();){
            int flag = 0;
            for(int j=0;j<pieces.size();j++){
                for(int k=0;k<pieces[j].size() && i<arr.size();k++){
                    if(arr[i] == pieces[j][k]){
                        i++;
                        flag = 1;
                    }
                    else if(k>0)
                        return false;
                    else
                        break;
                }
            }
            if(!flag)
                return false;
        }
    return true;
    }
};