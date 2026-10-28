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

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s = ""; 
        if(!root) return "";
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node = q.front();
            q.pop();
            if(node==nullptr) s+="#,";
            else{
                s+=(to_string(node->val)+",");
            }
            if(node!=NULL){
                q.push(node->left);
                q.push(node->right);
            }

        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data.empty()) return nullptr;

        stringstream ss(data);
        string val;

        getline(ss, val, ',');
        TreeNode* root = new TreeNode(stoi(val));

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            if (!getline(ss, val, ',')) break; //left child ke liye

            if (val != "#") {
                node->left = new TreeNode(stoi(val));
                q.push(node->left);
            }
            if (!getline(ss, val, ',')) break; //right child ke liye 

            if (val != "#") {
                node->right = new TreeNode(stoi(val));
                q.push(node->right);
            }
        }

        return root;


        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));