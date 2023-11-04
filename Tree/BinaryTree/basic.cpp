#include<bits/stdc++.h>
using namespace std;
template <typename T> class BinaryTreeNode{
    public:
    T data;
    BinaryTreeNode*left;
    BinaryTreeNode*right;
    BinaryTreeNode(T data){
        this->data = data;
        left = NULL;
        right = NULL;                                                          
    }
    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};
/*
void printTree(BinaryTreeNode<int>*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    if(root->left!=NULL){
        cout<<"L"<<root->left->data;
    }
    if(root->right!=NULL){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    printTree(root->left);
    printTree(root->right);
}

//TakeInput from User Step-2
BinaryTreeNode<int>*TakeInput(){
    int rootData;
    cout<<"Enter data"<<endl;
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    BinaryTreeNode<int>*root = new BinaryTreeNode<int>(rootData);
    BinaryTreeNode<int>*leftChild = TakeInput();
    BinaryTreeNode<int>*rightChild = TakeInput();
    root->left = leftChild;
    root->right = rightChild;
    return root;
}

int main(){  
    //Take Input Dynamically  Step-1
    // BinaryTreeNode<int>*root = new BinaryTreeNode<int>(1);
    // BinaryTreeNode<int>*node1 = new BinaryTreeNode<int>(2);
    // BinaryTreeNode<int>*node2 = new BinaryTreeNode<int>(3);
    // root->left = node1;
    // root->right = node2;
    // printTree(root);
    
    //TakeInput from User Step-2
    BinaryTreeNode<int>*root = TakeInput();
    printTree(root);

    return 0;
}
*/


//TakeInput LevelWise
BinaryTreeNode<int>*TakeInputLevelWise(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    if(rootData==-1){
        return NULL;
    }
    BinaryTreeNode<int>*root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>*front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter left child of "<<front->data<<endl;
        int leftChildData;
        cin>>leftChildData;
        if(leftChildData!=-1){
           BinaryTreeNode<int>*child = new BinaryTreeNode<int>(leftChildData);
           front->left = child;
           pendingNodes.push(child);
        }
        cout<<"Enter right child of "<<front->data<<endl;
        int rightChildData;
        cin>>rightChildData;
        if(rightChildData!=-1){
           BinaryTreeNode<int>*child = new BinaryTreeNode<int>(rightChildData);
           front->right = child;
           pendingNodes.push(child);
        }
    }
    return root;
}

void printLevelWise(BinaryTreeNode<int> *root) {
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*>pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size()!=0) {
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<front->data<<":";

        BinaryTreeNode<int>*leftChild=front->left, *rightChild=front->right;
        if (leftChild) {
          cout<<"L:"<<leftChild->data<<",";
            pendingNodes.push(leftChild);
        }
        else{
            cout<<"L:"<<-1<<",";
        }
    
        if (rightChild) {
           cout<<"R:"<<rightChild->data<<endl;
            pendingNodes.push(rightChild);
        }
        else {
            cout<<"R:"<<-1<<endl;
        }
    }
    return;      
}
int main(){ 
    BinaryTreeNode<int>*root = TakeInputLevelWise();
    printLevelWise(root);
    return 0;
}
