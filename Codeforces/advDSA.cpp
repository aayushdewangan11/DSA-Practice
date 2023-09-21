#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

struct TrieNode {
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;
    vector<int> positions;

    TrieNode() : isEndOfWord(false) {}
};

class Trie {
public:
    Trie() {
        root = new TrieNode();
    }
    void insert(const string& word, int position) {
        TrieNode* node = root;
        for (char ch : word) {
            if (!node->children.count(ch)) {
                node->children[ch] = new TrieNode();
            }
            node = node->children[ch];
        }
        node->isEndOfWord = true;
        node->positions.push_back(position);
    }

    vector<int> search(const string& pattern) {
        TrieNode* node = root;
        vector<int> positions;
        for (char ch : pattern) {
            if (!node->children.count(ch)) {
                return positions; // Pattern not found
            }
            node = node->children[ch];
        }
        if (node->isEndOfWord) {
            positions = node->positions;
        }
        return positions;
    }

private:
    TrieNode* root;
};

int main() {
    string text = "abababababababababababababababababababababababababababababab";
    vector<string> patterns = {"ababab", "aabb", "bbaa", "baba", "ABAB"};

    Trie trie;
    int n = text.length();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            string substring = text.substr(i, j - i);
            trie.insert(substring, i);
        }
    }

    for (const string& pattern : patterns) {
        vector<int> positions = trie.search(pattern);
        cout << "Pattern: " << pattern << endl;
        cout << "Exists: " << (!positions.empty()) << endl;
        cout << "Count: " << positions.size() << endl;
        cout << "Positions: ";
        for (int pos : positions) {
            cout << pos << " ";
        }
    }
}
