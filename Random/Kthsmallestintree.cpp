#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Treenode {
    int val;
    Treenode *left;
    Treenode *right;
    Treenode(int x) : val(x), left(NULL), right(NULL){}
};

Treenode* root = NULL ;

Treenode* createnew(int dat){
    Treenode* temp = new Treenode(dat);
    // temp->dat = dat;
    // temp->left = NULL;
    // temp->right = NULL;
    return temp;
}


void Insert(Treenode** root, int val){
    if( *root == NULL){
        *root = createnew(val);
        return;
    }
    else if(val <= (*root)->val){
        Insert(&(*root)->left,val);
    }
    else{
        Insert(&(*root)->right,val);
    }

}

void Inorder(Treenode* root,int& it,int K,int& smallest){

    if(root == NULL) return ;
    
    Inorder(root->left,it,K,smallest);
    ++it;
    if(it == K) { smallest = root->val; return;}
    // cout << root->val << " ";
    Inorder(root->right,it,K,smallest);
}

int main(){
    Insert(&root,15);    
    Insert(&root,10);
    Insert(&root,20);
    Insert(&root,25);
    Insert(&root,8);
    Insert(&root,12);
    int smallest = -1;
    int it = 0;
    Inorder(root,it,3,smallest);
    cout << smallest;
}
