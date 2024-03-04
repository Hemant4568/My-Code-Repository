class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int left=0,right=tokens.size()-1;
        int maxscore=0;
        int score=0;
        while(left<=right)
        {
            if(power>=tokens[left])
            {
                power-=tokens[left];
                left++;
                score++;
              maxscore=max(maxscore,score);
            }
            else if(score>=1)
            {
                power+=tokens[right--];
                score=score-1;
            }
            else
                break;
        }
        return maxscore;
    }
};