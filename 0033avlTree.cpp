#include<iostream>
using namespace std;
struct Node {
    int key;
    Node* left;
    Node *right;
    int height;
};

int height(Node* node){
    if (node == NULL){
        return 0;
    }
    return node->height;
}

int max(int a , int b){
    return (a > b) ? a : b;
}

Node* newNode(int key ){
    Node*  node = new Node();
    node->key = key ;
    node->left=NULL;
    node->right=NULL;
    node->height=1;
    return(node);
}  

Node* RotateRight(Node* node_y_axis){
    Node* x= node_y_axis->left;
    Node* T2 =x->right;

    x->right=node_y_axis ;
    node_y_axis->left=T2;
    
    node_y_axis->height= max(height(node_y_axis->left),height(node_y_axis->right))+1;
    x->height= max(height(x->left),height(x->right))+1;
    return x;
}

Node* RotateLeft(Node* node_x_axis){
    Node* y= node_x_axis->right;
    Node* T2= y -> left;
    
    y->left=node_x_axis;
    node_x_axis->right=T2;

    node_x_axis->height=max(height(node_x_axis->left),height(node_x_axis->right))+1;
    y->height=max(height(y->left),height(y->right))+1;
    
    return y;
}

int getBalance(Node* node){
    if( node == NULL ) return 0;
    return height(node->left) - height(node->right);
}

Node* Insert(Node* node , int key ){
 
    if (node ==NULL ) return (newNode(key));
    if(key<node->key){
        node->left= Insert(node->left,key);
    }else if(key > node->key){
        node->right=Insert(node->right,key);
    }else{
        return node ;
    }
 
    node -> height=1 + max(height(node->left),height(node->right));

    int balance = getBalance(node);
    
        if(balance > 1 && key < node->left->key){
        return RotateRight(node);
    }
    
    if(balance < -1 && key > node->right->key){
        return RotateLeft(node);
    }
    
    if(balance >1 && key > node->left->key){
        node->left=RotateLeft(node->left);
        return RotateRight(node);
    }
    
    if(balance < -1 && key < node->right->key){
        node->right= RotateRight(node->right);
        return RotateLeft(node);
    }
 
    return node;
}
void preOrder(Node* root){
    if(root != NULL){
        cout<<root->key<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main(){
    Node* root = NULL;

    root = Insert(root, 10);
    root = Insert(root, 20);
    root = Insert(root, 30);
    root = Insert(root, 40);
    root = Insert(root, 50);
    root = Insert(root, 25);
    root = Insert(root, 21);

    cout << "Preorder traversal of the constructed AVL tree is \n";
    preOrder(root);

    return 0;
}
