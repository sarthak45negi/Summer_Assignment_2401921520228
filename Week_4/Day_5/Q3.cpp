/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void serializeDFS(TreeNode* root, string &s){
        if (!root) {
            s += "n,";
            return;
        }
        s += to_string(root->val) + ",";
        serializeDFS(root->left, s);
        serializeDFS(root->right, s);
    }
    string serialize(TreeNode* root) {
        string s;
        serializeDFS(root, s);
        return s;
    }
    TreeNode* deserializeDFS(stringstream &ss){
        string val;
        getline(ss, val, ',');
        if (val == "n")  return NULL;
        TreeNode* node = new TreeNode(stoi(val));
        node->left = deserializeDFS(ss);
        node->right = deserializeDFS(ss);
        return node;
    }
    TreeNode* deserialize(string data){
        stringstream ss(data);
        return deserializeDFS(ss);
    }
};