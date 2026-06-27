/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *l;
 *     TreeNode *right;
 *     TreeNode() : val(0), l(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), l(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *l, TreeNode *right) : val(x), l(l), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        int m = preorder.size();
        map<int,int>mp;
        for(int i = 0 ; i < n; i++){
            mp[inorder[i]] = i;
        }
        return gen( preorder,0,m-1 , inorder ,0 , n-1 , mp);
    }
    TreeNode* gen(vector<int>& preorder,int ps,int pe,vector<int>& inorder , int is , int ie , map<int,int> &mp ){
        if(ps > pe || is > ie) return nullptr;
        TreeNode* node = new TreeNode(preorder[ps]);
        int inroot = mp[node->val];
        int l = inroot -is;
        node->l = gen( preorder,ps+1, ps+l, inorder ,is , inroot-1 ,mp);
        node->right = gen( preorder,ps+1+l, pe, inorder ,inroot + 1 , ie, mp);
        return node;
    }
};