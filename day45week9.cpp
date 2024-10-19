#include <iostream>
#include <queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void insert(int data, Node*& root){
    Node* n = new Node(data);
    if(root == nullptr){
        root = n;
        return;
    }
    
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
        if(temp -> left != nullptr){
            q.push(temp -> left);
        }
        else{
            temp -> left = n;
            return;
        }
        if(temp -> right != nullptr){
            q.push(temp -> right);
        }
        else{
            temp -> right = n;
            return;
        }
    }
}

void inorder(Node* root){
    if(root == nullptr) return;
    
    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}
void postorder(Node* root){
    if(root == nullptr) return;
    
    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
}
void preorder(Node* root){
    if(root == nullptr) return;
    
    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}
int main(){
    int n;
    scanf("%d",&n);
    Node* root = nullptr;
    while(n){
        int num;    
        scanf("%d",&num);
        
        insert(num, root);
        n--;
    }
    printf("Inorder: ");
    inorder(root);
    printf("\n");
    printf("Preorder: ");
    preorder(root);
    printf("\n");
    printf("Postorder: ");
    postorder(root);
}