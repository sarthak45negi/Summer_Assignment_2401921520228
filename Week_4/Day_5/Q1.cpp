class Solution {
public:
    bool is_mirror(TreeNode* t1, TreeNode* t2){
        if(t1 == nullptr && t2 == nullptr) return true;
        if(t1 == nullptr || t2 == nullptr) return false;
        return (t1->val == t2->val) &&
               is_mirror(t1->left, t2->right) &&
               is_mirror(t1->right, t2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return is_mirror(root->left, root->right);
    }
};