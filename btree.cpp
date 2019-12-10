#include<iostream>
#include<bits/stdc++.h>

using namespace std;


struct node
{
    int dat;
    node* left;
    node* right;
    node(int x) : dat(x) , left(NULL), right(NULL) {}
};

struct node* root = NULL;


node* createnew(int dat){
    node* temp = new node(dat);
    return temp;
}

void Insert(node** root, int dat){
    if(*root == NULL){
        *root = createnew(dat);
        return;
    }
    else if(dat <= (*root)->dat){
        Insert(&(*root)->left,dat);
    }
    else{
        Insert(&(*root)->right,dat);
    }

}

bool Search(node* root,int dat){
    if(root == NULL ) return false;
    else if(root->dat == dat) return true;
    else if(dat <= root->dat) return Search(root->left,dat);
    else return Search(root->right,dat);
}


int main(){
    Insert(&root,15);    
    Insert(&root,10);
    Insert(&root,20);
    Insert(&root,25);
    Insert(&root,8);
    Insert(&root,12);

    if(Search(root,8)) cout << "found";
    else cout << "lol";
    cout << root->dat;
}