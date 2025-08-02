#include <bits/stdc++.h>
using namespace std;

class Node {
public: 
  int data;
  Node* left;
  Node* right;
  
  Node(int val) {
    data = val;
    left = right = NULL;
  }
};

static int i = -1;
Node* buildTree(vector<int>& preorder) {
  i++;
  if (preorder[i] == -1) {
    return NULL;
  }
  Node* root = new Node(preorder[i]);
  root->left = buildTree(preorder);
  root->right = buildTree(preorder);
  
  return root;
}

 

int main() {
  // Preorder traversal of a binary search tree (BST)
  vector<int> preorder = {1, 2, -1, -1, 3, -1, -1, 4, -1, -1};
  Node* root = buildTree(preorder);

  printBST(root); // Assuming printBST is defined to print the BST
  return 0;
}