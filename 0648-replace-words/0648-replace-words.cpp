class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;

    TrieNode() : isEndOfWord(false) {}
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* node = root;
        for (char c : word) {
            if (node->children.find(c) == node->children.end()) {
                node->children[c] = new TrieNode();
            }
            node = node->children[c];
        }
        node->isEndOfWord = true;
    }

    string findShortestRoot(string word) {
        TrieNode* node = root;
        string prefix = "";
        for (char c : word) {
            if (node->children.find(c) == node->children.end()) {
                break;
            }
            prefix += c;
            node = node->children[c];
            if (node->isEndOfWord) {
                return prefix;
            }
        }
        return word;  // Return the original word if no root is found
    }
};
class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
    Trie trie;
    for (string root : dictionary) {
        trie.insert(root);
    }

    istringstream iss(sentence);
    ostringstream oss;
    string word;
    bool firstWord = true;

    while (iss >> word) {
        if (!firstWord) {
            oss << " ";
        }
        firstWord = false;
        oss << trie.findShortestRoot(word);
    }

    return oss.str();
}
};