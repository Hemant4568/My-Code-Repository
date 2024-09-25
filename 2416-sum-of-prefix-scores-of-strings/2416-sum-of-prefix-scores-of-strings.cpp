class Solution {
public:
    struct TrieNode {
        TrieNode* children[26];  // For 26 lowercase English letters
        int count;  // Count of how many words/prefixes pass through this node

        TrieNode() {
            count = 0;
            for (int i = 0; i < 26; ++i) {
                children[i] = nullptr;
            }
        }
    };

    // Trie class to manage the insertion and scoring of words
    class Trie {
    public:
        TrieNode* root;

        Trie() {
            root = new TrieNode();
        }

        // Insert a word into the Trie and count the prefixes
        void insert(const string& word) {
            TrieNode* node = root;
            for (char ch : word) {
                int index = ch - 'a';
                if (!node->children[index]) {
                    node->children[index] = new TrieNode();
                }
                node = node->children[index];
                node->count++;  // Increment the count for this node
            }
        }

        // Get the score of a word by summing the counts of its prefixes
        int getScore(const string& word) {
            TrieNode* node = root;
            int score = 0;
            for (char ch : word) {
                int index = ch - 'a';
                if (!node->children[index]) {
                    break;
                }
                node = node->children[index];
                score += node->count;  // Add the count for this prefix
            }
            return score;
        }
    };

    vector<int> sumPrefixScores(vector<string>& words) {
          Trie trie;

        // Step 1: Insert all words into the Trie
        for (const string& word : words) {
            trie.insert(word);
        }

        // Step 2: Calculate the score for each word
        vector<int> result;
        for (const string& word : words) {
            result.push_back(trie.getScore(word));
        }

        return result;
    }
};