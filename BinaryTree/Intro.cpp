#include<iostream>
#include<queue>
using namespace std;

class node{
  public:
  int data;
  node * left;
  node * right;

  node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
  }
};

node* buildtree(node* root){
cout<<"Enter the data:";
int data;
cin>>data;
root=new node(data);

if(data==-1){
  return NULL;
} 


cout<<"Enter the data for left of"<<data<<endl;
root->left=buildtree(root->left);

cout<<"Enter the data for right of"<<data<<endl;
root->right=buildtree(root->right);

return root;
}

void levelordertraversal(node* root){
  queue<node*> q;
  q.push(root);
  q.push(NULL);

  while(!q.empty()){
    node* temp=q.front();
    q.pop();
    if(temp==NULL){
      cout<<endl;
      if(!q.empty()){
        q.push(NULL);
      }
    }
else{ 
    cout<<temp->data<<" ";
    if(temp->left){
      q.push(temp->left);
    }
    if(temp->right){
      q.push(temp->right);
    }
}
  }
}

//LNR
void inorder(node* root){
  if(root==NULL){
    return;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}

//NLR
void preorder(node* root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}

//LRN 
void postorder(node* root){
  if(root==NULL){
    return;
  }
  postorder(root->left);
  postorder(root->right);
  cout<<root->data<<" ";
}

void buildtreefromlevelorder(node* &root){
  queue<node*> q;
  cout<<"Enter the data for root:";
  int data;
  cin>>data;
  root=new node(data);
  q.push(root);
  while(!q.empty()){
    node* temp=q.front();
    q.pop();
    cout<<"Enter the left node for"<<temp->data<<endl;
    int leftdata;
    cin>>leftdata;
    if(leftdata!=-1){
      temp->left=new node(leftdata);
      q.push(temp->left);
    }
    cout<<"Enter the right node for"<<temp->data<<endl;
    int rightdata;
    cin>>rightdata; 
    if(rightdata!=-1){
      temp->right=new node(rightdata);
      q.push(temp->right);
    }
  }
  
}
int main(){
 node * root = NULL;
 
 buildtreefromlevelorder(root);
 levelordertraversal(root);

 // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

/*
 root=buildtree(root);
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
cout<<"Level order traversal is:"<<endl;
levelordertraversal(root);

cout<<"Inorder traversal is:"<<endl;
inorder(root);

cout<<"Preorder traversal is:"<<endl;
preorder(root);

cout<<"Postorder traversal is:"<<endl;
postorder(root);


  
  */
  
 return 0;
  
}
