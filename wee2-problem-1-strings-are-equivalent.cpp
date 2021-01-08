//https://leetcode.com/explore/challenge/card/january-leetcoding-challenge-2021/580/week-2-january-8th-january-14th/3597/
class Solution {
public:
    string makeString(vector<string>& word){
        string s ="";
        for(int i=0;i<word.size();i++){
            for(int j=0;j<word[i].length();j++){
                s = s+word[i][j];
            }
        }
        return s;
    }
    
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "", s2 = "";
        s1 = makeString(word1);
        s2 = makeString(word2);
        return (s1==s2 ? true : false);
    }
};