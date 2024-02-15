#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};
 int min_value_in_tree(TreeNode* root){
   if (!root->left){
    return  root->data;
   }
    min_value_in_tree(root->left);
return 0;
 }
//  int min_value_in_tree(TreeNode* root){
//     if (!root->left) {
//         return root->data;
//     }
//     return min_value_in_tree(root->left);
// }
void insert_BST(TreeNode *&root, int num)
{
    if (!root)
    {
        root = new TreeNode(num);
    }
    else if (num < root->data)
    {
        if (!root->left)
            root->left = new TreeNode(num);
        else
            insert_BST(root->left, num);
    }
    else
    {
        if (!root->right)
            root->right = new TreeNode(num);
        else
            insert_BST(root->right, num);
    }
}

void print_inorder(TreeNode *root)
{
    if (!root)
        return;

    print_inorder(root->left);
    cout << root->data << " ";
    print_inorder(root->right);
}

int main()
{
    TreeNode *root =new TreeNode(7);

    // insert_BST(root, 7);
    insert_BST(root, 5);
    insert_BST(root, 6);
    insert_BST(root, 8);
    insert_BST(root, 10
    
    
    );

  //  cout << "Inorder Traversal: ";
  //  print_inorder(root);
cout << min_value_in_tree(root);
    return 0;
}
