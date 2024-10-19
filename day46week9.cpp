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

int height(Node* root){
    if(root == nullptr) return 0;
    
    int left = height(root -> left);
    int right = height(root -> right);
    
    return max(left, right) + 1;
}

int count(Node* root){
    if(root == nullptr) return 0;
    
    return count(root -> left) + count(root -> right) + 1;
}

int largest(Node* root, int& max){
    if(root == nullptr) return max;
    
    if(root -> data > max){
        max = root -> data;
    } 
    largest(root -> left, max);
    largest(root -> right, max);
    
    return max;
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
    int h = height(root);
    int c = count(root);
    int m = largest(root, root -> data);
    printf("Height: %d\n",h);
    printf("Count: %d\n",c);
    printf("Max Ele Data: %d\n",m);
}