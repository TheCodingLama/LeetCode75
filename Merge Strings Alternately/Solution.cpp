class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    int longestStringLength = (word1.length()>word2.length())?  word1.length():  word2.length();
    string retVal = "";
    for(int i=0;i<longestStringLength;i++) {
        if(i<word1.length()) retVal+=word1[i];
        if(i<word2.length()) retVal+=word2[i];
    }
    return retVal;
    }
};