class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node==NULL){
            return 0;
        }
        int lheight=height(node->left);
        int rheight=height(node->right);
        return max(lheight,rheight)+1;
    }
};
