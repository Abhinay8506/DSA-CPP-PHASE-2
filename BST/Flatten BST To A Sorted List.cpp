void inorder(TreeNode<int>* root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}
TreeNode<int>* flatten(TreeNode<int>* root)
{
    // Write your code here
    vector<int>ans;
    inorder(root,ans);
    TreeNode<int>* curry=new TreeNode<int>(ans[0]);
    TreeNode<int>* curr=curry;
    for(int i=1;i<ans.size();i++){
        TreeNode<int>*temp=new TreeNode<int>(ans[i]);
        curr->left=NULL;
        curr->right=temp;
        curr=temp;
    }
    curr->left=NULL;
    curr->right=NULL;
    return curry;
}
