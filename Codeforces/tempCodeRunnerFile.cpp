#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    string val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(string x) : val(x), left(NULL), right(NULL) {}
};

bool isOperator(string token) {
    return token == "+" || token == "-" || token == "*" || token == "/";
}

class Solution {
public:
    TreeNode* buildExpressionTree(vector<string>& postfix) {
        stack<TreeNode*> st;

        for (string token : postfix) {
            if (!isOperator(token)) {
                st.push(new TreeNode(token));
            } else {
                TreeNode* right = st.top();
                st.pop();
                TreeNode* left = st.top();
                st.pop();
                TreeNode* node = new TreeNode(token);
                node->left = left;
                node->right = right;
                st.push(node);
            }
        }

        return st.top();
    }
};

void inorderTraversal(TreeNode* node) {
    if (node) {
        inorderTraversal(node->left);
        cout << node->val << " ";
        inorderTraversal(node->right);
    }
}

int main() {
    vector<string> postfix = {"9", "3", "+", "15", "20", "+", "7", "*", "-"};

    Solution solution;
    TreeNode* root = solution.buildExpressionTree(postfix);

    cout << "Inorder traversal of constructed expression tree: ";
    inorderTraversal(root);

    return 0;
}