#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int x){
    data=x;
    left = right = NULL;
  }
};

void inorderTraversal(Node* root, vector<int>& arr){
  if(root==NULL){
    return;
  }
  inorderTraversal(root->left, arr);
  arr.push_back(root->data);
  inorderTraversal(root->right, arr);
} 
void preorderFill(Node* root, vector<int>& arr, int& index){
  if(root==NULL){
    return;
  }
  root->data = arr[index++];
  preorderFill(root->left, arr, index);
  preorderFill(root->right, arr, index);
}

void BSTtoMinHeap(Node* root){
  vector<int> arr;
  inorderTraversal(root, arr);
  int index=0;
  preorderFill(root, arr, index);
}

void preorderPrint(Node* root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  preorderPrint(root->left);
  preorderPrint(root->right);
}


int main(){

  Node* root = new Node(4);
  root->left = new Node(2);
  root->right = new Node(6);
  root->left->left = new Node(1);
  root->left->right = new Node(3);
  root->right->left = new Node(5);
  root->right->right = new Node(7);

  BSTtoMinHeap(root);
  preorderPrint(root);
  
  return 0;
}