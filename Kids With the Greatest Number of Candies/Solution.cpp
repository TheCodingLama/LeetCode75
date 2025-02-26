class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int highestCandies = 0;
        for(int i=0;i<candies.size();i++) {
            if(highestCandies<candies[i]) highestCandies = candies[i];
        }

        vector<bool> returnVal(candies.size());

        for(int i=0;i<candies.size();i++) {
            if((candies[i]+extraCandies)>=highestCandies) returnVal[i]=true;
            else returnVal[i]=false;
        }
        return returnVal;
    }
};