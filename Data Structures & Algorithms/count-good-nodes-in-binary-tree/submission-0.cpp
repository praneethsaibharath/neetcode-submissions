/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int answer = 0;

    void function(TreeNode* node , int maxi){
        if(node == nullptr){return;}
        if(node->val >= maxi){
            answer++;
            maxi = node->val;
        }
        function(node->left , maxi);
        function(node->right , maxi);
    }

    int goodNodes(TreeNode* root) {
        int maxi = root->val;
        function(root,maxi);
        return answer;
    }
};
