class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());
    deque<int> result;
        for (int i = 0; i < deck.size(); ++i){
        result.push_back(i);
    }
    
    vector<int> revealed(deck.size());
    
    for (int card : deck) {
        revealed[result.front()] = card;
        result.pop_front();
        if (!result.empty()) {
            result.push_back(result.front());
            result.pop_front();
        }
    }
    
    return revealed;

    }
};